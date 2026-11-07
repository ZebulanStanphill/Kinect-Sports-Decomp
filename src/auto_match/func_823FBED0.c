typedef struct SharedPtr_823FBED0 {
    int px;
    void *pn;
} SharedPtr_823FBED0;

typedef struct Buf_823FBED0 {
    int a;
    int b;
} Buf_823FBED0;

extern unsigned char fn_8223AAC0(void *pn);
extern void *fn_82365BD8(Buf_823FBED0 *out, int v);
extern void fn_823FCEC8(void *obj, void *a2, void *a3, void *a4, void *a5,
                        void *a6, void *a7, void *a8,
                        SharedPtr_823FBED0 *a9, SharedPtr_823FBED0 *a10);
extern unsigned int lbl_821AD588;

int *fn_823FBED0(int *self, int a2, int a3, int a4, int a5, int a6, int a7,
                 int a8, SharedPtr_823FBED0 *w9, SharedPtr_823FBED0 *w10)
{
    int *obj;
    SharedPtr_823FBED0 t9;
    SharedPtr_823FBED0 t10;
    Buf_823FBED0 b2;
    Buf_823FBED0 b3;
    Buf_823FBED0 b4;
    Buf_823FBED0 b5;
    Buf_823FBED0 b6;
    Buf_823FBED0 b7;
    Buf_823FBED0 b8;
    void *pn;
    int px;

    self[1] = 1;
    self[0] = (int)&lbl_821AD588;
    self[2] = 1;
    obj = self + 3;
    if (obj != 0) {
        t10.px = 0;
        t10.pn = 0;
        pn = w10->pn;
        px = w10->px;
        if (pn != 0 && fn_8223AAC0(pn)) {
            t10.pn = pn;
            t10.px = px;
        }
        t9.px = 0;
        t9.pn = 0;
        pn = w9->pn;
        px = w9->px;
        if (pn != 0 && fn_8223AAC0(pn)) {
            t9.pn = pn;
            t9.px = px;
        }
        fn_823FCEC8(obj,
                    fn_82365BD8(&b2, a2),
                    fn_82365BD8(&b3, a3),
                    fn_82365BD8(&b4, a4),
                    fn_82365BD8(&b5, a5),
                    fn_82365BD8(&b6, a6),
                    fn_82365BD8(&b7, a7),
                    fn_82365BD8(&b8, a8),
                    &t9, &t10);
    }
    return self;
}
