#include "xdk/vectorintrinsics.h"

typedef struct Transform_8260AF38 {
    __vector4 columns[4]; /* 0x00 */
} Transform_8260AF38;

typedef struct System_8260AF38 {
    int reserved00[3];
    void *object; /* 0x0c */
    int reserved10[2];
    void *shape; /* 0x18 */
} System_8260AF38;

typedef struct Collection_8260AF38 {
    int reserved00[2];         /* 0x00 */
    char **bodies;             /* 0x08 */
    int bodyCount;             /* 0x0c */
    int reserved10;            /* 0x10 */
    System_8260AF38 **systems; /* 0x14 */
    int systemCount;           /* 0x18 */
    int reserved1c[4];         /* 0x1c */
    void **children;           /* 0x2c */
    int childCount;            /* 0x30 */
} Collection_8260AF38;

extern void fn_82CE68B8(Transform_8260AF38 *, const void *);
extern void fn_82D8BC78(int, const Transform_8260AF38 *);
extern void fn_8260A7E8(Collection_8260AF38 *, void *, void *, const Transform_8260AF38 *);
extern void fn_8260AD90(void *, const Transform_8260AF38 *);

void fn_8260AF38(Collection_8260AF38 *self, const Transform_8260AF38 *transform)
{
    int index;
    for (index = 0; index < self->bodyCount; ++index) {
        Transform_8260AF38 copy;
        copy.columns[0] = transform->columns[0];
        copy.columns[1] = transform->columns[1];
        copy.columns[2] = transform->columns[2];
        copy.columns[3] = transform->columns[3];
        fn_82CE68B8(&copy, self->bodies[index] + 0xf0);
        fn_82D8BC78(self->bodies[index], &copy);
    }
    for (index = 0; index < self->systemCount; ++index) {
        System_8260AF38 **systems = self->systems;
        fn_8260A7E8(self, systems[index]->object, systems[index]->shape, transform);
    }
    for (index = 0; index < self->childCount; ++index) {
        fn_8260AD90(self->children[index], transform);
    }
}
