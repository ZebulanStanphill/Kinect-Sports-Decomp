struct Obj_83000260;
typedef struct VT_83000260 {
  void *s[18];
  void (*f)(struct Obj_83000260 *, float, int, int, int);
} VT_83000260;

typedef struct Obj_83000260 {
  VT_83000260 *vt;
  char pad[0x60];
  unsigned int h;
} Obj_83000260;

extern int fn_83027378(unsigned int);

int fn_83000260(Obj_83000260 *p, unsigned char a)
{
  int r = 1;

  if (p->h != 0) {
    r = fn_83027378(p->h);
    p->vt->f(p, (float)a, 0x24, 0, 0);
  }
  return r;
}
