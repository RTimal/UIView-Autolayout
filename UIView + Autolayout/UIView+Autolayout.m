//
//  UIView+Autolayout.m
//  UIView-Autolayout-Examples
//
//  Created by Rajiev Timal on 7/24/13.
//  Copyright (c) 2013 Rajiev Timal. All rights reserved.
//

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
