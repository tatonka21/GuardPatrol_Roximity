//
//  STIBeacon.h
//  GuardTourDemo
//
//  Created by LS on 2014-07-19.
//  Copyright (c) 2014 Seetechnologies Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class STIPatrol, STIProperty;

@interface STIBeacon : NSManagedObject

@property (nonatomic, retain) NSString * beaconId;
@property (nonatomic, retain) NSNumber * checked;
@property (nonatomic, retain) NSNumber * checkedCount;
@property (nonatomic, retain) NSNumber * currentProximityValue;
@property (nonatomic, retain) NSNumber * differentProximityCount;
@property (nonatomic, retain) NSString * errorMessage;
@property (nonatomic, retain) NSString * immediateMessage;
@property (nonatomic, retain) NSString * nearMessage;
@property (nonatomic, retain) NSSet *patrolsForCheckedBeacon;
@property (nonatomic, retain) STIProperty *propertyForBeacon;
@end

@interface STIBeacon (CoreDataGeneratedAccessors)

- (void)addPatrolsForCheckedBeaconObject:(STIPatrol *)value;
- (void)removePatrolsForCheckedBeaconObject:(STIPatrol *)value;
- (void)addPatrolsForCheckedBeacon:(NSSet *)values;
- (void)removePatrolsForCheckedBeacon:(NSSet *)values;

- (instancetype)initWithBeaconId: (NSString *) newBeaconId nearMessage: (NSString *) newNearMessage immediateMessage: (NSString *) newImmediateMessage errorMessage: (NSString *) newErrorMessage;

@end