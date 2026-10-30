typedef struct VObj_824C7FE0 {
  void (**vt)(struct VObj_824C7FE0 *, int);
} VObj_824C7FE0;

typedef struct Sub_824C7FE0 {
  void *f0;
  char pad04[0x1c];
  void *f20;
  VObj_824C7FE0 *f24;
  void *f28;
  void *pad2c;
  void *f30;
  void *f34;
  char str38[1];
} Sub_824C7FE0;

typedef struct Obj_824C7FE0 {
  char pad[0xc];
  Sub_824C7FE0 s;
} Obj_824C7FE0;

extern void fn_82230300(void *s, int a, int b);
extern void fn_822315A0(void *p);
extern void fn_8234D8D0(void *p);
extern void fn_824C6A00(void *p);
extern void fn_82529320(void *p, int a);
extern void fn_8265CA20(void *p);

void fn_824C7FE0(Obj_824C7FE0 *o)
{
  Sub_824C7FE0 *s = &o->s;
  void *p;
  VObj_824C7FE0 *v;

  if (s->f0 != 0) {
    fn_82529320(s->f0, 0);
  }
  fn_82230300(s->str38, 1, 0);
  p = s->f34;
  if (p != 0) {
    fn_8234D8D0(p);
    fn_8265CA20(p);
  }
  if (s->f30 != 0) {
    fn_822315A0(s->f30);
  }
  if (s->f28 != 0) {
    fn_824C6A00(s->f28);
  }
  v = s->f24;
  if (v != 0) {
    (*v->vt[0])(v, 1);
  }
  if (s->f20 != 0) {
    fn_822315A0(s->f20);
  }
}
