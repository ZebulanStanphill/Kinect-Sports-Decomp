#include "xdk/vectorintrinsics.h"

typedef struct Contact_82553810 {
    __vector4 start;      /* 0x00 */
    __vector4 end;        /* 0x10 */
    __vector4 offset;     /* 0x20 */
    __vector4 lastStart;  /* 0x30 */
    __vector4 lastOffset; /* 0x40 */
    __vector4 lastEnd;    /* 0x50 */
    char pad60[0x30];
    float radius; /* 0x90 */
    float height; /* 0x94 */
    float time;   /* 0x98 */
    int owner;    /* 0x9c */
    int hits;     /* 0xa0 */
    char padA4[0x4];
    int id;        /* 0xa8 */
    int anonymous; /* 0xac */
    char padB0[0x10];
    int active; /* 0xc0 */
    char padC4[0xc];
} Contact_82553810;

typedef struct World_82553810 {
    char pad0[0x420];
    Contact_82553810 contacts[80]; /* 0x420 */
    int order[80];                 /* 0x4520 */
    int count;                     /* 0x4660 */
} World_82553810;

int fn_82553810(World_82553810 *self, float height, float radius, int id, __vector4 start, __vector4 end)
{
    int index;

    if (self->count < 80) {
        self->contacts[self->count].start = start;
        self->contacts[self->count].end = end;
        self->contacts[self->count].height = height;
        self->contacts[self->count].radius = radius;
        self->contacts[self->count].lastStart = start;
        self->contacts[self->count].owner = -1;
        self->contacts[self->count].lastEnd = end;
        self->contacts[self->count].id = id;
        self->contacts[self->count].anonymous = id == 0;
        self->contacts[self->count].time = -2.0f;
        self->contacts[self->count].offset = __VMXGetReg(69);
        self->contacts[self->count].lastOffset = self->contacts[self->count].offset;
        self->contacts[self->count].hits = 0;
        self->contacts[self->count].active = 1;
        index = 0;
        while (self->order[index] != self->count) {
            index++;
        }
        self->count++;
        return index;
    }
    return -1;
}
