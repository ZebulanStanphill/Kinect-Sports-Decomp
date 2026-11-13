extern int fn_828223C8(void *p, void **out);
extern unsigned char fn_82827750(char *p);
extern int fn_82827980();
extern int fn_828283F0();
extern int fn_8282A570();
extern int fn_8282B450();
extern int fn_8282B8C0();
extern int fn_8282D858();
extern int fn_8282DD18();
extern int fn_8282DF40();
extern int fn_8282E2D8();
extern int fn_8282E5D8();
extern int fn_8282E888();
extern int fn_8282F2B0();
extern int fn_8282F380();
extern int fn_828326A8();


void fn_8282E950(char *param_1)
{
  void *p;
  void *out;

  fn_82827980(param_1, ".data", 0);
  fn_828283F0(param_1, 1);
  p = param_1 + 0x2fc;
  do {
    fn_828223C8(p, &out);
    p = out;
  } while (out != 0);
  fn_8282B450(param_1);
  if (fn_82827750(param_1)) {
    fn_8282B8C0(param_1);
  }
  fn_8282D858(param_1);
  fn_8282E5D8(param_1);
  fn_8282A570(param_1);
  if (fn_82827750(param_1)) {
    fn_828326A8(param_1);
  }
  if (*(void **)(param_1 + 0x3dc) != 0) {
    fn_8282E2D8(param_1);
    fn_8282F380(param_1);
  }
  fn_8282DF40(param_1);
  fn_8282DD18(param_1);
  if (*(void **)(param_1 + 0x3dc) != 0) {
    fn_8282F2B0();
  }
  fn_8282E888(param_1);
}
