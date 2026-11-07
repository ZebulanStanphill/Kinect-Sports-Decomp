void *memset(void *, int, unsigned int);

typedef struct Obj_82C0B678 {
    char pad0[0x188];
    int state;              /* 0x188 */
    char pad18c[0x248 - 0x18C];
    void *handle;           /* 0x248 */
    unsigned int mode;      /* 0x24c */
} Obj_82C0B678;

typedef struct Info_82C0B678 {
    unsigned int a;         /* 0x0 */
    unsigned int b;         /* 0x4 */
    unsigned __int64 c;     /* 0x8 */
} Info_82C0B678;

extern int fn_82C09CA0(Obj_82C0B678 *p);
extern int fn_82C0B000(Obj_82C0B678 *p, unsigned int *a, unsigned int *b,
                       Info_82C0B678 *info);
extern int fn_82C175C0(void *h, unsigned int a, unsigned int b, int isThree,
                       int isPending, unsigned int x, unsigned __int64 y,
                       unsigned int *mode, int extra);
extern int fn_82C1C550(void *h, unsigned int *out, unsigned int *mode, int extra);

int fn_82C0B678(Obj_82C0B678 *p, unsigned int *out)
{
    unsigned int *mode;
    int r;

    if (p == 0 || p->handle == 0) {
        return 2;
    }
    if (out != 0) {
        *out = 0;
    }
    while (p->state != 6) {
        r = fn_82C09CA0(p);
        if (r != 0) {
            return r;
        }
    }
    mode = &p->mode;
    switch (*mode) {
    case 0:
        r = 0;
        break;
    case 1: {
        unsigned int a;
        unsigned int b;
        Info_82C0B678 info;
        int isPending;
        int isThree;
        int hr;

        a = 0;
        b = 0;
        memset(&info, 0, sizeof(info));
        isPending = 0;
        isThree = 0;
        hr = fn_82C0B000(p, &a, &b, &info);
        if (hr == 0x80040005) {
            isPending = 1;
        } else {
            if (hr < 0) {
                p->state = 7;
                return hr;
            }
            if (hr == 3) {
                isThree = 1;
            }
        }
        r = fn_82C175C0(p->handle, a, b, isThree, isPending, info.b, info.c, mode, 0);
        if (r < 0) {
            p->state = 7;
            return 1;
        }
        break;
    }
    case 2:
        r = fn_82C1C550(p->handle, out, mode, 0);
        if (r < 0) {
            p->state = 7;
            return 1;
        }
        break;
    case 3:
        r = 0;
        break;
    default:
        r = 0;
        break;
    }
    if (r == 5) {
        return 6;
    }
    return (*mode == 0) ? 6 : 0;
}
