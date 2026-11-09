struct Obj_830003B8;

typedef struct {
  void *s[18];
  void (*f)(struct Obj_830003B8 *, float, int, int, int);
} VT_830003B8;

typedef struct Obj_830003B8 {
  VT_830003B8 *vt;
  char pad[0x60];
  unsigned int h;
} Obj_830003B8;

extern int fn_830273A8(unsigned int);

int fn_830003B8(Obj_830003B8 *p, unsigned char a)
{
  int r;

  if (p->h != 0) {
    r = fn_830273A8(p->h);
    p->vt->f(p, (float)a, 0x25, 0, 0);
    return r;
  }
  return 2;
}
