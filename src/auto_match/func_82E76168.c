typedef struct {
    void *vt;
    char pad[0x64];
    unsigned __int64 x68;
    int x70;
    int x74;
} T;

extern char lbl_8215EFE8[];
extern void fn_82E75AC8(T *p);
extern int fn_82E75568(T *p, int arg);

T *fn_82E76168(T *p, int arg, int a5, int a6, int a7, int a8, int *phr)
{
    fn_82E75AC8(p);
    p->x68 = 0;
    p->vt = lbl_8215EFE8;
    p->x70 = 0;
    p->x74 = 0;
    if (phr == 0 || *phr >= 0) {
        int hr = fn_82E75568(p, arg);
        if (phr != 0)
            *phr = hr;
    }
    return p;
}
