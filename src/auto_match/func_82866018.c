extern void *fn_82A29DE8(const char *name, unsigned int access, unsigned int share, void *security,
                         unsigned int creation, unsigned int flags, void *templateFile);
extern unsigned int fn_82A1F470(void);

int fn_82866018(const char *name, unsigned int mode, unsigned char overlapped, unsigned char noBuffering, void **out)
{
    unsigned int access;
    unsigned int share;
    unsigned int creation;
    unsigned int flags;
    void *h;
    unsigned int err;

    if (name == 0) {
        return 0x1f;
    }
    switch (mode) {
    case 0:
        share = 1;
        access = 0x80000000;
        creation = 3;
        break;
    case 1:
        share = 2;
        access = 0x40000000;
        creation = 4;
        break;
    case 2:
        share = 2;
        access = 0x40000000;
        creation = 2;
        break;
    case 3:
        share = 3;
        access = 0xC0000000;
        creation = 4;
        break;
    default:
        *out = 0;
        return 0x1f;
    }
    flags = 0x08000000;
    if (noBuffering) {
        flags = 0x28000000;
    }
    if (overlapped) {
        flags |= 0x40000000;
    }
    h = fn_82A29DE8(name, access, share, 0, creation, flags, 0);
    *out = h;
    if (h == (void *)-1) {
        err = fn_82A1F470();
        if (err == 2 || err == 3) {
            return 0x42;
        }
        return 2;
    }
    return 1;
}
