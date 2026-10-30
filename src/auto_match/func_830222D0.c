typedef struct { char pad[0xc]; float f; } Cfg;
typedef struct { void *v; } Item;
typedef struct { char pad[8]; Cfg *cfg; char sub[1]; } Obj;

extern void fn_830221F8(void *sub, float f);
extern void fn_83022188(void *sub, Item *it);

void fn_830222D0(Obj *p, Item *it)
{
    fn_830221F8(p->sub, p->cfg->f);
    if (it->v) {
        fn_83022188(p->sub, it);
    }
}
