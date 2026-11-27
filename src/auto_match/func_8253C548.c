#include "xdk/vectorintrinsics.h"

typedef struct Event_8253C548 {
    int type;           /* 0x0 */
    int size;           /* 0x4 */
    int reserved8;      /* 0x8 */
    int reservedC;      /* 0xc */
    __vector4 position; /* 0x10 */
    float direction[3]; /* 0x20 */
    char pad2c[0x24];   /* 0x2c */
    int flag;           /* 0x50 */
    char pad54[0xc];    /* 0x54 */
} Event_8253C548;

typedef struct Target_8253C548 Target_8253C548;

typedef struct Target_8253C548Vtbl {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*handleEvent)(Target_8253C548 *self, Event_8253C548 *event); /* 0xc */
} Target_8253C548Vtbl;

struct Target_8253C548 {
    Target_8253C548Vtbl *vt;
};

extern void XMemSet(void *dst, int value, unsigned int size);
extern void fn_82529D38(Target_8253C548 *self, float *direction);

void fn_8253C548(Target_8253C548 *self, __vector4 *position, float *direction)
{
    Event_8253C548 event;

    XMemSet(&event.reserved8, 0, sizeof(event) - 8);
    event.type = 0x2a;
    event.size = 0x60;
    event.position = *position;
    if (direction != 0) {
        event.direction[0] = direction[0];
        event.direction[1] = direction[1];
        event.direction[2] = direction[2];
    } else {
        fn_82529D38(self, event.direction);
    }
    event.flag = 0;
    self->vt->handleEvent(self, &event);
}
