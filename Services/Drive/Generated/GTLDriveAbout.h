/* Copyright (c) 2012 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLDriveAbout.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Description:
//   The API to interact with Drive.
// Documentation:
//   https://developers.google.com/drive/
// Classes:
//   GTLDriveAbout (0 custom class methods, 18 custom properties)
//   GTLDriveAboutAdditionalRoleInfoItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutExportFormatsItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutFeaturesItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutImportFormatsItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutMaxUploadSizesItem (0 custom class methods, 2 custom properties)
//   GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLDriveAboutAdditionalRoleInfoItem;
@class GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem;
@class GTLDriveAboutExportFormatsItem;
@class GTLDriveAboutFeaturesItem;
@class GTLDriveAboutImportFormatsItem;
@class GTLDriveAboutMaxUploadSizesItem;

// ----------------------------------------------------------------------------
//
//   GTLDriveAbout
//

// An item with user information and settings.

@interface GTLDriveAbout : GTLObject

// Additional ACL role info.
@property (retain) NSArray *additionalRoleInfo;  // of GTLDriveAboutAdditionalRoleInfoItem

// The domain sharing policy for the current user.
@property (copy) NSString *domainSharingPolicy;

// The ETag of the item.
@property (copy) NSString *ETag;

// The allowable export formats.
@property (retain) NSArray *exportFormats;  // of GTLDriveAboutExportFormatsItem

// List of additional features enabled on this account.
@property (retain) NSArray *features;  // of GTLDriveAboutFeaturesItem

// The allowable import formats.
@property (retain) NSArray *importFormats;  // of GTLDriveAboutImportFormatsItem

// A boolean indicating whether the authenticated app is installed by the
// authenticated user.
@property (retain) NSNumber *isCurrentAppInstalled;  // boolValue

// This is always drive#about.
@property (copy) NSString *kind;

// The largest change id.
@property (retain) NSNumber *largestChangeId;  // longLongValue

// List of max upload sizes for each file type.
@property (retain) NSArray *maxUploadSizes;  // of GTLDriveAboutMaxUploadSizesItem

// The name of the current user.
@property (copy) NSString *name;

// The current user's ID as visible in the permissions collection.
@property (copy) NSString *permissionId;

// The total number of quota bytes.
@property (retain) NSNumber *quotaBytesTotal;  // longLongValue

// The number of quota bytes used.
@property (retain) NSNumber *quotaBytesUsed;  // longLongValue

// The number of quota bytes used by trashed items.
@property (retain) NSNumber *quotaBytesUsedInTrash;  // longLongValue

// The number of remaining change ids.
@property (retain) NSNumber *remainingChangeIds;  // longLongValue

// The id of the root folder.
@property (copy) NSString *rootFolderId;

// A link back to this item.
@property (copy) NSString *selfLink;

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutAdditionalRoleInfoItem
//

@interface GTLDriveAboutAdditionalRoleInfoItem : GTLObject

// The role sets for this role info item.
@property (retain) NSArray *roleSets;  // of GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem

// The content type for this ACL role info item.
@property (copy) NSString *type;

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutExportFormatsItem
//

@interface GTLDriveAboutExportFormatsItem : GTLObject

// The content type to convert from.
@property (copy) NSString *source;

// The possible content types to convert to.
@property (retain) NSArray *targets;  // of NSString

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutFeaturesItem
//

@interface GTLDriveAboutFeaturesItem : GTLObject

// The name of the feature.
@property (copy) NSString *featureName;

// The request limit rate for this feature, in queries per second.
@property (retain) NSNumber *featureRate;  // doubleValue

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutImportFormatsItem
//

@interface GTLDriveAboutImportFormatsItem : GTLObject

// The imported file's content type to convert from.
@property (copy) NSString *source;

// The possible content types to convert to.
@property (retain) NSArray *targets;  // of NSString

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutMaxUploadSizesItem
//

@interface GTLDriveAboutMaxUploadSizesItem : GTLObject

// The max upload size for this type.
@property (retain) NSNumber *size;  // longLongValue

// The file type.
@property (copy) NSString *type;

@end


// ----------------------------------------------------------------------------
//
//   GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem
//

@interface GTLDriveAboutAdditionalRoleInfoItemRoleSetsItem : GTLObject

// The list of additional roles for this role set.
@property (retain) NSArray *additionalRoles;  // of NSString

// The primary role for this role set.
@property (copy) NSString *primaryRole;

@end