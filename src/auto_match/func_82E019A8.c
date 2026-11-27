#include "xdk/vectorintrinsics.h"

typedef struct Aabb_82E019A8 {
    __vector4 min; /* 0x00 */
    __vector4 max; /* 0x10 */
} Aabb_82E019A8;

typedef struct Segment_82E019A8 {
    char pad0[0x50];
    __vector4 start; /* 0x50 */
    __vector4 end;   /* 0x60 */
    char pad70[0xe0 - 0x70];
} Segment_82E019A8;

typedef struct Info_82E019A8 {
    char pad0[0x20];
    signed char count; /* 0x20 */
} Info_82E019A8;

typedef struct Chain_82E019A8 {
    char pad0[0x1c];
    Info_82E019A8 *info; /* 0x1c */
    char pad20[0x48 - 0x20];
    Segment_82E019A8 *segments; /* 0x48 */
} Chain_82E019A8;

void fn_82E019A8(void *self, Chain_82E019A8 *chain, Aabb_82E019A8 *aabb)
{
    int i;

    aabb->min = __vminfp(chain->segments[0].start, chain->segments[0].end);
    aabb->max = __vmaxfp(chain->segments[0].start, chain->segments[0].end);
    for (i = 1; i < chain->info->count; i++) {
        Segment_82E019A8 *segment = &chain->segments[i];

        aabb->min = __vminfp(aabb->min, segment->end);
        aabb->min = __vminfp(aabb->min, segment->start);
        aabb->max = __vmaxfp(aabb->max, segment->end);
        aabb->max = __vmaxfp(aabb->max, segment->start);
    }
}
