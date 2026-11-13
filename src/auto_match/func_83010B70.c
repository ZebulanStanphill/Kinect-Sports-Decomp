extern int fn_82A1E658();
extern int fn_8300F638();
extern int fn_8300F6F8();
extern int fn_83010108();
extern int fn_830101C8();
extern int fn_8301A1D0();
extern int fn_830376E0();
extern int fn_83037CE8();


void fn_83010B70(int param_1)

{
  fn_830376E0(param_1 + 0x9c);
  if (*(unsigned int *)(param_1 + 0xb0) != 0) {
    fn_82A1E658(*(unsigned int *)(param_1 + 0xb0));
  }
  *(unsigned int *)(param_1 + 0xb0) = 0;
  fn_8300F638(param_1);
  fn_8300F6F8(param_1);
  fn_83010108(param_1);
  fn_830101C8(param_1);
  fn_83037CE8(param_1 + 0x20);
  fn_8301A1D0(param_1 + 0x50);
  fn_8301A1D0(param_1 + 0x70);
  return;
}

