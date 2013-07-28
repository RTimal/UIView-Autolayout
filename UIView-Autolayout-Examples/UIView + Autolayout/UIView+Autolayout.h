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

#import <UIKit/UIKit.h>

@interface UIView (Autolayout)



/**
 *Constrains a view's attribute to another view's attribute, using the format view1.attribute1 = view2.attribute2  * multiplier + constant
 *
 *@param attribute1 attribute of receiving view that is being constrained
 *@param relation relation such as NSLayoutRelationEqual
 *@param view2 view which has attribute that the receiving view's attribute is being constrained to
 *@param multiplier multiplier applied to attribute2
 *@param constant constant added to attribute2
 *@return NSLayoutConstraint*
 *
 */
- (NSLayoutConstraint *)constrainWithAttribute:(NSLayoutAttribute)attribute1 relatedBy:(NSLayoutRelation)relation view2:(UIView *)view2 attribute:(NSLayoutAttribute)attribute2 multipliedBy:(float)multiplier plus:(float)constant addedToView:(UIView*)leastCommonAncestor;

@end
