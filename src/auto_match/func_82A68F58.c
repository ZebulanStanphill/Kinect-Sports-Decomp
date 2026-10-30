typedef struct {
  char pad0[0x3c];
  int f3c;
  char pad40[0xfc];
  void *f13c;
  char pad140[0x4];
  void *f144;
  void *f148;
  void *f14c;
  void *f150;
  void *f154;
  void *f158;
  char pad15c[0x4];
  void *f160;
  void *f164;
  void *f168;
  void *f16c;
  void *f170;
  char pad174[0x28];
  void *f19c;
  void *f1a0;
  void *f1a4;
  void *f1a8;
  void *f1ac;
  void *f1b0;
  void *f1b4;
  char pad1b8[0x70];
  void *f228;
  void *f22c;
  void *f230;
  void *f234;
  void *f238;
  char pad23c[0xc];
  void *f248;
  char pad24c[0x4c];
  char f298[1];
  char pad299[0x4b];
  void *f2e4;
} Obj_82A68F58;
extern void fn_82BA02A8(void *);
extern void fn_82A6B7D0(void *);
extern void fn_82A6C148(void *);
extern void fn_82A70BF8(void *);
extern void fn_82C2B590(void *);
extern void fn_82C2B5A0(void *);

void fn_82A68F58(Obj_82A68F58 *p)
{
  if (p != 0) {
    fn_82BA02A8(p->f298);
    if (p->f164 != 0) {
      fn_82C2B590(p->f164);
      p->f164 = 0;
    }
    if (p->f168 != 0) {
      fn_82C2B590(p->f168);
      p->f168 = 0;
    }
    fn_82C2B5A0(p->f16c);
    fn_82C2B5A0(p->f170);
    fn_82C2B5A0(p->f144);
    fn_82C2B5A0(p->f148);
    if (p->f1b4 != 0) {
      fn_82C2B590(p->f1b4);
      p->f1b4 = 0;
    }
    p->f1b0 = 0;
    p->f1ac = 0;
    if (p->f154 != 0) {
      fn_82C2B590(p->f154);
      p->f154 = 0;
    }
    if (p->f158 != 0) {
      fn_82C2B590(p->f158);
      p->f158 = 0;
    }
    fn_82A6B7D0(p);
    if (p->f160 != 0) {
      fn_82C2B590(p->f160);
      p->f160 = 0;
    }
    if (p->f14c != 0) {
      fn_82C2B590(p->f14c);
      p->f14c = 0;
    }
    if (p->f150 != 0) {
      fn_82C2B590(p->f150);
      p->f150 = 0;
    }
    if (p->f19c != 0) {
      fn_82C2B590(p->f19c);
      p->f19c = 0;
    }
    if (p->f1a0 != 0) {
      fn_82C2B590(p->f1a0);
      p->f1a0 = 0;
    }
    if (p->f1a4 != 0) {
      fn_82C2B590(p->f1a4);
      p->f1a4 = 0;
    }
    if (p->f1a8 != 0) {
      fn_82C2B590(p->f1a8);
      p->f1a8 = 0;
    }
    if (p->f13c != 0) {
      fn_82C2B590(p->f13c);
      p->f13c = 0;
    }
    if (p->f3c > 2) {
      fn_82A6C148(p);
    }
    if (p->f228 != 0) {
      fn_82C2B590(p->f228);
      p->f228 = 0;
    }
    if (p->f22c != 0) {
      fn_82C2B590(p->f22c);
      p->f22c = 0;
    }
    if (p->f230 != 0) {
      fn_82C2B590(p->f230);
      p->f230 = 0;
    }
    if (p->f234 != 0) {
      fn_82C2B590(p->f234);
      p->f234 = 0;
    }
    if (p->f238 != 0) {
      fn_82A70BF8(p->f238);
    }
    if (p->f238 != 0) {
      fn_82C2B590(p->f238);
      p->f238 = 0;
    }
    if (p->f248 != 0) {
      fn_82C2B590(p->f248);
      p->f248 = 0;
    }
    if (p->f2e4 != 0) {
      fn_82C2B590(p->f2e4);
      p->f2e4 = 0;
    }
    fn_82C2B590(p);
  }
}
