typedef struct Rect_82F143B0 {
    int x0;
    int y0;
    int x1;
    int y1;
} Rect_82F143B0;

typedef struct Obj_82F143B0 {
    Rect_82F143B0 a;   /* 0x00 */
    Rect_82F143B0 b;   /* 0x10 */
    int areaA;         /* 0x20 */
    int areaB;         /* 0x24 */
    int wA;            /* 0x28 */
    int hA;            /* 0x2c */
    int wB;            /* 0x30 */
    int hB;            /* 0x34 */
    void *m38;         /* 0x38 */
    void *m3c;         /* 0x3c */
    void *m40;         /* 0x40 */
} Obj_82F143B0;

extern void *fn_8265C940(int size, unsigned int flags);
extern void fn_82EDFFC0(void *rect, void *src);
extern void fn_82F142E8(void *self);
extern void *fn_82F44B68(void *mem, int *err, void *src, int arg);

Obj_82F143B0 *fn_82F143B0(Obj_82F143B0 *p, int *err, void *srcA, void *srcB)
{
    Rect_82F143B0 *b;
    void *mem;

    p->a.y0 = 0;
    p->a.x0 = 0;
    p->a.y1 = -1;
    p->a.x1 = -1;
    b = &p->b;
    b->y0 = 0;
    b->x0 = 0;
    b->y1 = -1;
    b->x1 = -1;
    p->m38 = 0;
    p->m3c = 0;
    p->m40 = 0;
    fn_82EDFFC0(p, srcA);
    fn_82EDFFC0(b, srcB);
    p->areaA = (p->a.x1 - p->a.x0) * (p->a.y1 - p->a.y0);
    p->areaB = (b->y1 - b->y0) * (b->x1 - b->x0);
    p->wA = p->a.x1 - p->a.x0;
    p->hA = p->a.y1 - p->a.y0;
    p->wB = b->x1 - b->x0;
    p->hB = b->y1 - b->y0;

    mem = fn_8265C940(0x18, 0x248c8000);
    p->m3c = mem ? fn_82F44B68(mem, err, srcB, 0) : 0;
    if (p->m3c == 0)
        goto fail;
    if (*err != 0)
        goto cleanup;
    mem = fn_8265C940(0x18, 0x248c8000);
    p->m40 = mem ? fn_82F44B68(mem, err, srcB, 0) : 0;
    if (p->m40 == 0)
        goto fail;
    if (*err != 0)
        goto cleanup;
    mem = fn_8265C940(0x18, 0x248c8000);
    p->m38 = mem ? fn_82F44B68(mem, err, srcA, 0) : 0;
    if (p->m38 == 0) {
fail:
        *err = -3;
        fn_82F142E8(p);
        return p;
    }
    if (*err != 0) {
cleanup:
        fn_82F142E8(p);
    }
    return p;
}
