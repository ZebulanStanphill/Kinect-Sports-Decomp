typedef struct { char pad0[0x4c]; int x5c; int x60; char pad54[0x24]; int x78; } Sub_82483BD8;
typedef struct { char pad0[0x10]; Sub_82483BD8 sub; } Obj_82483BD8;
extern void *fn_8225BD88(void);
extern void fn_8225BE20(void *p, int a, int b, int c);
extern void fn_82480298(Sub_82483BD8 *s);
static __forceinline int IsEnabled(Sub_82483BD8 *s)
{
    int v = s->x5c;
    if (s->x60 == 0) v = s->x78 == 0 ? v : 0;
    return v;
}
void fn_82483BD8(Obj_82483BD8 *self)
{
    if (IsEnabled(&self->sub) == 0 || self->sub.x60 == 0) {
        fn_8225BE20(fn_8225BD88(), 1, 1, 0);
    }
    fn_82480298(&self->sub);
}
