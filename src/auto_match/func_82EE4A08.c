typedef struct Obj Obj;
typedef struct { void *s0; void *s1; void (*release)(Obj *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { int pad[2]; Obj *obj; } Self;
extern void fn_82EE3F30(void *p);
extern int fn_82F3E1E0(Self *s);

int fn_82EE4A08(Self *s)
{
  if (s->obj == 0) {
    return 0xc00d36b6;
  }
  fn_82EE3F30((char *)s - 4);
  if (s->obj != 0) {
    s->obj->vt->release(s->obj);
    s->obj = 0;
  }
  return fn_82F3E1E0(s);
}
