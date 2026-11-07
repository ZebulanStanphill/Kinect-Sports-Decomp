typedef struct Iface_829F5010 Iface_829F5010;

typedef struct IfaceVt_829F5010 {
    void *slot0;
    void *slot4;
    void *slot8;
    void (*Release)(Iface_829F5010 *self, int arg);
} IfaceVt_829F5010;

struct Iface_829F5010 {
    IfaceVt_829F5010 *vt;
};

typedef struct Params_829F5010 {
    unsigned int type;
    int field4;
    int field8;
    Iface_829F5010 *iface;
} Params_829F5010;

extern void *fn_829F5368(unsigned int size);
extern void fn_829F5370(void *ctx);
extern void *fn_829F5CA8(void);
extern void fn_829F6400(void *ctx);
extern unsigned int fn_829F6448(void *ctx, Params_829F5010 *p);
extern void *lbl_83218C30;
extern Iface_829F5010 *lbl_83218C34;

unsigned int fn_829F5010(Params_829F5010 *p)
{
    unsigned int hr;
    void *ctx;

    hr = 0;
    if (lbl_83218C30 != 0) {
        hr = 0x4df;
        goto cleanup;
    }
    if (p == 0) {
        hr = 0x57;
        goto cleanup;
    }
    if (p->type < 1 || p->type > 3)
        goto done;
    lbl_83218C34 = p->iface;
    lbl_83218C30 = fn_829F5368(0x106c0) ? fn_829F5CA8() : 0;
    if (lbl_83218C30 == 0) {
        hr = 0xe;
        goto cleanup;
    }
    hr = fn_829F6448(lbl_83218C30, p);
    if (hr == 0)
        goto done;
cleanup:
    ctx = lbl_83218C30;
    if (ctx != 0) {
        fn_829F6400(ctx);
        fn_829F5370(ctx);
    }
    lbl_83218C30 = 0;
done:
    if (lbl_83218C34 != 0)
        lbl_83218C34->vt->Release(lbl_83218C34, 0);
    return hr;
}
