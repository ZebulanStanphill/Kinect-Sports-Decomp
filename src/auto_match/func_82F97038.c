struct B_82F97038;
typedef struct BVT_82F97038 {
  void *s0;
  void *s4;
  void (*f8)(struct B_82F97038 *, void *);
} BVT_82F97038;
typedef struct B_82F97038 {
  BVT_82F97038 *vt;
} B_82F97038;

struct A_82F97038;
typedef struct AVT_82F97038 {
  void (*f0)(struct A_82F97038 *, int);
} AVT_82F97038;
typedef struct A_82F97038 {
  AVT_82F97038 *vt;
  char pad[0x1c];
  void *f20;
} A_82F97038;

int fn_82F97038(A_82F97038 *a, B_82F97038 *b)
{
  if (a->f20 != 0) b->vt->f8(b, a->f20);
  a->vt->f0(a, 1);
  b->vt->f8(b, a);
  return 1;
}
