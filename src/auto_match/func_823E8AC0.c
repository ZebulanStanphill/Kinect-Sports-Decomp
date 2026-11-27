#include "xdk/vectorintrinsics.h"

typedef struct Item_823E8AC0 {
    char name[0x24]; /* 0x00 */
    unsigned int id; /* 0x24 */
} Item_823E8AC0;

typedef struct Owner_823E8AC0 Owner_823E8AC0;

extern Item_823E8AC0 *fn_822B4148(Owner_823E8AC0 *self, int layer, __vector4 position);
extern unsigned int fn_823DC1D0(const __vector4 *points, unsigned int count, __vector4 target);
extern unsigned int fn_8265BF48(const char *name, int flags);

unsigned int fn_823E8AC0(Owner_823E8AC0 *owner, int layer, __vector4 position, const __vector4 *points,
                         const unsigned int *values, unsigned int count)
{
    unsigned int matchIndices[7];
    unsigned int matchValues[7];
    __vector4 matchPoints[7];
    Item_823E8AC0 *item;
    unsigned int id;
    unsigned int found;
    unsigned int i;

    item = fn_822B4148(owner, layer, position);
    if (item != 0) {
        id = fn_8265BF48(item->name, 0);
    } else {
        id = 0;
    }
    found = 0;
    for (i = 0; i < count; i++) {
        item = fn_822B4148(owner, layer, points[i]);
        if (item != 0 && fn_8265BF48(item->name, 0) == id) {
            matchPoints[found] = points[i];
            matchValues[found] = values[i];
            matchIndices[found] = i;
            found++;
        }
    }
    if (found != 0) {
        return matchIndices[fn_823DC1D0(matchPoints, found, position)];
    }
    return fn_823DC1D0(points, count, position);
}
