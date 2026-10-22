typedef struct { unsigned int type; int pad[3]; } Attr;
typedef struct { char pad[0x20]; int a; int b; } Leaf;
typedef struct { char pad[0x14]; Leaf *leaf; } Mid;
typedef struct { char pad[8]; Mid *mid; } Top;
typedef struct { char pad[0xc]; int kind; int pad10; Leaf *leaf; } Sub;
typedef struct {
    char pad[0x10];
    Sub *sub;
    char pad14[0x78 - 0x14];
    Attr *attrs;
    int nattrs;
} Obj;
typedef struct { Top *top; Obj *obj; int pad[2]; } Elem;
typedef struct { char pad[0x208]; int h; } Dev;
typedef struct {
    char pad[0x4c];
    Dev *dev;
    char pad50[0x744 - 0x50];
    Elem *begin;
    Elem *end;
    char pad74c[0x7c0 - 0x74c];
    int obj;
    char pad7c4[0x890 - 0x7c4];
    Top *top;
} Ctx;

extern void fn_825A4090(int h, Dev *dev, Obj *o);
extern void fn_82A1DD38(int a, int b, int c);

static unsigned char hasAttr(Obj *o)
{
    int i;
    for (i = 0; i < o->nattrs; i++) {
        if (o->attrs[i].type == 0x2002) {
            return 1;
        }
    }
    return 0;
}

void fn_825A8530(Ctx *c)
{
    int o = c->obj;
    Elem *e = c->begin;
    Elem *end = c->end;
    Leaf *l;

    if (o != 0 && hasAttr((Obj *)o)) {
        fn_825A4090(c->dev->h, c->dev, (Obj *)o);
        if (((Obj *)c->obj)->sub->kind == 10) {
            l = c->top->mid->leaf;
            fn_82A1DD38(((Obj *)c->obj)->sub->leaf->a, l->a, l->b);
        }
    }
    for (; e < end; e++) {
        if (e->obj != 0 && hasAttr(e->obj)) {
            fn_825A4090(c->dev->h, c->dev, e->obj);
            if (e->obj->sub->kind == 10) {
                l = e->top->mid->leaf;
                fn_82A1DD38(e->obj->sub->leaf->a, l->a, l->b);
            }
        }
    }
}
