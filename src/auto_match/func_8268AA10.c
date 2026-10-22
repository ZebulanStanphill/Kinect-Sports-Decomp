extern void *fn_8267B890(unsigned int a, int b, int c);
extern char lbl_82005C3C[];
extern unsigned int lbl_831E7E64;

typedef struct Obj { void *vt; int a; int b; int *p; } Obj;

static int *IntInit(int *p) { *p = 0; return p; }

Obj *fn_8268AA10(Obj *o)
{
  int *mem;

  o->a = 1;
  o->vt = lbl_82005C3C;
  o->b = 0x15;
  mem = (int *)fn_8267B890(lbl_831E7E64, 4, 0);
  o->p = mem ? IntInit(mem) : 0;
  return o;
}
