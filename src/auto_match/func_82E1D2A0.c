extern void *fn_8265C9E0(int);
extern void *fn_82E1D818(void *);
extern void *fn_82E1E428(void *);
extern void *fn_82E1F8D8(void *);
extern void fn_82E1D248(void *);
extern int lbl_8214B798[];

typedef struct Obj_82E1D2A0 {
  int *vt;
  int p4;
  void *a, *b, *c;
  int p14;
  unsigned char p18;
} Obj_82E1D2A0;

Obj_82E1D2A0 *fn_82E1D2A0(Obj_82E1D2A0 *o)
{
  void *m;
  o->p14 = 0;
  o->vt = lbl_8214B798;
  o->p18 = 0;
  m = fn_8265C9E0(0x8c);
  o->a = m != 0 ? fn_82E1D818(m) : 0;
  m = fn_8265C9E0(0x68);
  o->b = m != 0 ? fn_82E1E428(m) : 0;
  m = fn_8265C9E0(0x1c);
  o->c = m != 0 ? fn_82E1F8D8(m) : 0;
  fn_82E1D248(o);
  return o;
}
