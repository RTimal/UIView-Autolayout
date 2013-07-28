/*
 The MIT License (MIT)
 
 Copyright (c) 2013 Rajiev Timal
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 
 */

#import "UIView+Autolayout.h"

@implementation UIView (Autolayout)

- (NSLayoutConstraint *)constrainWithAttribute:(NSLayoutAttribute)attribute1 relatedBy:(NSLayoutRelation)relation view2:(UIView *)view2 attribute:(NSLayoutAttribute)attribute2 multipliedBy:(float)multiplier plus:(float)constant addedToView:(UIView *)leastCommonAncestor
{
	NSLayoutConstraint *constraint = [NSLayoutConstraint constraintWithItem:self attribute:attribute1 relatedBy:relation toItem:view2 attribute:attribute2 multiplier:multiplier constant:constant];
	self.translatesAutoresizingMaskIntoConstraints = NO;
	[leastCommonAncestor addConstraint:constraint];
	return constraint;
}

@end
