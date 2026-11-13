typedef struct Request_82266C00 {
    unsigned int state;
    int data[6];
} Request_82266C00;

typedef struct Obj_82266C00 {
    char pad0[0xdc];
    void *a;                     /* 0xdc */
    void *c;                     /* 0xe0 */
    void *b;                     /* 0xe4 */
    char pade8[0x104 - 0xe8];
    Request_82266C00 req;        /* 0x104 */
    int f120;                    /* 0x120 */
    char pad124[0x50c - 0x124];
    int f50c;                    /* 0x50c */
    char pad510[0x62c - 0x510];
    int f62c;                    /* 0x62c */
    int f630;                    /* 0x630 */
} Obj_82266C00;

extern void *memset(void *dst, int c, unsigned int n);
extern void fn_82A81AF0(int h, int *a, Request_82266C00 *req);
extern void fn_82529320(void *p, int b);

void fn_82266C00(Obj_82266C00 *o)
{
    if (o->req.state != 0x3e5) {
        memset(&o->req, 0, sizeof(o->req));
        fn_82A81AF0(o->f62c, &o->f120, &o->req);
        o->f50c = 0;
        if (o->a != 0) {
            fn_82529320(o->a, 0);
            o->a = 0;
        }
        if (o->b != 0) {
            fn_82529320(o->b, 0);
            o->b = 0;
        }
        if (o->c != 0) {
            fn_82529320(o->c, 0);
            o->c = 0;
        }
    } else {
        o->f630 = 1;
    }
}
