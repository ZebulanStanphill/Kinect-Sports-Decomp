#include "xdk/vectorintrinsics.h"

typedef struct Context_82A45B18 {
    __vector4 data[3];
} Context_82A45B18;

typedef struct Entry_82A45B18 {
    __vector4 data[3]; /* 0x00 */
    int dirty[3];      /* 0x30 */
    char pad3c[4];
    Context_82A45B18 *ctx; /* 0x40 */
    char *buffer;          /* 0x44 */
    char pad48[8];
    unsigned short id; /* 0x50 */
    char pad52[0xe];
} Entry_82A45B18; /* 0x60 */

typedef struct Owner_82A45B18 {
    unsigned int count;      /* 0x00 */
    unsigned int flags;      /* 0x04 */
    Entry_82A45B18 *entries; /* 0x08 */
} Owner_82A45B18;

typedef struct CriticalSection_82A45B18 CriticalSection_82A45B18;

extern CriticalSection_82A45B18 lbl_8315D948;

void RtlEnterCriticalSection(CriticalSection_82A45B18 *section);
void RtlLeaveCriticalSection(CriticalSection_82A45B18 *section);
void __dcbf(int offset, void const *base);
unsigned long __cdecl _byteswap_ulong(unsigned long v);

void fn_82A45B18(Owner_82A45B18 *o)
{
    unsigned int i;

    RtlEnterCriticalSection(&lbl_8315D948);
    for (i = 0; i < o->count; i++) {
        Entry_82A45B18 *entries = o->entries;
        Entry_82A45B18 *e = &entries[i];
        Context_82A45B18 *ctx = e->ctx;

        if ((*(unsigned int *)e->data & 0x300000) != 0) {
            char *buffer = e->buffer;
            int size = (*(unsigned int *)e->data >> 14) & 0x1f00;
            int offset;

            for (offset = 0; offset < size; offset += 0x80) {
                __dcbf(offset, buffer);
            }
            if (e->dirty[0] != 0) {
                ctx->data[0] = e->data[0];
                e->dirty[0] = 0;
            }
            if (e->dirty[1] != 0) {
                ctx->data[1] = e->data[1];
                e->dirty[1] = 0;
            }
            if (e->dirty[2] != 0) {
                ctx->data[2] = e->data[2];
                e->dirty[2] = 0;
            }
        }
        *(unsigned int *)(((e->id >> 5) + 0x1FFA8650) * 4) = _byteswap_ulong(1 << (e->id & 31));
        __emit(0x7C0006AC);
    }
    o->flags &= ~0x20000;
    RtlLeaveCriticalSection(&lbl_8315D948);
}
