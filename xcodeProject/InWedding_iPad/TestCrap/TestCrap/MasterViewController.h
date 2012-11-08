//
//  MasterViewController.h
//  TestCrap
//
//  Created by Brian Boccia on 11/7/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

//------------
//swei add
#import "MasterViewTableCell.h"
//------------

@protocol SubstitutableDetailViewController <NSObject>

- (void)showRootPopoverButtonItem:(UIBarButtonItem *)barButtonItem;
- (void)invalidateRootPopoverButtonItem:(UIBarButtonItem *)barButtonItem;

@end

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, UISplitViewControllerDelegate>
{
    UISplitViewController *splitViewController;

    UIPopoverController *popoverController;    
    UIBarButtonItem *rootPopoverButtonItem;
    
    //-----------------------------------------------------------
    //swei add
    NSInteger _lastSelectedCell;            //記錄上一次選擇的table cell 當點選新選項時 回覆舊的 
    //-----------------------------------------------------------
    
}

@property (nonatomic, strong) UISplitViewController *splitViewController;

@property (nonatomic, strong) UIPopoverController *popoverController;
@property (nonatomic, strong) UIBarButtonItem *rootPopoverButtonItem;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
