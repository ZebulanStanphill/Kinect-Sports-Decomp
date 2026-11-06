typedef struct Obj_82BEA420 { struct VT_82BEA420 { int f0; unsigned (*f4)(struct Obj_82BEA420 *); } *vt; } Obj_82BEA420;
typedef struct { int a; int b; Obj_82BEA420 *o; } Sub_82BEA420;
typedef struct { char pad[0x2c]; Sub_82BEA420 s; } Ent_82BEA420;
typedef struct { int p0; int p4; int cur; } List_82BEA420;
typedef struct { char pad[0x44]; List_82BEA420 *list; } Self_82BEA420;
extern int fn_82BE5340(List_82BEA420 *);
extern int fn_82BE5350(List_82BEA420 *);
extern Ent_82BEA420 *fn_82BE5378(List_82BEA420 *);

unsigned int fn_82BEA420(Self_82BEA420 *self, unsigned int param_2)
{
  Ent_82BEA420 *e;
  Sub_82BEA420 *s;
  unsigned id;
  if (self->list != 0) {
    fn_82BE5340(self->list);
    while (self->list->cur != 0) {
      e = fn_82BE5378(self->list);
      if (e != 0) {
        s = &e->s;
        id = s->o != 0 ? s->o->vt->f4(s->o) : 0;
        if (id == param_2) return (unsigned)fn_82BE5378(self->list);
      }
      fn_82BE5350(self->list);
    }
  }
  return 0;
}
