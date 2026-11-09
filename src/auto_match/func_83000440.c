struct Obj_83000440;

typedef struct {
  void *s[18];
  void (*f)(struct Obj_83000440 *, float, int, int, int);
} VT_83000440;

typedef struct Obj_83000440 {
  VT_83000440 *vt;
  char pad[0x60];
  unsigned int h;
} Obj_83000440;

extern int fn_83027490(unsigned int);

int fn_83000440(Obj_83000440 *p, int a)
{
  int r;

  if (p->h != 0) {
    r = fn_83027490(p->h);
    p->vt->f(p, (float)a, 0x26, 0, 0);
    return r;
  }
  return 2;
}
