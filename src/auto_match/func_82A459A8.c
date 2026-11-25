typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Context_82A459A8 {
    __vector4 data[3];
} Context_82A459A8;

typedef union Fetch_82A459A8 {
    __vector4 v;
    unsigned int w[4];
} Fetch_82A459A8;

typedef struct Entry_82A459A8 {
    Fetch_82A459A8 fetch; /* 0x00 */
    unsigned int w10;     /* 0x10 */
    unsigned int w14;     /* 0x14 */
    unsigned int w18;     /* 0x18 */
    char pad1c[0x40 - 0x1c];
    Context_82A459A8 *ctx; /* 0x40 */
    char pad44[0x50 - 0x44];
    unsigned short id; /* 0x50 */
    char pad52[2];
    unsigned int w54; /* 0x54 */
    unsigned int w58; /* 0x58 */
    char pad5c[4];
} Entry_82A459A8; /* 0x60 */

typedef struct Owner_82A459A8 {
    unsigned int count;      /* 0x00 */
    unsigned int flags;      /* 0x04 */
    Entry_82A459A8 *entries; /* 0x08 */
} Owner_82A459A8;

typedef struct CriticalSection_82A459A8 CriticalSection_82A459A8;

extern CriticalSection_82A459A8 lbl_8315D948;
extern Owner_82A459A8 *lbl_83219DD0[0x140];

void RtlEnterCriticalSection(CriticalSection_82A459A8 *section);
void RtlLeaveCriticalSection(CriticalSection_82A459A8 *section);
void __storewordbytereverse(unsigned int value, int offset, void *base);

void fn_82A459A8(void)
{
    unsigned int i;
    unsigned int j;
    Owner_82A459A8 *o;
    unsigned int word;
    unsigned int bits;

    RtlEnterCriticalSection(&lbl_8315D948);
    __storewordbytereverse(2, 0, (void *)0x7FEA1804);
    __emit(0x7C0006AC);
    for (i = 0; i < 0x140; i++) {
        o = lbl_83219DD0[i];
        if (o != 0 && (o->flags & 4) != 0 && (o->flags & 0x20000) == 0) {
            for (j = 0; j < o->count; j++) {
                Entry_82A459A8 *e = &o->entries[j];

                if ((e->fetch.w[0] & 0x300000) != 0) {
                    e->fetch.v = e->ctx->data[0];
                    word = e->fetch.w[0];
                    bits = (word >> 20) & 3;
                    if ((bits & 1) == 0) {
                        e->w14 = 0;
                        e->w54 = 0;
                        e->fetch.w[0] = word & ~0xfff;
                    }
                    if ((bits & 2) == 0) {
                        e->w18 = 0;
                        e->w58 = 0;
                        e->fetch.w[1] &= ~0xfff;
                    }
                    if (bits == 0) {
                        e->w10 &= 0x7fffffff;
                    }
                }
                __storewordbytereverse(1 << (e->id & 31), 0, (void *)(((e->id >> 5) + 0x1FFA8690) * 4));
                __emit(0x7C0006AC);
            }
            o->flags |= 0x20000;
        }
    }
    __storewordbytereverse(3, 0, (void *)0x7FEA1804);
    __emit(0x7C0006AC);
    RtlLeaveCriticalSection(&lbl_8315D948);
}
