//
//  AppDelegate.h
//  EDGE_FireBase
//
//  Created by EDGE on 25/10/17.
//  Copyright © 2017 EDGE. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

