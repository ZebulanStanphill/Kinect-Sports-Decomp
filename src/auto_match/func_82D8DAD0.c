typedef struct {
    void *vt;
    int pad;
} ListenerA_82D8DAD0;
typedef struct {
    void *vt;
} ListenerB_82D8DAD0;
typedef struct {
    ListenerA_82D8DAD0 a;
    ListenerB_82D8DAD0 b;
    void *world;
} Body_82D8DAD0;
typedef struct {
    void *vt;
    int refs;
    Body_82D8DAD0 body;
} Obj_82D8DAD0;
extern void fn_82D81690(void *world, ListenerA_82D8DAD0 *l);
extern void fn_82D81528(void *world, ListenerB_82D8DAD0 *l);
extern void fn_82CE4118(Obj_82D8DAD0 *o);

static __forceinline Obj_82D8DAD0 *Outer(Body_82D8DAD0 *body)
{
    return (Obj_82D8DAD0 *)((char *)body - 8);
}

void fn_82D8DAD0(Body_82D8DAD0 *self)
{
    fn_82D81690(self->world, Outer(self) != 0 ? &self->a : 0);
    fn_82D81528(self->world, Outer(self) != 0 ? &self->b : 0);
    fn_82CE4118(Outer(self));
}
