typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
  float vector4_f32[4];
} __vector4;

typedef struct Deletable_82D27C70 {
  struct { void (*destroy)(struct Deletable_82D27C70 *, int); } *vt;
} Deletable_82D27C70;

typedef struct {
  char pad0[0x8];
  char a[0x18];          /* 0x8 */
  char b[0x20];          /* 0x20 */
  char c[0x778];         /* 0x40 */
  Deletable_82D27C70 *obj; /* 0x7b8 */
  int pad7bc;
  __vector4 v;           /* 0x7c0 */
  unsigned char flag;    /* 0x7d0 */
} Obj_82D27C70;

extern __vector4 lbl_8323B1A0;
extern void fn_82D30C78(void *p, int n);
extern void fn_82D2B8D8(void *p);

void fn_82D27C70(Obj_82D27C70 *o)
{
  if (o->obj != 0)
    o->obj->vt->destroy(o->obj, 1);
  o->obj = 0;
  fn_82D30C78(o->c, 1);
  o->v = lbl_8323B1A0;
  fn_82D2B8D8(o->a);
  fn_82D2B8D8(o->b);
  o->flag = 0;
}
