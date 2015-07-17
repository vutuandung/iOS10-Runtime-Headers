/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface _HKChartCachePendingFetchOperationManager : NSObject {
    NSMutableDictionary * _fetchOperationsByIdentifier;
    NSMutableDictionary * _fetchOperationsByUUID;
}

- (void).cxx_destruct;
- (void)addFetchOperation:(id)arg1;
- (id)allPendingIdentifiers;
- (id)fetchOperationForIdentifier:(id)arg1;
- (id)init;
- (void)removeFetchOperation:(id)arg1;

@end