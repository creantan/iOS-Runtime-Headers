/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKOctree : NSObject {
    struct GKCOctree<NSObject> { int (**x1)(); struct GKCOctreeNode<NSObject> {} *x2; } * _cOctree;
}

+ (id)octreeWithBoundingBox:(struct GKBox { })arg1 minimumCellSize:(float)arg2;

- (id)addElement:(id)arg1 withBox:(struct GKBox { })arg2;
- (id)addElement:(void *)arg1 withPoint:(void *)arg2; // needs 2 arg types, found 1: id
- (void)dealloc;
- (id)elementsAtPoint;
- (id)elementsInBox:(struct GKBox { })arg1;
- (id)init;
- (id)initWithBoundingBox:(struct GKBox { })arg1 minimumCellSize:(float)arg2;
- (BOOL)removeElement:(id)arg1;
- (BOOL)removeElement:(id)arg1 withNode:(id)arg2;

@end