typedef unsigned char (*AllocHook_825B16A8)(void **out, unsigned int size, unsigned int alignment,
                                            int physical, unsigned int protect);

extern AllocHook_825B16A8 lbl_8328223C;
extern int fn_82A1BB18(void);
extern unsigned int fn_8259A230(void);
extern unsigned int fn_825B1978(unsigned int attributes);
extern void *fn_82549798(unsigned int size, unsigned int alignment, unsigned int protect, int flags);
extern void *fn_82522E60(unsigned int size, unsigned int alignment);
extern void XMemSet(void *dst, int value, unsigned int size);

static __forceinline unsigned int protect_825B16A8(unsigned int attributes)
{
    unsigned int protect;

    switch ((attributes >> 28) & 3) {
    case 0:
        protect = 0x20000404;
        break;
    case 1:
        protect = 0x204;
        break;
    case 2:
        protect = 4;
        break;
    case 3:
        protect = 0x404;
        break;
    default:
        protect = 4;
        break;
    }
    return protect;
}

static __forceinline unsigned int alignment_825B16A8(unsigned int attributes)
{
    unsigned int alignment = 4;

    switch ((attributes >> 24) & 0xf) {
    case 0:
        alignment = 1;
        break;
    case 1:
        alignment = 4;
        break;
    case 2:
        alignment = 8;
        break;
    case 4:
        alignment = 16;
        break;
    }
    return alignment;
}

void *fn_825B16A8(unsigned int size, unsigned int attributes)
{
    void *p;

    if (lbl_8328223C != 0) {
        fn_82A1BB18();
        if (fn_8259A230() == 0) {
            void *out = 0;
            unsigned char ok;

            if (attributes & 0x80000000) {
                unsigned int protect = protect_825B16A8(attributes);
                ok = lbl_8328223C(&out, size, fn_825B1978(attributes), 1, protect);
            } else {
                ok = lbl_8328223C(&out, size, alignment_825B16A8(attributes), 0, 0);
            }
            if (ok) {
                return out;
            }
        }
    }
    if (attributes & 0x80000000) {
        unsigned int protect = protect_825B16A8(attributes);
        p = fn_82549798(size, fn_825B1978(attributes), protect, 0);
    } else {
        p = fn_82522E60(size, alignment_825B16A8(attributes));
    }
    if (attributes & 0x40000000) {
        XMemSet(p, 0, size);
    }
    return p;
}
