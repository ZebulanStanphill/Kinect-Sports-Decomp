extern void fn_83022408(void *);
extern int lbl_8217D218;

typedef struct { int b[0x20]; } B;
typedef struct { int *vt; int pad[0x1b]; int a; int pad2[3]; B b; int c; } S;

S *fn_82FEEFA8(S *p)
{
  int *a = &p->a;

  p->vt = &lbl_8217D218;
  *a = 0;
  fn_83022408(&p->b);
  p->c = 0;
  return p;
}
