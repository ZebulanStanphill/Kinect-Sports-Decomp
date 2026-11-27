#include "xdk/vectorintrinsics.h"

extern unsigned char fn_8288B760(void *);
extern void fn_822CA5B0(void *);
extern void fn_822C6D68(void *, void *, void *, __vector4);

typedef struct Triple_822C4E60 {
    float x;
    float y;
    float z;
} Triple_822C4E60;

extern void fn_822C6B30(void *, void *, void *, Triple_822C4E60);

typedef struct State_822C4E60 {
    char pad[0x114];
    char *object; /* 0x114 */
    char gap[0x50];
    void *handle; /* 0x168 */
    int active;   /* 0x16c */
} State_822C4E60;

void fn_822C4E60(State_822C4E60 *self, __vector4 a, float distance)
{
    Triple_822C4E60 b;
    int active;
    if (self->handle)
        active = fn_8288B760(self->handle);
    else
        active = self->active;
    if (!active && self->handle)
        fn_822CA5B0(self->handle);
    else {
        void *object = self->object + 0x50;
        void *last = (char *)self + 0xc0;
        void *first = (char *)self + 0x80;
        fn_822C6D68(object, first, last, a);
        b.x = 0.0f;
        b.y = distance;
        b.z = 0.0f;
        fn_822C6B30(object, first, last, b);
    }
}
