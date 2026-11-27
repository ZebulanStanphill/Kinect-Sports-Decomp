#include "xdk/vectorintrinsics.h"

typedef struct Source_82F4DB90 {
    int second; /* 0x00 */
    int first;  /* 0x04 */
    int pad8[2];
    __vector4 value; /* 0x10 */
    char pad20[0x1c0 - 0x20];
} Source_82F4DB90;

typedef struct Global_82F4DB90 {
    char pad0[0x15d0];
    Source_82F4DB90 items[6]; /* 0x15d0 */
} Global_82F4DB90;

typedef struct Entry_82F4DB90 {
    __vector4 value; /* 0x00 */
    int first;       /* 0x10 */
    int second;      /* 0x14 */
    int pad18[2];
} Entry_82F4DB90;

extern Global_82F4DB90 *lbl_8326183C;

/* The loop is an inlined function of the global object: with the global read in fn_82F4DB90
   itself its pointer shares the register of the loop's source pointer. */
static __forceinline void Copy_82F4DB90(Global_82F4DB90 *global, Entry_82F4DB90 *out)
{
    int i;

    for (i = 0; i < 6; i++) {
        out[i].value = global->items[i].value;
        out[i].first = global->items[i].first;
        out[i].second = global->items[i].second;
    }
}

void fn_82F4DB90(Entry_82F4DB90 *out)
{
    Copy_82F4DB90(lbl_8326183C, out);
}
