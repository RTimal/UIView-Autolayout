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
 *@param (NSlayoutAttribute)attribute1 Attribute of receiving view that is being constrained
 *@param (NSLayoutRelation)Relation relation such as NSLayoutRelationEqual
 *@param (UIView*)view2 View which has attribute that the receiving view's attribute is being constrained to
 *@param (float)Multiplier multiplier applied to attribute2
 *@param (float)Constant constant added to attribute2
 *@return NSLayoutConstraint*
 *
 */
- (NSLayoutConstraint *)constrainWithAttribute:(NSLayoutAttribute)attribute1 relatedBy:(NSLayoutRelation)relation view2:(UIView *)view2 attribute:(NSLayoutAttribute)attribute2 multipliedBy:(float)multiplier plus:(float)constant addedToView:(UIView*)leastCommonAncestor;

/**
 * Constraints a view to a particular size
 * @param (CGSize)size CGSize struct that contains a target width and height for the current view
 * @return NSMutableArray* - array of constraints that were added to the superview
 */
 
- (NSMutableArray *)constrainToSize:(CGSize)size;

@end
