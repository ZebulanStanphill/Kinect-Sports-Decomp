/* Creates the XMA hardware context of every entry that has none yet (same shape as fn_8307DC58),
   copying the entry's 48-byte template into the new context and mapping it uncached when flag 4
   is set, then enables the context's bit in the XMA hardware register block. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Context_82A45180 {
    __vector4 data[3];
} Context_82A45180;

typedef struct Entry_82A45180 {
    __vector4 data[3];          /* 0x00 */
    char pad30[0x10];
    Context_82A45180 *ctx;      /* 0x40 */
    char pad44[0xc];
    unsigned short id;          /* 0x50 */
    char pad52[0xa];
    void *mapped;               /* 0x5c */
} Entry_82A45180;               /* 0x60 */

typedef struct Owner_82A45180 {
    unsigned int count;             /* 0x00 */
    unsigned int flags;             /* 0x04 */
    Entry_82A45180 *entries;        /* 0x08 */
} Owner_82A45180;

extern unsigned int lbl_83219DC8;

long XMACreateContext(Context_82A45180 **ctx);
unsigned long MmGetPhysicalAddress(void *p);
void *MmMapIoSpace(unsigned long type, unsigned long physical, unsigned long size, unsigned long protect);
unsigned long __cdecl _byteswap_ulong(unsigned long v);

long fn_82A45180(Owner_82A45180 *o)
{
    long hr = 0;
    unsigned int i;

    for (i = 0; i < o->count; i++) {
        Entry_82A45180 *e = &o->entries[i];
        if (e->ctx == 0) {
            unsigned short id;
            hr = XMACreateContext(&e->ctx);
            if (hr < 0) {
                return hr;
            }
            if (o->flags & 4) {
                __vector4 a = e->data[0];
                __vector4 b = e->data[1];
                __vector4 c = e->data[2];
                Context_82A45180 *d = e->ctx;
                d->data[0] = a;
                d->data[1] = b;
                d->data[2] = c;
                {
                    unsigned long phys = MmGetPhysicalAddress(e->ctx);
                    e->mapped = MmMapIoSpace(2, phys, 0x40, 0x404);
                }
            }
            id = (unsigned short)((int)(MmGetPhysicalAddress(e->ctx) - lbl_83219DC8) >> 6);
            e->id = id;
            *(unsigned int *)(((id >> 5) + 0x1FFA86A0) * 4) = _byteswap_ulong(1 << (id & 31));
            __emit(0x7C0006AC);
        }
    }
    o->flags |= 0x40000;
    return hr;
}
