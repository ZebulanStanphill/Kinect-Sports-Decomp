extern unsigned int *auStack_4c;
extern int fn_82C2A820();
extern int fn_82C2AC98();
extern int fn_82C2AE18();
extern int fn_82C2B040();


void fn_82C2B108(int param_1,unsigned __int64 param_2,int *param_3,unsigned int *param_4,unsigned __int64 *param_5)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  __int64 lVar5;
  int *piStack_50;
  unsigned int auStack_4c;
  
  *param_4 = 0;
  *param_5 = 0;
  *param_3 = 0;
  iVar1 = *(int *)(param_1 + 0x2c);
  piStack_50 = (int *)0x0;
  auStack_4c = 0;
  iVar4 = fn_82C2B040();
  if ((-1 < iVar4) &&
     ((*(int *)(iVar1 + 0x40) == 0 ||
      ((iVar4 = fn_82C2AE18(param_1,*(unsigned __int64 *)(iVar1 + 0x38)), -1 < iVar4 &&
       (iVar4 = fn_82C2B040(param_1,param_2), -1 < iVar4)))))) {
    lVar5 = *(__int64 *)(iVar1 + 0x28);
    iVar4 = fn_82C2AC98(param_1,lVar5,&piStack_50,&auStack_4c);
    piVar3 = piStack_50;
    if (-1 < iVar4) {
      if ((lVar5 != *(__int64 *)(*piStack_50 + 8)) || (iVar4 = fn_82C2A820(param_1), -1 < iVar4))
      {
        iVar4 = *piVar3;
        uVar2 = *(unsigned int *)(iVar4 + 4);
        lVar5 = *(__int64 *)(iVar4 + 8);
        if (((unsigned __int64)uVar2 - *(__int64 *)(iVar1 + 0x28)) + lVar5 < (param_2 & 0xffffffff)) {
          *param_4 = ((int)lVar5 - (int)*(__int64 *)(iVar1 + 0x28)) + uVar2;
        }
        else {
          *param_4 = (unsigned int)param_2;
        }
        piVar3 = (int *)*piVar3;
        *param_3 = ((int)*(unsigned __int64 *)(iVar1 + 0x28) - (int)*(unsigned __int64 *)(piVar3 + 2)) + *piVar3
        ;
        *param_5 = *(unsigned __int64 *)(iVar1 + 0x28);
        *(unsigned __int64 *)(iVar1 + 0x28) = (unsigned __int64)*param_4 + *(__int64 *)(iVar1 + 0x28);
      }
    }
  }
  return;
}

