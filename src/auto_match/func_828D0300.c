extern void fn_8223C478(void *w, int n, int z);
extern unsigned int fn_823AA2A8(void *p);
extern unsigned int fn_823AA970(void *p);
extern unsigned int fn_8240D928(void *p);
extern unsigned int fn_82610EF0(void *p);
extern void fn_828E9DB8(void *w, unsigned int v, int n);

typedef struct Obj {
  unsigned char f0;
  unsigned char f1;
  unsigned char f2;
  unsigned char f3;
  unsigned short f4;
  char pad6[2];
  char sub[0x18];
  unsigned char f20;
} Obj;

static void WriteBits(void *w, unsigned int v, int n)
{
  fn_8223C478(w, n, 0);
  fn_828E9DB8(w, v, n);
}

static void WriteBool(void *w, unsigned char b)
{
  WriteBits(w, b != 0, 1);
}

void fn_828D0300(Obj *o, void *w)
{
  unsigned char b;
  void *sub;

  WriteBits(w, o->f4, 0x10);
  WriteBits(w, o->f20, 8);
  b = o->f1 != 0;
  WriteBool(w, b);
  if (b) {
    WriteBits(w, o->f1, 8);
  }
  b = o->f2 != 0;
  WriteBool(w, b);
  if (b) {
    WriteBits(w, o->f2, 8);
  }
  sub = o->sub;
  WriteBits(w, fn_823AA2A8(sub), 6);
  WriteBits(w, fn_82610EF0(sub), 6);
  WriteBits(w, fn_8240D928(sub), 6);
  WriteBits(w, fn_823AA970(sub), 6);
}
