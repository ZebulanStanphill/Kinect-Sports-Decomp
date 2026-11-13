extern unsigned int lbl_821550CC;
extern unsigned int lbl_821550E0;
extern unsigned int lbl_821550F4;


unsigned int * fn_82E658C0(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned int *param_4)

{
  __int64 lVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  param_1[1] = &lbl_821550CC;
  *param_1 = &lbl_821550F4;
  param_1[4] = param_3;
  param_1[1] = &lbl_821550E0;
  param_1[2] = 1;
  puVar3 = param_1 + 5;
  param_1[3] = 0;
  lVar1 = (**(int (***)())(*param_2 + 0x14))(param_2,puVar3);
  if (-1 < lVar1) {
    if (*puVar3 < (unsigned int)param_1[4]) {
      lVar1 = -0x7ff8ffa9;
    }
    else {
      uVar2 = *puVar3 - param_1[4];
      param_1[3] = param_2;
      *puVar3 = uVar2;
      param_1[6] = uVar2;
      (**(int (***)())(*param_2 + 4))(param_2);
    }
  }
  *param_4 = (int)lVar1;
  return param_1;
}

