struct Ob_82BAAB88;
typedef struct { void *pad[16]; unsigned char (*f40)(struct Ob_82BAAB88 *); } Vt_82BAAB88;
typedef struct Ob_82BAAB88 {
  Vt_82BAAB88 *vt;
  char pad4[0x4c];
  int f50;
  char pad54[0x35c];
  unsigned f3b0;
} Ob_82BAAB88;
typedef struct { int pad[0x20]; unsigned regs[1]; } Obj_82BAAB88;
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);

void fn_82BAAB88(char *self, int idx)
{
  Ob_82BAAB88 *p = *(Ob_82BAAB88 **)(self + (idx + 0x3a) * 4);
  unsigned *slot;
  struct { struct { unsigned first; unsigned second; } t; unsigned out; } L;
  int i;
  if (p == 0)
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "parm", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\asm\\asm.cpp", 0x867);
  if (p->vt->f40(p) && p->f50 == 0xb) {
    slot = (unsigned *)(self + (idx + 0x20) * 4);
    L.t.second = p->f3b0;
    L.t.first = *slot;
    {
      unsigned char *pi = (unsigned char *)&L.t.first;
      unsigned char *pt = (unsigned char *)&L.t.second;
      unsigned char *po = (unsigned char *)&L.out;
      i = 0;
      do {
        *po++ = pt[*pi++];
        i++;
      } while (i < 4);
    }
    *slot = L.out;
  }
}
