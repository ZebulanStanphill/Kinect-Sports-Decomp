typedef struct Obj Obj;
typedef void (*VFn)(Obj *);
struct Obj {
  VFn *vt;
};

typedef struct {
  char pad[0x124];
  Obj obj;
} S;

void fn_82EF1800(S *s)
{
  s->obj.vt[0](&s->obj);
}
