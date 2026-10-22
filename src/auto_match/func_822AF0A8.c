extern void fn_82230110(void *, const char *);
extern void fn_82230300(void *, int, int);
extern void fn_822AECF8(void *, void *);
extern char lbl_821AC508[];
extern char lbl_821AC578[];

void **fn_822AF0A8(void **param_1, char *param_2)
{
  char name[40];

  *param_1 = lbl_821AC578;
  fn_82230110(name, "TeamTacticStateMan State Machine");
  fn_822AECF8(param_1 + 1, name);
  param_1[1] = lbl_821AC508;
  fn_82230300(name, 1, 0);
  param_1[0x12] = *(void **)(param_2 + 0x24);
  param_1[0x13] = *(void **)(param_2 + 0x28);
  return param_1;
}
