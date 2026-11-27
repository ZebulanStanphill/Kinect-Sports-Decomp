#include "xdk/vectorintrinsics.h"

typedef struct Point_82D47B60 {
    __vector4 normal; /* 0x00 */
    float distance;   /* 0x10 */
    int key;          /* 0x14 */
    char padding18[0x28];
    int index; /* 0x40 */
} Point_82D47B60;

typedef struct Collector_82D47B60 {
    int unknown;
    float distance;        /* 0x04 */
    unsigned char found;   /* 0x08 */
    Point_82D47B60 *point; /* 0x0c */
} Collector_82D47B60;

void fn_82D47B60(Collector_82D47B60 *self, void *event, const Point_82D47B60 *point)
{
    if (point->distance >= self->distance) {
        return;
    }
    self->distance = point->distance;
    self->point->normal = point->normal;
    self->point->distance = point->distance;
    self->point->key = point->key;
    ((int *)self->point)[self->point->index + 8] = -1;
    {
        unsigned char *pFound = &self->found;
        *pFound = 1;
    }
}
