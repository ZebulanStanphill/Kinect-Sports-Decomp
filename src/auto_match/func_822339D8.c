extern void fn_82233640(void *p);
extern void fn_82240DB8(void *p, int n);
extern void *fn_8265C9E0(unsigned int size);
extern void fn_82240688(void *p);
extern void fn_8223B930(void *p);
extern void *memset(void *, int, unsigned int);
extern char lbl_82196E20[];
extern char lbl_82196DF0[];
extern char lbl_82196E10[];

typedef struct Buf_822339D8 {
  int cap;
  void *data;
  int size;
} Buf_822339D8;

typedef struct Sub_822339D8 {
  void *vt;
  int f04;
  Buf_822339D8 buf;
} Sub_822339D8;

typedef struct Obj_822339D8 {
  void *vt;
  char pad04[0x208];
  Sub_822339D8 s;
  char pad220[0x44];
  char f264[0x58];
  char f2bc[0x58];
  char f314[4];
} Obj_822339D8;

static __forceinline void BufInit_822339D8(Buf_822339D8 *b)
{
  void *d;
  b->cap = 7;
  b->size = 6;
  d = fn_8265C9E0(6);
  memset(d, 0, 6);
  b->data = d;
}

Obj_822339D8 *fn_822339D8(Obj_822339D8 *p)
{
  fn_82233640(p);
  p->vt = lbl_82196E20;
  fn_82240DB8(&p->s, 1);
  p->s.vt = lbl_82196DF0;
  BufInit_822339D8(&p->s.buf);
  p->s.vt = lbl_82196E10;
  fn_82240688(p->f264);
  fn_82240688(p->f2bc);
  fn_8223B930(p->f314);
  return p;
}
