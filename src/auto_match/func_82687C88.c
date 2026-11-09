extern void *fn_8267B890(unsigned int a, int b, int c);
extern void *fn_826878E8(void *mem, void *owner);
extern char lbl_82005B5C[];
extern unsigned int lbl_831E7E64;

typedef struct Sub_82687C88 { int c; unsigned char flag; } Sub_82687C88;
typedef struct Obj_82687C88 { void *vt; int a; void *p; Sub_82687C88 sub; } Obj_82687C88;

Obj_82687C88 *fn_82687C88(Obj_82687C88 *o, unsigned char flag)
{
  Sub_82687C88 *s;
  void *mem;

  o->a = 1;
  o->vt = lbl_82005B5C;
  o->sub.c = 0;
  s = &o->sub;
  s->flag = flag;
  mem = fn_8267B890(lbl_831E7E64, 0x30, 0);
  o->p = mem ? fn_826878E8(mem, o) : 0;
  return o;
}
