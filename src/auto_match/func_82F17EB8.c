typedef struct Rect_82F17EB8 { int left, top, right, bottom; } Rect_82F17EB8;
typedef struct Size_82F17EB8 { int cx, cy; } Size_82F17EB8;
typedef struct Plane_82F17EB8 {
    void *a;      /* +0x00 */
    void *b;      /* +0x04 */
    int c[4];     /* +0x08 */
} Plane_82F17EB8;

typedef struct Obj_82F17EB8 {
    Rect_82F17EB8 r1;        /* 0x00 */
    Rect_82F17EB8 r2;        /* 0x10 */
    int area1;               /* 0x20 */
    int area2;               /* 0x24 */
    Size_82F17EB8 s1;        /* 0x28 */
    Size_82F17EB8 s2;        /* 0x30 */
    Size_82F17EB8 s3;        /* 0x38 */
    Plane_82F17EB8 pl[3];    /* 0x40, 0x58, 0x70 */
    void *out[3];            /* 0x88 */
} Obj_82F17EB8;

extern void fn_82EDFFC0(Rect_82F17EB8 *r, void *src);
extern void fn_82F17D48(Obj_82F17EB8 *o);
extern int fn_82F17DD8(void **a, void **b, int *c, void *src, int n);

void fn_82F17EB8(Obj_82F17EB8 *o, int *status, void *src, void *dst,
                 int n, int cx, int cy)
{
    void **p0a = &o->pl[0].a;
    void **p0b = &o->pl[0].b;
    void **p1a = &o->pl[1].a;
    void **p1b = &o->pl[1].b;
    void **p2a = &o->pl[2].a;
    void **p2b = &o->pl[2].b;
    Rect_82F17EB8 *rc;
    int w;
    int h;
    int half;
    int r;
    void *a;
    void *b;
    void *c;

    *p0a = 0;
    *p0b = 0;
    *p1a = 0;
    *p1b = 0;
    *p2a = 0;
    *p2b = 0;
    fn_82EDFFC0(&o->r1, src);
    fn_82EDFFC0(&o->r2, dst);
    rc = &o->r2;
    h = o->r1.bottom - o->r1.top;
    w = o->r1.right - o->r1.left;
    o->area1 = w * h;
    o->area2 = (rc->right - rc->left) * (rc->bottom - rc->top);
    o->s1.cx = w;
    o->s1.cy = h;
    o->s2.cx = rc->right - rc->left;
    o->s2.cy = rc->bottom - rc->top;
    if (cx != 0) {
        o->s3.cx = cx;
        o->s3.cy = cy;
    } else {
        o->s3.cx = w - 0x40;
        o->s3.cy = h - 0x40;
    }
    half = n >> 1;
    r = fn_82F17DD8(p1a, p1b, o->pl[1].c, dst, half);
    *status = r;
    if (r != 0)
        goto done;
    if (*p1a == 0 || *p1b == 0) {
        *status = -3;
        goto done;
    }
    r = fn_82F17DD8(p2a, p2b, o->pl[2].c, dst, half);
    *status = r;
    if (r != 0)
        goto done;
    if (*p2a == 0 || *p2b == 0) {
        *status = -3;
        goto done;
    }
    r = fn_82F17DD8(p0a, p0b, o->pl[0].c, src, n);
    *status = r;
    if (r != 0)
        goto done;
    a = *p0a;
    if (a == 0 || *p0b == 0) {
        *status = -3;
        goto done;
    }
    b = *p1a;
    c = *p2a;
    o->out[0] = a;
    o->out[1] = b;
    o->out[2] = c;
    return;
done:
    fn_82F17D48(o);
}
