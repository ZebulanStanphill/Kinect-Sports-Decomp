__declspec(noreturn) extern void fn_82F63108(void);
extern void fn_822C72E0(void *, void *);

struct A_82320240;
typedef struct AVt_82320240 {
  void *pad;
  void (*f4)(struct A_82320240 *, void *);
} AVt_82320240;
typedef struct A_82320240 {
  AVt_82320240 *vt;
} A_82320240;
struct B_82320240;
typedef struct BVt_82320240 {
  void *pad;
  void *(*f4)(struct B_82320240 *);
} BVt_82320240;
typedef struct B_82320240 {
  BVt_82320240 *vt;
} B_82320240;
typedef struct Link_82320240 {
  int pad;
  int flag;
} Link_82320240;
typedef struct Ptr_82320240 {
  int pad[4];
  B_82320240 *p;
} Ptr_82320240;
typedef struct Obj_82320240 {
  int pad0;
  Link_82320240 *link;
  int pad1[4];
  int pad2[0x12];
  A_82320240 *a;
  int pad3[1];
  Ptr_82320240 sub;
} Obj_82320240;

void fn_82320240(Obj_82320240 *o, void *arg)
{
  o->a->vt->f4(o->a, (char *)o + 0xc);
  if (o->link->flag != 0) {
    Ptr_82320240 *s;
    o->link->flag = 0;
    s = &o->sub;
    if (s->p == 0) {
      fn_82F63108();
    }
    fn_822C72E0(arg, s->p->vt->f4(s->p));
  }
}
