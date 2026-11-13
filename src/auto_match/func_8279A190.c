typedef struct Sub_8279A190 {
    char pad[0x60];
    unsigned char flags;
} Sub_8279A190;

typedef struct List_8279A190 {
    void *mem;
    int x4;
    int x8;
    int xc;
    void *x10;
    Sub_8279A190 sub;
} List_8279A190;

typedef struct Obj_8279A190 {
    int pad0[2];
    int active;            /* 0x08 */
    int padc;
    void *f10;             /* 0x10 */
    int pad14[4];
    List_8279A190 list;    /* 0x24 */
    char pad[0x114 - 0x24 - sizeof(List_8279A190)];
    void *f114;            /* 0x114 */
} Obj_8279A190;

extern void fn_8267C498(void *p);
extern void fn_827ABAF0(void *p, int a, int b);

static __forceinline void Rel(void **pp)
{
    if (*pp != 0) fn_8267C498(*pp);
    *pp = 0;
}

static __forceinline void List_Clear(List_8279A190 *p)
{
    Sub_8279A190 *s = &p->sub;
    s->flags |= 1;
    fn_827ABAF0(p, 0, p->x4);
}

void fn_8279A190(Obj_8279A190 *o)
{
    if (o->active != 0) {
        Rel((void **)&o->active);
        Rel(&o->f10);
        Rel(&o->f114);
        List_Clear(&o->list);
    }
}
