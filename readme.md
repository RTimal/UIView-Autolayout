#Layout constraints are in the format:

###view1.attribute1 = view2.attribute2 * multiplier + constant
or  
###y = mx + b  
###Where '=' can be replaced by >= or <=

###This category emulates that structure

Works in iOS 7

	self.view.backgroundColor = [UIColor greenColor];
	//Frames become irrelevant
	UIView* view1 = [[UIView alloc] initWithFrame:CGRectZero];
	view1.backgroundColor = [UIColor redColor];
	
	
	//Frames become irrelevant
	UIView* view2 = [[UIView alloc] initWithFrame:CGRectZero];
	view2.backgroundColor = [UIColor blueColor];
	[self.view addSubview:view1];
	[self.view addSubview:view2];
	
	
	view2.layer.cornerRadius = 10.f;
	
	//You must add a width and height , as well as a position constraint. The category sets translatesAutoResizingMask = NO and adds the constraint to the specified ancestor view.
	
	
	//Red background
	[view1 constrainWithAttribute:NSLayoutAttributeLeft
						relatedBy:NSLayoutRelationEqual
							view2:self.view
						attribute:NSLayoutAttributeLeft
					 multipliedBy:1.f plus:0.f
					  addedToView:self.view];
	
	[view1 constrainWithAttribute:NSLayoutAttributeTop
						relatedBy:NSLayoutRelationEqual
							view2:self.view attribute:NSLayoutAttributeTop
					 multipliedBy:1.f plus:0.f addedToView:self.view];
	
	[view1 constrainWithAttribute:NSLayoutAttributeWidth
						relatedBy:NSLayoutRelationEqual
							view2:self.view attribute:NSLayoutAttributeWidth
					 multipliedBy:1.f plus:0.f
					  addedToView:self.view];
	
	[view1 constrainWithAttribute:NSLayoutAttributeHeight
						relatedBy:NSLayoutRelationEqual
							view2:self.view
						attribute:NSLayoutAttributeHeight
					 multipliedBy:1.f plus:0.f addedToView:self.view];
	
	
	
	//Blue square
	[view2 constrainToSize:CGSizeMake(100.f, 100.f)];
	
	[view2 constrainWithAttribute:NSLayoutAttributeCenterX
						relatedBy:NSLayoutRelationEqual
							view2:view1 attribute:NSLayoutAttributeCenterX
					 multipliedBy:1.f
							 plus:00.f
					  addedToView:self.view];
	
	[view2 constrainWithAttribute:NSLayoutAttributeCenterY
						relatedBy:NSLayoutRelationEqual
							view2:view1 attribute:NSLayoutAttributeCenterY
					 multipliedBy:1.f plus:0.f addedToView:self.view];