typedef struct Obj_8304CCE0 Obj_8304CCE0;
typedef struct {
  int pad[8];
  int pad20, pad24;
} Dummy_8304CCE0;
typedef struct {
  void *p0; void *p4; void *p8; void *pc; void *p10; void *p14; void *p18; void *p1c;
  int (*f20)(Obj_8304CCE0 *, int **, int);
  int (*f24)(Obj_8304CCE0 *, int **, int);
} Vt_8304CCE0;
struct Obj_8304CCE0 {
  Vt_8304CCE0 *vt;
  int pad[4];
  struct { unsigned int lo : 24; unsigned int f : 5; unsigned int hi : 3; } b;
};
extern int fn_8302BDE0(Obj_8304CCE0 *, unsigned int, unsigned int, unsigned int);

void fn_8304CCE0(Obj_8304CCE0 *param_1, int **param_2, int param_3)
{
  unsigned int a, b, c;
  unsigned char d;
  int r;

  a = **param_2;
  *param_2 = *param_2 + 1;
  b = **param_2;
  *param_2 = *param_2 + 1;
  c = **param_2;
  *param_2 = *param_2 + 1;
  d = *(unsigned char *)*param_2;
  *param_2 = (int *)((char *)*param_2 + 1);
  param_1->b.f = d;
  r = fn_8302BDE0(param_1, a, b, c);
  if (r == 1) {
    r = param_1->vt->f24(param_1, param_2, param_3);
    if (r == 1) {
      param_1->vt->f20(param_1, param_2, param_3);
    }
  }
}
