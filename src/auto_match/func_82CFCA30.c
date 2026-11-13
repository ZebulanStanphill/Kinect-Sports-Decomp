extern int fn_82CE5410();
extern int fn_82F68CC0();


unsigned int * fn_82CFCA30(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar3;
  __int64 lVar2;
  __int64 lVar4;
  unsigned int uVar5;
  __int64 lVar6;
  
  uVar1 = param_3[1];
  lVar6 = (unsigned __int64)(unsigned int)param_2[1] - 1;
  lVar4 = (unsigned __int64)uVar1 + lVar6;
  iVar3 = fn_82CE5410();
  lVar2 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),lVar4);
  fn_82F68CC0(lVar2,*param_2,lVar6);
  fn_82F68CC0(lVar2 + lVar6,*param_3,(unsigned __int64)uVar1);
  *param_1 = (int)lVar2;
  uVar5 = (unsigned int)lVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar5;
  return param_1;
}

