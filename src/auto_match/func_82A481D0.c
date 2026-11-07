typedef struct Elem_82A481D0 {
    int v0;                 /* 0x00 */
    char pad04[0x18];       /* 0x04 */
    unsigned int f1c;       /* 0x1c */
    int f20;                /* 0x20 */
} Elem_82A481D0;

typedef struct List_82A481D0 {
    char pad00[0x18];       /* 0x00 */
    Elem_82A481D0 **head;   /* 0x18 */
} List_82A481D0;

typedef struct Obj_82A481D0 {
    char pad000[0x8c];      /* 0x000 */
    char s8c[0x1d2 - 0x8c]; /* 0x08c */
    unsigned char cnt;      /* 0x1d2 */
    char pad1d3;            /* 0x1d3 */
    int f1d4;               /* 0x1d4 */
    int f1d8;               /* 0x1d8 */
    char pad1dc[0x18];      /* 0x1dc */
    List_82A481D0 list;     /* 0x1f4 */
} Obj_82A481D0;

extern int fn_82A47900(Obj_82A481D0 *p);
extern void fn_82A43340(void *a, int b, int c);
extern void fn_82A45900(int a, int b);

static __forceinline Elem_82A481D0 *Front_82A481D0(List_82A481D0 *l)
{
    return l->head ? *l->head : 0;
}

void fn_82A481D0(Obj_82A481D0 *p)
{
    int r;
    int n;
    unsigned int i;

    if (p->f1d4 == 0) {
        r = fn_82A47900(p);
        n = p->cnt - r;
        if (n != 0) {
            for (i = 0; i < (unsigned int)n; i++) {
                fn_82A43340(p->s8c, Front_82A481D0(&p->list)->f20,
                            Front_82A481D0(&p->list)->v0);
            }
            if (Front_82A481D0(&p->list)->f1c == 0xff) {
                fn_82A45900(p->f1d8, 0xfe);
                p->cnt = 0xfe;
            } else {
                p->cnt = (unsigned char)r;
            }
        }
    }
}
