extern int fn_82EEB3B8();
extern int fn_82EEB480();
extern int fn_82EEB480();


unsigned __int64 fn_82EEB7A8(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar4;
  __int64 lVar3;
  unsigned __int64 uVar5;
  int aiStack_20;

  uVar5 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar5 = 0xffffffff8000ffff;
  }
  else {
    piVar4 = (int *)(*(int *)(param_1 + 0x14) + param_2);
    iVar2 = *piVar4;
    piVar4[1] = *(int *)(iVar2 + 8);
    *(int **)(iVar2 + 8) = piVar4;
    uVar1 = *(unsigned int *)(iVar2 + 4);
    aiStack_20 = iVar2;
    if ((unsigned __int64)uVar1 < (unsigned __int64)*(unsigned int *)(param_1 + 0x10)) {
      lVar3 = (unsigned __int64)uVar1 - 1;
      *(int *)(iVar2 + 4) = (int)lVar3;
      if (lVar3 != 0) {
        return 0;
      }
      lVar3 = fn_82EEB3B8(param_1,param_1 + 4,&aiStack_20);
    }
    else {
      *(unsigned int *)(iVar2 + 4) = uVar1 - 1;
      lVar3 = fn_82EEB3B8(param_1,param_1 + 8,&aiStack_20);
      if (*(int *)(iVar2 + 4) != 0) {
        fn_82EEB480(lVar3,lVar3 + 4,&aiStack_20);
        return 0;
      }
    }
    iVar2 = fn_82EEB480(lVar3,lVar3,&aiStack_20);
    if (*(int *)(iVar2 + 0x20) != 0) {
      fn_82EEB480();
    }
  }
  return uVar5;
}
