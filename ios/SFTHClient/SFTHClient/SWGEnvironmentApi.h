#import <Foundation/Foundation.h>
#import "SWGHeaterState.h"
#import "SWGTemperatueZoneStatus.h"
#import "SWGApiResponse.h"
#import "SWGTemperatureSummary.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGEnvironmentApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGEnvironmentApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGEnvironmentApi*) sharedAPI;
///
///
/// 
/// 
///
/// @param days 
/// 
///
/// @return 
-(NSNumber*) getForecastWithDays: (NSNumber*) days
    completionHandler: (void (^)(NSError* error)) handler;


///
///
/// 
/// gets the state of the heater
///
/// @param zoneId 
/// 
///
/// @return SWGHeaterState*
-(NSNumber*) getHeaterStateWithZoneId: (NSString*) zoneId
    completionHandler: (void (^)(SWGHeaterState* output, NSError* error)) handler;


///
///
/// 
/// 
///
/// @param zoneId 
/// 
///
/// @return SWGTemperatueZoneStatus*
-(NSNumber*) getZoneTemperatureWithZoneId: (NSString*) zoneId
    completionHandler: (void (^)(SWGTemperatueZoneStatus* output, NSError* error)) handler;


///
///
/// 
/// turns the heater on or off
///
/// @param zoneId 
/// @param state 
/// 
///
/// @return SWGApiResponse*
-(NSNumber*) setHeaterStateWithZoneId: (NSString*) zoneId
    state: (NSString*) state
    completionHandler: (void (^)(SWGApiResponse* output, NSError* error)) handler;


///
///
/// 
/// 
///
/// 
///
/// @return SWGTemperatureSummary*
-(NSNumber*) temperatureSummaryWithCompletionHandler: 
    (void (^)(SWGTemperatureSummary* output, NSError* error)) handler;



@end
