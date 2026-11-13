extern int fn_82573EE0();
extern int fn_825B5718();
extern int fn_825B57D8();
extern unsigned int lbl_821C8470;


unsigned int * fn_825B5318(unsigned int *param_1,int *param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  
  *param_1 = &lbl_821C8470;
  uVar1 = (**(int (***)())(*param_2 + 0x1c))(param_2);
  uVar2 = fn_82573EE0(uVar1,0);
  param_1[1] = uVar2;
  uVar2 = (**(int (***)())(*param_2 + 0x3c))(param_2);
  param_1[2] = uVar2;
  param_1[3] = param_2 + 0x34;
  param_1[4] = 0;
  param_1[5] = param_2;
  if (param_1[1] != 0) {
    uVar1 = (**(int (***)())(*param_2 + 0x1c))(param_2);
    fn_82573EE0(uVar1,0);
    iVar3 = fn_825B5718();
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + iVar3;
    *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + iVar3;
    fn_825B57D8(param_1);
  }
  return param_1;
}

