struct Obj_83000098;

typedef struct {
  void *s[18];
  void (*f)(struct Obj_83000098 *, float, int, int, int);
} VT_83000098;

typedef struct Obj_83000098 {
  VT_83000098 *vt;
  char pad[0x60];
  unsigned int h;
} Obj_83000098;

extern int fn_83027298(unsigned int);

int fn_83000098(Obj_83000098 *p, unsigned char a)
{
  int r;

  if (p->h != 0) {
    r = fn_83027298(p->h);
    p->vt->f(p, (float)a, 0xc, 0, 0);
    return r;
  }
  return 2;
}
