extern int fn_8268BA10();
extern int fn_826D8938();
extern int fn_826DC8F8();


void fn_826DD060(int *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  
  puVar1 = (unsigned int *)*param_3;
  iVar3 = 4;
  uVar5 = 0x1505;
  do {
    iVar3 = iVar3 - 1;
    uVar5 = (*(unsigned char **)param_3)[iVar3] + uVar5 * 0x1003f;
  } while (iVar3 != 0);
  iVar3 = *param_1;
  if ((iVar3 == 0) ||
     (iVar2 = fn_826D8938(param_1,param_3,*(unsigned int *)(iVar3 + 4) & uVar5), iVar2 < 0)) {
    fn_826DC8F8(param_1,param_2,param_3,uVar5);
  }
  else {
    puVar4 = (unsigned int *)((iVar2 + 1) * 0x10 + iVar3);
    *puVar4 = *puVar1;
    fn_8268BA10(puVar4 + 1,param_3[1]);
  }
  return;
}

