struct Desc_82E01A60 {
  char pad0[0x10];
  float weight;
  int a;
  char pad18[0x8];
  unsigned int b;
  char pad24[0x1c];
  int c;
  char pad44[0xc];
  unsigned int d;
  char pad54[0xc];
};

struct P3_82E01A60 {
  char pad0[0x1c];
  struct { char pad[0x20]; unsigned char n; } *info;
  char pad20[0x48 - 0x20];
  char *items;
};

class O_82E01A60 {
public:
  virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
  virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
  virtual void v20(); virtual void v24(); virtual void v28();
  virtual void f2c(P3_82E01A60 *p3, unsigned char i, char *el);
  virtual void v30(); virtual void v34();
  virtual void f38(char *item, Desc_82E01A60 *desc);
  virtual void f3c(P3_82E01A60 *p3, unsigned char i, Desc_82E01A60 *desc, char *el);
  virtual void f40(P3_82E01A60 *p3, int n, char *el);
};

extern "C" void fn_82E01A60(O_82E01A60 *o, int unused, P3_82E01A60 *p3, char *base)
{
  unsigned char i;
  unsigned char n;
  Desc_82E01A60 desc;

  i = 0;
  n = p3->info->n;
  if (n != 0) {
    do {
      char *el = base + i * 0x60;
      desc.weight = 1.0f;
      desc.a = -1;
      desc.c = 0;
      desc.b = 0xffffffff;
      desc.d = 0;
      o->f38(p3->items + i * 0xe0, &desc);
      if (desc.d != 0)
        o->f3c(p3, i, &desc, el);
      else
        o->f40(p3, 1, el);
      o->f2c(p3, i, el);
      i = i + 1;
    } while (i < n);
  }
}
