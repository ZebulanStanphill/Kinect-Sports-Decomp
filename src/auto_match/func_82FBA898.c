struct B_82FBA898;
typedef struct BVT_82FBA898 { void *s0; void *s1; void (*f2)(struct B_82FBA898 *, void *); } BVT_82FBA898;
typedef struct B_82FBA898 { BVT_82FBA898 *vt; } B_82FBA898;
struct A_82FBA898;
typedef struct AVT_82FBA898 { void (*f0)(struct A_82FBA898 *, int); } AVT_82FBA898;
typedef struct A_82FBA898 { AVT_82FBA898 *vt; int pad[8]; void *m24; void *m28; } A_82FBA898;
int fn_82FBA898(A_82FBA898 *a, B_82FBA898 *b)
{
  if (a->m28 != 0) b->vt->f2(b, a->m28);
  if (a->m24 != 0) b->vt->f2(b, a->m24);
  a->vt->f0(a, 1);
  b->vt->f2(b, a);
  return 1;
}
