/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSMutableArray;

@interface GEOETARoute : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    struct { 
        unsigned int historicTravelTime : 1; 
        unsigned int routeNoLongerValid : 1; 
    } _has;
    unsigned int _historicTravelTime;
    } _incidentEndOffsetsInETARoutes;
    NSMutableArray *_incidentsOffReRoutes;
    NSMutableArray *_incidentsOnETARoutes;
    NSMutableArray *_incidentsOnReRoutes;
    NSMutableArray *_invalidSectionZilchPoints;
    NSMutableArray *_reroutedRoutes;
    NSData *_routeID;
    NSMutableArray *_steps;
    } _trafficColorOffsets;
    } _trafficColors;
    NSData *_zilchPoints;
    bool_routeNoLongerValid;
}

@property(readonly) double expectedTime;
@property bool hasHistoricTravelTime;
@property(readonly) bool hasRouteID;
@property bool hasRouteNoLongerValid;
@property(readonly) bool hasZilchPoints;
@property unsigned int historicTravelTime;
@property(readonly) unsigned int* incidentEndOffsetsInETARoutes;
@property(readonly) unsigned long long incidentEndOffsetsInETARoutesCount;
@property(retain) NSMutableArray * incidentsOffReRoutes;
@property(retain) NSMutableArray * incidentsOnETARoutes;
@property(retain) NSMutableArray * incidentsOnReRoutes;
@property(retain) NSMutableArray * invalidSectionZilchPoints;
@property(retain) NSMutableArray * reroutedRoutes;
@property(retain) NSData * routeID;
@property bool routeNoLongerValid;
@property(retain) NSMutableArray * steps;
@property(readonly) unsigned int* trafficColorOffsets;
@property(readonly) unsigned long long trafficColorOffsetsCount;
@property(readonly) unsigned int* trafficColors;
@property(readonly) unsigned long long trafficColorsCount;
@property(retain) NSData * zilchPoints;

- (void)addIncidentEndOffsetsInETARoute:(unsigned int)arg1;
- (void)addIncidentsOffReRoutes:(id)arg1;
- (void)addIncidentsOnETARoute:(id)arg1;
- (void)addIncidentsOnReRoutes:(id)arg1;
- (void)addInvalidSectionZilchPoints:(id)arg1;
- (void)addReroutedRoute:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (void)clearIncidentEndOffsetsInETARoutes;
- (void)clearIncidentsOffReRoutes;
- (void)clearIncidentsOnETARoutes;
- (void)clearIncidentsOnReRoutes;
- (void)clearInvalidSectionZilchPoints;
- (void)clearReroutedRoutes;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expectedTime;
- (bool)hasHistoricTravelTime;
- (bool)hasRouteID;
- (bool)hasRouteNoLongerValid;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (unsigned int)incidentEndOffsetsInETARouteAtIndex:(unsigned long long)arg1;
- (unsigned int*)incidentEndOffsetsInETARoutes;
- (unsigned long long)incidentEndOffsetsInETARoutesCount;
- (id)incidentsOffReRoutes;
- (id)incidentsOffReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffReRoutesCount;
- (id)incidentsOnETARouteAtIndex:(unsigned long long)arg1;
- (id)incidentsOnETARoutes;
- (unsigned long long)incidentsOnETARoutesCount;
- (id)incidentsOnReRoutes;
- (id)incidentsOnReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnReRoutesCount;
- (id)invalidSectionZilchPoints;
- (id)invalidSectionZilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)invalidSectionZilchPointsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)remainingTimeAlongRoute:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (id)reroutedRouteAtIndex:(unsigned long long)arg1;
- (id)reroutedRoutes;
- (unsigned long long)reroutedRoutesCount;
- (id)routeID;
- (bool)routeNoLongerValid;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHasRouteNoLongerValid:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setIncidentEndOffsetsInETARoutes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setIncidentsOffReRoutes:(id)arg1;
- (void)setIncidentsOnETARoutes:(id)arg1;
- (void)setIncidentsOnReRoutes:(id)arg1;
- (void)setInvalidSectionZilchPoints:(id)arg1;
- (void)setReroutedRoutes:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteNoLongerValid:(bool)arg1;
- (void)setSteps:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setZilchPoints:(id)arg1;
- (id)stepAtIndex:(unsigned long long)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end