typedef struct { int *a; void *ref; } Pr_8228CBC8;
extern void *fn_82279C58(Pr_8228CBC8 *, void *);
extern void fn_822315A0(void *);
extern int fn_8266F6B8(void);
extern void fn_826728E8(unsigned, const char *, int);
extern void fn_8229E090(unsigned, int, int);
extern void fn_82279CA0(void *, int);
extern void fn_822848B8(unsigned);
extern unsigned fn_82250A18(void);
extern void fn_82359C18(void *);
extern void fn_82279AF0(void *);
extern unsigned lbl_832975B0;
extern unsigned lbl_821A998C[];

void fn_8228CBC8(unsigned *self)
{
  Pr_8228CBC8 p1, p2, p3;
  unsigned char b;
  int *g;
  unsigned t;
  self[0] = (unsigned)lbl_821A998C;
  b = *(int *)fn_82279C58(&p1, self) != 0;
  if (p1.ref != 0) fn_822315A0(p1.ref);
  if (b) {
    unsigned a = *(unsigned *)fn_82279C58(&p2, self);
    fn_826728E8(a, "videoArea", fn_8266F6B8());
    if (p2.ref != 0) fn_822315A0(p2.ref);
    a = *(unsigned *)fn_82279C58(&p3, self);
    fn_826728E8(a, "tex_background", fn_8266F6B8());
    if (p3.ref != 0) fn_822315A0(p3.ref);
  }
  if (self[0x5e] != 0) {
    fn_8229E090(self[0x5e], 0, 1);
    self[0x5e] = 0;
  }
  self[0x62] = 0;
  self[100] = 0;
  fn_82279CA0(self, 1);
  if (self[0x51] != 0) {
    fn_822848B8(self[0x51]);
    self[0x51] = 0;
  }
  if (self[0x5e] != 0) {
    fn_8229E090(self[0x5e], 0, 0);
    self[0x5e] = 0;
  }
  if (self[0x5f] != 0) {
    fn_8229E090(self[0x5f], 0, 0);
    self[0x5f] = 0;
  }
  t = lbl_832975B0;
  if (lbl_832975B0 == 0) t = fn_82250A18();
  *(int *)(t + 0x60) = 0;
  fn_82359C18(self + 0x52);
  fn_82279AF0(self);
}
