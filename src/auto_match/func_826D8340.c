typedef struct Obj Obj;
typedef void (*VFn)(Obj *);
struct Obj {
  VFn *vt;
};
typedef struct { char pad[0xc]; Obj *obj; } Inner;
typedef struct { char pad[0x1c]; Inner *in; } S;

void fn_826D8340(S *s)
{
  Obj *o = s->in->obj;
  o->vt[10](o);
}
