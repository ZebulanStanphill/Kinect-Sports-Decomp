typedef struct { void *f0; void (*f4)(void *); } VT_82FB1D08;
typedef struct { VT_82FB1D08 *vt; } Obj_82FB1D08;
typedef struct Self_82FB1D08 Self_82FB1D08;
typedef struct {
  char pad[0x160];
  Obj_82FB1D08 *(*find)(Self_82FB1D08 *self, int a, int b, void *c, int *out);
} SelfVT_82FB1D08;
struct Self_82FB1D08 { SelfVT_82FB1D08 *vt; };
typedef struct { int a; int b; int c; } Trip_82FB1D08;
extern int fn_82FA8948(Obj_82FB1D08 *o, Trip_82FB1D08 *t, int x);

int fn_82FB1D08(Self_82FB1D08 *self, char *msg)
{
  Obj_82FB1D08 *p;
  int out;
  Trip_82FB1D08 t;
  int r;
  int q;

  p = self->vt->find(self, 0, *(int *)(msg + 8), msg + 0x10, &out);
  if (p != 0) {
    p->vt->f4(p);
    t.a = **(int **)(msg + 0xc);
    t.b = (*(int **)(msg + 0xc))[1];
    q = *(int *)(out + 0x40);
    t.c = q != 0 ? *(int *)(q + 0x68) : 0;
    r = fn_82FA8948(p, &t, 0);
  } else {
    r = 2;
  }
  return r;
}
