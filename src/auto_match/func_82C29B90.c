extern int fn_82C27A68();
extern int fn_82C297F8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


unsigned __int64 fn_82C29B90(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  __int64 *plVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  int * apiStack_34;
  
  iStack_3c = 0;
  piStack_38 = (int *)0x0;
  *param_3 = 0;
  *param_4 = 0;
  apiStack_34 = (int *)0x0;
  iStack_40 = 0;
  uVar3 = fn_82C27A68(param_1,param_2,&iStack_3c);
  plVar4 = (__int64 *)param_2;
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (iStack_3c == 0) {
    return 0xffffffff80500009;
  }
  if (*(int *)((int)plVar4 + 0x1c) != 0) {
    uVar3 = fn_82C297F8(param_1,*plVar4,&piStack_38,&iStack_40);
    piVar2 = piStack_38;
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if (iStack_40 == 0) {
      return 0xffffffff80500008;
    }
    if (*(int *)(plVar4 + 1) != 0) {
      uVar3 = fn_82C297F8(param_1,plVar4[2],&apiStack_34,&iStack_40);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (iStack_40 == 0) {
        return 0xffffffff80500008;
      }
      if (apiStack_34 != piVar2) {
        apiStack_34[1] = apiStack_34[1] + -1;
      }
    }
    uVar5 = *(unsigned int *)((int)plVar4 + 0x1c);
    uVar1 = *(unsigned int *)(*piVar2 + 4);
    lVar6 = *(__int64 *)(*piVar2 + 8);
    if (((unsigned __int64)uVar1 - *plVar4) + lVar6 < (unsigned __int64)uVar5) {
      uVar5 = ((int)lVar6 - (int)*plVar4) + uVar1;
    }
    *param_4 = uVar5;
    *(unsigned int *)((int)plVar4 + 0x1c) = *(int *)((int)plVar4 + 0x1c) - uVar5;
    *param_3 = ((int)*plVar4 - (int)*(unsigned __int64 *)((int *)*piVar2 + 2)) + *(int *)*piVar2;
    plVar4[2] = *plVar4;
    *(unsigned int *)(plVar4 + 1) = 1;
    *plVar4 = (unsigned __int64)*param_4 + *plVar4;
    if (*(int *)((int)plVar4 + 0x1c) != 0) {
      return uVar3;
    }
  }
  return 0x500001;
}

