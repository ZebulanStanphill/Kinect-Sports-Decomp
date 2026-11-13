extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CF28E8();


void fn_82CF2CF0(int param_1,unsigned int *param_2,int *param_3,unsigned int *param_4,int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  __int64 lVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  if (0 < iVar2) {
    fn_82CF28E8();
    uVar4 = (unsigned __int64)*(unsigned int *)(*param_3 + 4) - (unsigned __int64)*param_2;
    if ((int)param_2[1] <= (int)uVar4) {
      uVar4 = (unsigned __int64)param_2[1];
    }
    uVar1 = param_2[5];
    iVar5 = ((param_2[3] + param_2[2]) * iVar2 + param_2[4]) * (int)uVar4;
    iVar2 = fn_82CE5410(((uVar4 & 0xffffffff) >> 0x1f) - (unsigned __int64)(1 < uVar4),0,uVar1,1 - uVar4);
    lVar6 = ((__int64)(int)uVar1 * (__int64)iVar5 & 0x3fffffffU) << 2;
    uVar3 = fn_82CE52E0(*(unsigned int *)(iVar2 + 0x10),lVar6);
    *param_4 = uVar3;
    *param_5 = iVar5;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_82f691f0(*param_4,0,lVar6);
  }
  return;
}

