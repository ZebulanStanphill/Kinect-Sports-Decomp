#include "xdk/vectorintrinsics.h"

typedef struct {
    __vector4 first;      /* 0x00 */
    __vector4 second;     /* 0x10 */
    unsigned short state; /* 0x20 */
    unsigned char active; /* 0x22 */
    unsigned char kind;   /* 0x23 */
    int value;            /* 0x24 */
    int id;               /* 0x28 */
    int pad2c;            /* 0x2c */
    char name[0x40];      /* 0x30 */
    int pad70;            /* 0x70 */
    int extra;            /* 0x74 */
} Entry_8262C4F8;

typedef struct {
    __vector4 first;  /* 0x00 */
    __vector4 second; /* 0x10 */
} Pair_8262C4F8;

typedef struct {
    char pad[0x12c];
    char pool[1]; /* 0x12c */
} Owner_8262C4F8;

extern void XMemCpy(char *dest, const char *src, int count);
extern Pair_8262C4F8 *fn_8251E4D0(void *pool);

int fn_8262C4F8(Owner_8262C4F8 *self, Entry_8262C4F8 *entry, int id, int extra, unsigned char kind, int value,
                const char *name, __vector4 first, __vector4 second)
{
    Pair_8262C4F8 *pair;

    entry->kind = kind;
    entry->value = value;
    entry->first = first;
    entry->state = 0;
    entry->second = second;
    XMemCpy(entry->name, name, 0x40);
    entry->extra = extra;
    entry->active = 1;
    entry->id = id;
    pair = fn_8251E4D0(self->pool);
    pair->first = first;
    pair->second = second;
    return 1;
}
