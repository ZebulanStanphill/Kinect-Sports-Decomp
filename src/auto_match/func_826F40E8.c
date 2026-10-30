extern void fn_8267C4C8(int p);
extern void fn_8267C4F0(void *p);
extern void *lbl_82005BA8;

typedef struct Base_826F40E8 {
  void *vt;
  int ref;
} Base_826F40E8;
typedef struct Obj_826F40E8 {
  Base_826F40E8 base;
  void *p[9];
} Obj_826F40E8;

typedef struct Src_826F40E8 {
  int f0;
  int f4;
  int p[9];
} Src_826F40E8;

#define ASSIGN(i) \
  if (s->p[i] != 0) fn_8267C4C8(s->p[i]); \
  if (o->p[i] != 0) fn_8267C4F0(o->p[i]); \
  o->p[i] = (void *)s->p[i];


Obj_826F40E8 *fn_826F40E8(Obj_826F40E8 *o, Src_826F40E8 *s)
{
  o->base.ref = 1;
  o->base.vt = &lbl_82005BA8;
  { void **q = o->p; q[0] = 0; q[1] = 0; q[2] = 0; q[3] = 0; q[4] = 0; q[5] = 0; q[6] = 0; q[7] = 0; q[8] = 0; }
  ASSIGN(0) ASSIGN(1) ASSIGN(2) ASSIGN(3) ASSIGN(5) ASSIGN(4) ASSIGN(6) ASSIGN(7) ASSIGN(8)
  return o;
}
