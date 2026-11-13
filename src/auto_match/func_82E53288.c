extern int fn_82E50C30();
extern int fn_82E51480();
extern int fn_82E52B50();
extern int fn_82E5AEC8();
extern unsigned int lbl_821547F8;
extern unsigned int lbl_82154818;
extern unsigned int lbl_82154830;


unsigned int * fn_82E53288(unsigned int *param_1,int *param_2,int *param_3)

{
  fn_82E52B50(param_1,0);
  param_1[0x15] = 0;
  *param_1 = &lbl_82154830;
  param_1[0x13] = &lbl_82154818;
  param_1[0x14] = &lbl_821547F8;
  param_1[0x16] = 0;
  *(unsigned short *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  fn_82E50C30(param_1 + 0x19);
  fn_82E5AEC8(param_1 + 0x28);
  if (*param_3 >= 0) {
    fn_82E51480(param_1);
    *param_3 = 0;
    if (param_2 != (int *)0x0) {
      param_1[0x18] = param_2;
      (*(int (**)())(*param_2 + 4))(param_2);
    }
  }
  return param_1;
}

