extern void fn_82576C08(void *a, float f, int b);
extern void fn_82590188(void);
extern void fn_825904E0(void *p, int a);
extern void fn_825F5DF8(void *p, int a);
extern void fn_8264C398(void *a, void *b);
extern int fn_82560690(int a);
extern int lbl_831C02C4;
extern void *lbl_8320A898;

typedef struct {
  char pad0[0xcc];
  void *ptrs[3];
  char pad1[0x110 - 0xd8];
  unsigned int ids[3];
  unsigned char b11c;
  unsigned char flag;
  char pad2[2];
  unsigned int cur;
} Sub;

typedef struct {
  char pad0[0xb8];
  int *b8;
  char pad1[0x828 - 0xbc];
  float f828;
  char pad2[0x93c - 0x82c];
  void *p93c;
  char pad3[0xa10 - 0x940];
  Sub sub;
} Obj;

static void helper(Sub *s)
{
  unsigned int i;
  if (s->flag == 0) return;
  for (i = 0; i < 3; i++) {
    if (s->ids[i] == s->cur) {
      if (s->ptrs[i] != 0) {
        fn_8264C398(lbl_8320A898, s->ptrs[i]);
      }
      return;
    }
  }
}

void fn_82590090(Obj *p, int a)
{
  fn_82590188();
  if (p->p93c != 0) {
    fn_82576C08(p->p93c, p->f828, a);
  }
  fn_825F5DF8(p, a);
  fn_825904E0(p, a);
  if (fn_82560690(0) == 1 && lbl_831C02C4 != 0 && p->b8[10] == 0) {
    helper(&p->sub);
  }
}
