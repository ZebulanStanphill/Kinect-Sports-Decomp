#include "havok/hkTransform.h"

typedef struct {
    char pad[0x20];
    hkVector4 *points;
    int count;
} Points_82D9F968;

extern "C" void fn_82D9F968(Points_82D9F968 *self, const hkTransform *matrix)
{
    int i;
    int n = self->count;
    for (i = 0; i < n; i++) {
        self->points[i].setTransformedPos(*matrix, self->points[i]);
    }
}
