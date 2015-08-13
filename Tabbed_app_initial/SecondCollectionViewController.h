//
//  SecondCollectionViewController.h
//  Tabbed_app_initial
//  Created by optimusmac4 on 7/15/15.
//  Copyright (c) 2015 optimusmac4. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface SecondCollectionViewController : UICollectionViewController <UITableViewDelegate>


@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, strong) NSString *actualName;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;
@property (nonatomic, strong) NSString *actualImage;

@end
