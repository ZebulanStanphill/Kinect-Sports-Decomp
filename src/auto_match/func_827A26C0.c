typedef struct Item { int a; void *v; } Item;
typedef struct Ctx { char pad[0x14]; void *list; } Ctx;
typedef struct Obj { char pad[8]; Ctx *ctx; char pad2[0x5c]; unsigned short flags; } Obj;
extern void fn_82799C20(Ctx *c, Item *it);
extern Item *fn_827AEE00(void *list, int id);

void fn_827A26C0(Obj *p)
{
    void *l;
    Item *it;
    p->flags &= 0xfeff;
    l = p->ctx->list;
    if (l != 0) {
        it = fn_827AEE00(l, 0x7ffffffe);
        if (it != 0 && it->v != 0) {
            it->v = 0;
            fn_82799C20(p->ctx, it);
        }
    }
}
