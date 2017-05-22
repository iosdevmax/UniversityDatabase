//
//  AddStudentViewController.h
//  GuruCrafterHomeWork
//
//  Created by Syngmaster on 19/05/2017.
//  Copyright © 2017 Syngmaster. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class StudentMO;

@interface AddStudentViewController : UITableViewController

@property (strong, nonatomic) StudentMO *student;

@property (strong, nonatomic) NSManagedObjectContext* managedObjectContext;

@end
