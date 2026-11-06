extern void fn_82A1DDC0(void *, void *, unsigned);
typedef struct { int x; float y; } P8;
typedef struct { char pad[0x14]; P8 e[4]; } Obj;
int fn_83034970(Obj *o, void *src, unsigned n)
{
  int i;
  if (n > 4) return 2;
  if (src != 0 && n != 0) fn_82A1DDC0(o->e, src, n * 8);
  for (i = n; i < 4; i++) {
    o->e[i].x = 0;
    o->e[i].y = 0.0f;
  }
  return 1;
}
