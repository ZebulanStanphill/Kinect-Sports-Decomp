extern int fn_82CE5410();
typedef struct { int **vt; } Iface;
unsigned int fn_82DC4190(unsigned int p, unsigned int f)
{
  Iface *o;
  int fl;
  int *s = (int *)(p + 0x5c);
  int r = fn_82CE5410();
  fl = s[2];
  o = *(Iface **)(r + 0x10);
  s[1] = 0;
  if ((fl & (int)0x80000000) == 0) {
    ((void (*)(Iface *, int, int, int))o->vt[4])(o, s[0], fl & 0x3fffffff, 4);
  }
  s[0] = 0;
  s[2] = 0x80000000;
  if ((f & 1) != 0 && p != 0) {
    o = *(Iface **)(fn_82CE5410() + 0x10);
    ((void (*)(Iface *, unsigned int, int))o->vt[2])(o, p, 0x80);
  }
  return p;
}