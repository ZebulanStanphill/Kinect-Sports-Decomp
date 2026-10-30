typedef struct {
  char pad0[0x24];
  int f24;
  char pad28[0x2dc - 0x28];
  unsigned int f2dc;
} A_822F51B0;

typedef struct {
  char pad0[0x83c];
  float *f83c;
  char pad840[4];
  int f844;
} B_822F51B0;

typedef struct {
  char pad0[0xc];
  A_822F51B0 *a;
  B_822F51B0 *b;
} Obj_822F51B0;

extern char lbl_83265A28[];
extern int fn_82520780(char *, float);

int fn_822F51B0(Obj_822F51B0 *self)
{
  A_822F51B0 *a;
  B_822F51B0 *b;
  int hit;

  a = self->a;
  if (a->f24 == 0) {
    b = self->b;
    hit = fn_82520780(lbl_83265A28, b->f83c[b->f844 + 0x5a] * (float)a->f2dc);
    if (hit != 0) {
      a = self->a;
      a->f2dc = 0;
      return 1;
    }
    a = self->a;
    a->f2dc = a->f2dc + 1;
  }
  return 0;
}
