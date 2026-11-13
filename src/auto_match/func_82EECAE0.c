extern int fn_82EEDC68();
extern int fn_82F40650();
extern int fn_82F40C90();
extern unsigned int lbl_82160134;
extern unsigned int lbl_82160160;
extern unsigned int lbl_821601B4;
extern unsigned int lbl_821601C8;
extern unsigned int lbl_821601DC;
extern unsigned int lbl_82163010;


unsigned int *
fn_82EECAE0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             int param_5)

{
  if (param_5 != 0) {
    param_1[2] = &lbl_821601DC;
    param_1[0x17] = &lbl_82163010;
    fn_82F40C90(param_1 + 0x13);
    fn_82EEDC68(param_1 + 0x16,0);
  }
  fn_82F40650(param_1 + 1,0);
  *param_1 = &lbl_821601C8;
  param_1[1] = &lbl_821601B4;
  *(unsigned char ***)((int)param_1 + *(int *)(param_1[2] + 4) + 8) = &lbl_82160160;
  *(unsigned char ***)((int)param_1 + *(int *)(param_1[2] + 8) + 8) = &lbl_82160134;
  *(int *)((int)param_1 + *(int *)(param_1[2] + 4) + 4) = *(int *)(param_1[2] + 4) + -0x44;
  *(int *)((int)param_1 + *(int *)(param_1[2] + 8) + 4) = *(int *)(param_1[2] + 8) + -0x50;
  param_1[0xd] = 1;
  param_1[0xe] = param_2;
  param_1[0xf] = param_3;
  param_1[0x10] = param_4;
  param_1[0x11] = 0;
  *(unsigned int *)((int)param_1 + *(int *)(param_1[2] + 4) + 0xc) = 3;
  return param_1;
}

