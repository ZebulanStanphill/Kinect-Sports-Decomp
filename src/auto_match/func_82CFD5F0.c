typedef struct { int a; int b; short size; short pad; } Fmt_82CFD5F0;
typedef struct { char pad[4]; int f4; char pad2[4]; unsigned char fmt; unsigned char fmt2; short count; } Obj_82CFD5F0;
extern Fmt_82CFD5F0 lbl_8317F680[];
extern int fn_82CEB1A8(int);

int fn_82CFD5F0(Obj_82CFD5F0 *p)
{
  int n;
  int r = -1;

  switch (p->fmt) {
  case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
  case 0xb: case 0xc: case 0xd: case 0xe: case 0xf: case 0x10: case 0x11: case 0x12:
  case 0x14: case 0x15: case 0x16: case 0x1a: case 0x1b: case 0x1c: case 0x1d: case 0x1e:
  case 0x20: case 0x21:
    n = p->count == 0 ? 1 : p->count;
    r = lbl_8317F680[p->fmt].size * n;
    break;
  case 0x18:
  case 0x1f:
    n = p->count == 0 ? 1 : p->count;
    r = lbl_8317F680[p->fmt2].size * n;
    break;
  case 0x19:
    n = p->count == 0 ? 1 : p->count;
    r = fn_82CEB1A8(p->f4) * n;
    break;
  }
  return r;
}
