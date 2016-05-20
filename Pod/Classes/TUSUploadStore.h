//
//  TUSUploadStore.h
//  Pods
//
//  Created by Jay Rogers on 5/20/16.
//
//

#import <Foundation/Foundation.h>

@interface TUSUploadStore : NSObject

-(BOOL)saveDictionaryForUpload:(NSString *)uploadId dictionary:(NSDictionary *)data;
-(NSDictionary *)loadDictionaryForUpload:(NSString *)uploadId;

@end
