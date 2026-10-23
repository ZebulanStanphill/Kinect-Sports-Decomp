extern void fn_822315A0(void *);
extern void fn_823410C8(void *);
extern void fn_8265CA20(void *);
extern int lbl_821B1BD0;

typedef struct { char pad[0x6c]; void *rc; } Inner;
typedef struct { void *vt; int pad[3]; Inner *inner; } Obj;

void fn_82347A80(Obj *param_1)
{
  Inner *p;
  p = param_1->inner;
  param_1->vt = &lbl_821B1BD0;
  if (p != 0) {
    if (p->rc != 0) {
      fn_822315A0(p->rc);
    }
    fn_8265CA20(p);
  }
  fn_823410C8(param_1);
}
