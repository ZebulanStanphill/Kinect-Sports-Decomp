extern void fn_822315A0(unsigned);
extern void fn_82251250(void *);
extern void fn_82255790(void *);
extern void fn_82359C18(void *);
extern void fn_828E3228(void *);
extern void fn_828E32A0(void *);
extern char lbl_821968A4[];
extern char lbl_82198190[];

void fn_82255660(int *param_1)
{
  char *s;

  *param_1 = (int)lbl_82198190;
  s = (char *)param_1 + 0x178;
  param_1[10] = (int)lbl_821968A4;
  if (*(unsigned *)(s + 0x6c) != 0) {
    fn_822315A0(*(unsigned *)(s + 0x6c));
  }
  fn_82359C18(s + 0x50);
  fn_82359C18(s + 0x38);
  fn_828E32A0(s);
  fn_82255790(param_1 + 0x34);
  fn_82251250(param_1 + 0xc);
  fn_828E3228(param_1);
}
