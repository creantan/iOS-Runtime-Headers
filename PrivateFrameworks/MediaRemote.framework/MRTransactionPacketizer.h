/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionPacketizer : NSObject {
    NSMutableDictionary * _incomingPackets;
    NSMutableArray * _outgoingPackets;
}

@property (nonatomic, readonly) BOOL hasMorePacketsToPacketize;
@property (nonatomic, readonly) BOOL hasMorePacketsToUnpacketize;

- (void)dealloc;
- (BOOL)hasMorePacketsToPacketize;
- (BOOL)hasMorePacketsToUnpacketize;
- (void)packetize:(id)arg1 packageSize:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)unpacketize:(id)arg1 completion:(id /* block */)arg2;

@end