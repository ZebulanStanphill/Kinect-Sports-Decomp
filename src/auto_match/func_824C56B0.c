typedef struct Obj_824C56B0 Obj_824C56B0;
typedef struct Sub_824C56B0 Sub_824C56B0;
typedef struct {
    void (*f0)(Sub_824C56B0 *);
    void (*f4)(Sub_824C56B0 *);
    int (*f8)(Sub_824C56B0 *);
} SubVt_824C56B0;
struct Sub_824C56B0 { SubVt_824C56B0 *vt; };
typedef struct {
    void (*f0)(Obj_824C56B0 *, float);
    void (*f4)(Obj_824C56B0 *, float);
} ObjVt_824C56B0;
struct Obj_824C56B0 {
    ObjVt_824C56B0 *vt;
    int pad[13];
    Sub_824C56B0 *sub;
};
extern int fn_824C5838(Obj_824C56B0 *self);
extern void fn_824C5748(Obj_824C56B0 *self, int v);
void fn_824C56B0(Obj_824C56B0 *self, float dt)
{
    int s = (int)self->sub;
    if (s != 0) {
        ((Sub_824C56B0 *)s)->vt->f4((Sub_824C56B0 *)s);
        if (self->sub->vt->f8(self->sub) != 0) {
            fn_824C5748(self, fn_824C5838(self));
        }
    }
    self->vt->f4(self, dt);
}
