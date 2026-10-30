struct Obj_828E6978;
typedef struct VT_828E6978 { void *pad[2]; void (*f8)(struct Obj_828E6978 *); void (*fc)(struct Obj_828E6978 *); } VT_828E6978;
typedef struct Sub_828E6978 { unsigned char flag; } Sub_828E6978;
typedef struct Obj_828E6978 { VT_828E6978 *vt; Sub_828E6978 s; } Obj_828E6978;
typedef struct Holder_828E6978 { Obj_828E6978 *obj; void *other; } Holder_828E6978;
extern unsigned char fn_8289DDD0(void *a);
extern void fn_8289DF30(void *a);

void fn_828E6978(Holder_828E6978 *param_1)
{
  void *other;
  Obj_828E6978 *o;
  Sub_828E6978 *s;

  other = param_1->other;
  if (other != 0 && fn_8289DDD0(other) != 0) {
    o = param_1->obj;
    if (o != 0) {
      o->vt->f8(o);
      s = &o->s;
      s->flag = 0;
      o->vt->fc(o);
    }
    fn_8289DF30(other);
  }
}
