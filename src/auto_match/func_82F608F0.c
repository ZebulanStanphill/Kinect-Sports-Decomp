typedef unsigned char bool;
extern int fn_82F61808();
extern int fn_82F61908();


unsigned __int64 fn_82F608F0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  
  uVar4 = 0;
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) == '\0') {
    uVar4 = 0xffffffff82240404;
  }
  else {
    bVar1 = *(int *)(param_1 + 0xc) != 0;
    if ((*(unsigned int *)(param_1 + 0x18) & 2) == 0) {
      uVar5 = 0;
      if (bVar1) {
        iVar7 = 0;
        do {
          if (*(int *)(iVar7 + *(int *)(param_1 + 0x1c)) != 0) {
            piVar3 = *(int **)(iVar7 + *(int *)(param_1 + 0x1c));
            (**(int (***)())(*piVar3 + 0x10))(piVar3);
          }
          uVar5 = uVar5 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
      }
    }
    else {
      lVar6 = 0;
      uVar5 = 0;
      if (bVar1) {
        iVar7 = 0;
        lVar8 = 0;
        do {
          iVar2 = *(int *)(iVar7 + *(int *)(param_1 + 0x1c));
          if (iVar2 != 0) {
            fn_82F61808(param_1 + 0x90,0xffffffff82f60698,iVar2,0,
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x20) + lVar8);
            lVar6 = lVar6 + 1;
            lVar8 = lVar8 + 4;
          }
          uVar5 = uVar5 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar5 < *(unsigned int *)(param_1 + 0xc));
      }
      fn_82F61908(param_1 + 0x90,lVar6,*(unsigned int *)(param_1 + 0x20),0,0xffffffffffffffff);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return uVar4;
}

