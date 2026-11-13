typedef unsigned char bool;
extern unsigned int *auStack_50;
extern int fn_82A1E968();
extern int fn_82A1F160();
extern int fn_82F60CA8();
extern int fn_82F60D60();
extern int fn_82F61808();
extern int fn_82F61908();
extern unsigned int lbl_82240408;


unsigned __int64 fn_82F60740(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  __int64 lVar9;
  __int64 lStack_60;
  __int64 lStack_58;
  unsigned __int64 auStack_50 [10];
  
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) == '\0') {
    uVar4 = 0xffffffff82240404;
  }
  else {
    fn_82A1F160(auStack_50);
    fn_82A1E968(&lStack_60);
    iVar6 = param_1 + 0x24;
    do {
      uVar4 = fn_82F60CA8(iVar6);
      fn_82A1E968(&lStack_58);
      if ((unsigned char *)uVar4 != &lbl_82240408) goto LAB_82f607e4;
      trapDoubleWordImmediate(6,auStack_50[0],0);
      uVar5 = (lStack_58 - lStack_60) * 1000;
      trapDoubleWordImmediate
                (5,auStack_50[0] & ~(((lStack_58 - lStack_60) * 2000 | uVar5 >> 0x3f) - 1),0xffff);
    } while (((__int64)uVar5 / (__int64)auStack_50[0] & 0xffffffffU) < (param_2 & 0xffffffff));
    uVar4 = 0x2240401;
LAB_82f607e4:
    if ((int)uVar4 == 0) {
      uVar5 = 0;
      bVar1 = *(int *)(param_1 + 0xc) != 0;
      if ((*(unsigned int *)(param_1 + 0x18) & 1) == 0) {
        if (bVar1) {
          iVar8 = 0;
          do {
            if (*(int *)(iVar8 + *(int *)(param_1 + 0x1c)) != 0) {
              piVar3 = *(int **)(iVar8 + *(int *)(param_1 + 0x1c));
              (**(int (***)())(*piVar3 + 0xc))(piVar3,iVar6);
            }
            uVar5 = uVar5 + 1;
            iVar8 = iVar8 + 4;
          } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xc));
        }
      }
      else {
        uVar7 = 0;
        if (bVar1) {
          iVar8 = 0;
          lVar9 = 0;
          do {
            iVar2 = *(int *)(iVar8 + *(int *)(param_1 + 0x1c));
            if (iVar2 != 0) {
              fn_82F61808(param_1 + 0x90,0xffffffff82f60668,iVar2,iVar6,
                              (unsigned __int64)*(unsigned int *)(param_1 + 0x20) + lVar9);
              uVar5 = uVar5 + 1;
              lVar9 = lVar9 + 4;
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar7 < *(unsigned int *)(param_1 + 0xc));
        }
        fn_82F61908(param_1 + 0x90,uVar5,*(unsigned int *)(param_1 + 0x20),0,0xffffffffffffffff);
      }
      fn_82F60D60(iVar6);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return uVar4;
}

