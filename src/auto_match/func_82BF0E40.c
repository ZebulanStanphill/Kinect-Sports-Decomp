typedef struct Obj { char pad[0x10]; int state; char pad14[0x24]; void *h; char pad3c[0x28]; unsigned int count; } Obj;
extern void fn_82BE8D50(void *h);

void fn_82BF0E40(Obj *p, int force)
{
    if (p->count != 0) {
        p->count--;
    }
    if ((force != 0 || p->count <= 0) && p->h != 0) {
        fn_82BE8D50(p->h);
        p->h = 0;
        p->state = 2;
    }
}
