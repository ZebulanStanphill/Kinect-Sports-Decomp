typedef struct Dev Dev;
typedef struct DevVtbl {
    void *slots[19];
    int (*Create)(Dev *self, int w, int h, int levels, int usage, unsigned int fmt, void **out);
} DevVtbl;
struct Dev {
    DevVtbl *vt;
};

extern Dev *lbl_83218C34;
extern void fn_82A0F060(void *a, int b, int c, int d, int e, int f, void *g);

void fn_82A0D628(void **p, int a, int b, int c, int d)
{
    void *tex;
    if (*p != 0) {
        tex = 0;
        if (lbl_83218C34 != 0) {
            lbl_83218C34->vt->Create(lbl_83218C34, 0xa0, 0x78, 4, 2, 0x182a0186, &tex);
        }
        fn_82A0F060(*p, a, b, c, 2, d, tex);
    }
}
