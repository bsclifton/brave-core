/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ActivityInfo, ContributionInfo, RecurringDonation;

NS_ASSUME_NONNULL_BEGIN

@interface PublisherInfo : NSManagedObject

+ (NSFetchRequest<PublisherInfo *> *)fetchRequest;

@property (nonatomic) int32_t excluded;
@property (nullable, nonatomic, copy) NSURL *faviconURL;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *provider;
@property (nullable, nonatomic, copy) NSString *publisherID;
@property (nullable, nonatomic, copy) NSURL *url;
@property (nonatomic) BOOL verified;
@property (nullable, nonatomic, retain) NSSet<ActivityInfo *> *activities;
@property (nullable, nonatomic, retain) NSSet<ContributionInfo *> *contributions;
@property (nullable, nonatomic, retain) NSSet<RecurringDonation *> *recurringDonations;

@end

@interface PublisherInfo (CoreDataGeneratedAccessors)

- (void)addActivitiesObject:(ActivityInfo *)value;
- (void)removeActivitiesObject:(ActivityInfo *)value;
- (void)addActivities:(NSSet<ActivityInfo *> *)values;
- (void)removeActivities:(NSSet<ActivityInfo *> *)values;

- (void)addContributionsObject:(ContributionInfo *)value;
- (void)removeContributionsObject:(ContributionInfo *)value;
- (void)addContributions:(NSSet<ContributionInfo *> *)values;
- (void)removeContributions:(NSSet<ContributionInfo *> *)values;

- (void)addRecurringDonationsObject:(RecurringDonation *)value;
- (void)removeRecurringDonationsObject:(RecurringDonation *)value;
- (void)addRecurringDonations:(NSSet<RecurringDonation *> *)values;
- (void)removeRecurringDonations:(NSSet<RecurringDonation *> *)values;

@end

NS_ASSUME_NONNULL_END