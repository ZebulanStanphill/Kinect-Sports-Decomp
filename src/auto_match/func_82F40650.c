extern int fn_82EEDC68();
extern int fn_82F40C90();
extern unsigned int lbl_82162F7C;
extern unsigned int lbl_82162FA8;
extern unsigned int lbl_82162FFC;
extern unsigned int lbl_82163010;
extern unsigned int lbl_82163018;


unsigned int * fn_82F40650(unsigned int *param_1,unsigned int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &lbl_82163018;
    param_1[8] = &lbl_82163010;
    fn_82F40C90(param_1 + 4);
    fn_82EEDC68(param_1 + 7,0);
  }
  *param_1 = &lbl_82162FFC;
  *(unsigned char ***)((int)param_1 + *(int *)(param_1[1] + 4) + 4) = &lbl_82162FA8;
  *(unsigned char ***)((int)param_1 + *(int *)(param_1[1] + 8) + 4) = &lbl_82162F7C;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0xc;
  *(int *)(*(int *)(param_1[1] + 8) + (int)param_1) = *(int *)(param_1[1] + 8) + -0x18;
  param_1[2] = 0xffffffff;
  return param_1;
}

