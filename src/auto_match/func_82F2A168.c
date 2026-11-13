extern int fn_82F02410();
extern int fn_82F2A028();


void fn_82F2A168(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  
  uVar4 = (unsigned __int64)((int)param_4 >> 0x1f);
  uVar4 = (param_4 ^ uVar4) - uVar4;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x4e70) < (param_3 & 0xffffffff)) {
    if (((unsigned __int64)*(unsigned int *)(param_1 + 0x4e74) < (uVar4 & 0xffffffff)) ||
       (uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x4e7c) + (int)((uVar4 & 0xffffffff) << 2)),
       ((unsigned __int64)uVar2 & 0x7fffffff) << 1 < (param_3 & 0xffffffff))) {
      iVar1 = *(int *)(param_1 + 0x4e9c);
LAB_82f2a2a0:
      puVar5 = (unsigned int *)(*(int *)(param_1 + 0x4e98) * 8 + iVar1);
      fn_82F02410(param_2,*puVar5,puVar5[1]);
      fn_82F02410(param_2,0,2);
      fn_82F02410(param_2,0,1);
      if (*(int *)(param_1 + 0x608) != 0) {
        fn_82F2A028(param_1);
        *(unsigned int *)(param_1 + 0x608) = 0;
      }
      fn_82F02410(param_2,param_3,*(unsigned int *)(param_1 + 0x610));
      fn_82F02410(param_2,(int)param_4 < 0,1);
      fn_82F02410(param_2,uVar4,*(unsigned int *)(param_1 + 0x60c));
      return;
    }
    iVar1 = *(int *)(param_1 + 0x4e98) * 8;
    param_3 = (param_3 - uVar2) - 1;
    fn_82F02410(param_2,*(unsigned int *)(iVar1 + *(int *)(param_1 + 0x4e9c)),
                      *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x4e9c) + 4));
    uVar3 = 2;
  }
  else {
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x4e78) + (int)((param_3 & 0xffffffff) << 2));
    if ((uVar4 & 0xffffffff) <= (unsigned __int64)uVar2) goto LAB_82f2a244;
    iVar1 = *(int *)(param_1 + 0x4e9c);
    if (((unsigned __int64)uVar2 & 0x7fffffff) << 1 < (uVar4 & 0xffffffff)) goto LAB_82f2a2a0;
    uVar4 = uVar4 - uVar2;
    puVar5 = (unsigned int *)(*(int *)(param_1 + 0x4e98) * 8 + iVar1);
    fn_82F02410(param_2,*puVar5,puVar5[1]);
    uVar3 = 1;
  }
  fn_82F02410(param_2,1,uVar3);
LAB_82f2a244:
  puVar5 = (unsigned int *)
           (*(int *)(param_1 + 0x4e9c) +
           (int)(((*(unsigned int *)(*(int *)(param_1 + 0x4e80) + (int)((param_3 & 0xffffffff) << 2)) +
                   uVar4 & 0x7fffffff) * 2 - 2 & 0xffffffff) << 2));
  fn_82F02410(param_2,*puVar5,puVar5[1]);
  fn_82F02410(param_2,((param_4 | ~-param_4) & 0xffffffff) >> 0x1f,1);
  return;
}

