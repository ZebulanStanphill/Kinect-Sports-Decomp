extern int fn_8259BDA8();
extern int fn_82F672D8();
extern int fn_82F6DCE0();


void fn_82827390(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *apiStack_30 [12];
  
  if ((*(unsigned int *)(param_1 + 0x3e4) != 0) &&
     ((unsigned __int64)*(unsigned int *)(param_1 + 0x3e4) <= (param_2 & 0xffffffff))) {
    param_2 = param_2 + 1;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x2f0) + 4);
  apiStack_30[0] = (int *)*piVar1;
  if (apiStack_30[0] != piVar1) {
    do {
      if ((unsigned __int64)*(unsigned int *)(apiStack_30[0][3] + 0x100) == (param_2 & 0xffffffff)) break;
      fn_8259BDA8(apiStack_30);
    } while (apiStack_30[0] != piVar1);
    if (apiStack_30[0] != piVar1) {
      iVar3 = apiStack_30[0][3];
      iVar2 = param_4;
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) goto LAB_82827430;
      } while (*(char *)(iVar2 + iVar3) != '\\');
      iVar3 = iVar2 + iVar3 + 1;
LAB_82827430:
      fn_82F672D8(param_3,iVar3,param_4);
      goto LAB_82827458;
    }
  }
  fn_82F6DCE0(param_3,param_4,0xffffffff8201ecf8,param_2);
LAB_82827458:
  *(unsigned char *)(param_3 + param_4 + -1) = 0;
  return;
}

