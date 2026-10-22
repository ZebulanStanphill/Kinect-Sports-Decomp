extern void fn_829E9CB0(void *p);
extern void fn_829EAAD8(void *p);
extern void fn_829EABB8(void *p);
extern void fn_82A28E60(int h, int a, void *p);
extern char *lbl_832179FC;

typedef struct {
  int a;
  char m4[0x14];
  char m18[0x10];
} Sub;

typedef struct {
  int pad0;
  void *p4;
  int pad8;
  Sub sub;
  char m34[0x20];
  char m54[0x18];
  char m6c[0x18];
} Obj;

static void Sub_dtor(Sub *s)
{
  fn_829E9CB0(s->m18);
  fn_829EABB8(s->m4);
}

void fn_829EB608(Obj *param_1)
{
  if (param_1->p4 != 0) {
    fn_82A28E60(*(int *)(lbl_832179FC + 0x8f4cc), 0, param_1->p4);
  }
  fn_829EAAD8(param_1->m6c);
  fn_829EAAD8(param_1->m54);
  fn_829EAAD8(param_1->m34);
  Sub_dtor(&param_1->sub);
}
