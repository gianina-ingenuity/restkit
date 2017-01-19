//
//  DetailViewController.h
//  restkit
//
//  Created by Gerakin on 1/20/17.
//  Copyright © 2017 gee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "restkit+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

