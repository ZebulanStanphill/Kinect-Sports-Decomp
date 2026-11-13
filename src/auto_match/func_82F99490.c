struct B_82F99490;
typedef struct BVT_82F99490 {
  void *s0;
  void *s4;
  void (*f8)(struct B_82F99490 *, void *);
} BVT_82F99490;
typedef struct B_82F99490 {
  BVT_82F99490 *vt;
} B_82F99490;

struct A_82F99490;
typedef struct AVT_82F99490 {
  void (*f0)(struct A_82F99490 *, int);
} AVT_82F99490;
typedef struct A_82F99490 {
  AVT_82F99490 *vt;
  char pad[0x1c];
  void *f20;
} A_82F99490;

int fn_82F99490(A_82F99490 *a, B_82F99490 *b)
{
  if (a->f20 != 0) b->vt->f8(b, a->f20);
  a->vt->f0(a, 1);
  b->vt->f8(b, a);
  return 1;
}
