extern int fn_83048E78();


unsigned
fn_83048F80(unsigned param_1,unsigned param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar2;
  unsigned int uVar1;
  unsigned int uVar3;
  int aiStack_30;
  
  iVar2 = fn_83048E78(param_1,param_2,0,*param_3 >> 9,&aiStack_30);
  *param_4 = iVar2;
  uVar3 = *param_3 + aiStack_30 * -0x200;
  *param_3 = uVar3;
  if (*param_4 != 0) {
    *param_5 = uVar3 >> 7 & 3;

    *param_3 = *param_3 - (uVar3 & 0x180);
    return 1;
  }
  return 2;
}

