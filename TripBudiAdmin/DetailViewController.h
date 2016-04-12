//
//  DetailViewController.h
//  TripBudiAdmin
//
//  Created by Boruch Chalk on 12/04/2016.
//  Copyright © 2016 bchalk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

