typedef struct Entry_8307DC58 {
    char pad0[0x40];
    void *ctx;              /* 0x40 */
    char pad44[0xc];
    unsigned short id;      /* 0x50 */
    char pad52[0xe];
} Entry_8307DC58;           /* 0x60 */

typedef struct Owner_8307DC58 {
    unsigned int count;             /* 0x00 */
    unsigned int flags;             /* 0x04 */
    Entry_8307DC58 *entries;        /* 0x08 */
} Owner_8307DC58;

extern unsigned int lbl_832654D0;

long XMACreateContext(void **ctx);
unsigned long MmGetPhysicalAddress(void *p);
unsigned long __cdecl _byteswap_ulong(unsigned long v);

long fn_8307DC58(Owner_8307DC58 *o)
{
    long hr = 0;
    unsigned int i;

    for (i = 0; i < o->count; i++) {
        Entry_8307DC58 *e = &o->entries[i];
        if (e->ctx == 0) {
            unsigned short id;
            hr = XMACreateContext(&e->ctx);
            if (hr < 0) {
                return hr;
            }
            id = (unsigned short)((int)(MmGetPhysicalAddress(e->ctx) - lbl_832654D0) >> 6);
            e->id = id;
            *(unsigned int *)(((id >> 5) + 0x1FFA86A0) * 4) = _byteswap_ulong(1 << (id & 31));
            __emit(0x7C0006AC);
        }
    }
    o->flags |= 0x40000;
    return hr;
}
