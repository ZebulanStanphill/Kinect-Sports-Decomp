typedef struct State { char pad[0x40]; unsigned int mode; } State;
typedef struct Obj {
    char pad0[0xa0];
    int state;
    char pad1[0xbcc - 0xa4];
    int a;
    int b;
    int active;
} Obj;
extern void fn_82536590(int *p, int v);

void fn_8239C468(Obj *o, int which)
{
    if ((o->state == 0 || ((State *)o->state)->mode != 1) && o->active != 0) {
        fn_82536590(which ? &o->b : &o->a, 0);
        o->active = 0;
    }
}
