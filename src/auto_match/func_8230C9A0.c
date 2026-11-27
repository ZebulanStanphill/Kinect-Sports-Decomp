#include "xdk/vectorintrinsics.h"

typedef struct Owner_8230C9A0 {
    char pad0[0x80];
    __vector4 first;  /* 0x80 */
    __vector4 second; /* 0x90 */
    char padA0[0xc8];
    unsigned int source; /* 0x168 */
    int enabled;         /* 0x16c */
} Owner_8230C9A0;

typedef struct Config_8230C9A0 {
    int unknown;
    float interval; /* 0x4 */
} Config_8230C9A0;

typedef struct State_8230C9A0 {
    char pad0[0xc];
    Owner_8230C9A0 *owner; /* 0xc */
    char pad10[0x24];
    Config_8230C9A0 *config; /* 0x34 */
    float remaining;         /* 0x38 */
    char pad3C[4];
    unsigned int value; /* 0x40 */
} State_8230C9A0;

extern unsigned char fn_8288B760(unsigned int);
extern int fn_8230CA60(State_8230C9A0 *, int, unsigned int);
extern void fn_822C4DB0(Owner_8230C9A0 *, __vector4, __vector4);

void fn_8230C9A0(State_8230C9A0 *self, float delta)
{
    int expired = 0;
    int enabled;
    unsigned int source;
    self->remaining -= delta;
    if (self->remaining < 0.0f) {
        expired = 1;
    }
    source = self->owner->source;
    if (source != 0) {
        enabled = fn_8288B760(source);
    } else {
        enabled = self->owner->enabled;
    }
    if (enabled != 0) {
        if (fn_8230CA60(self, expired, self->value) != 0) {
            self->remaining = self->config->interval;
        }
    } else {
        fn_822C4DB0(self->owner, self->owner->first, self->owner->second);
    }
}
