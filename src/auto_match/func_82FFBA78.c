extern unsigned int *auStack_5c;
extern int fn_82FA5100();
extern int fn_82FA5190();
extern int fn_82FF9B18();
extern int fn_82FF9F20();
extern int fn_82FFA278();
extern int fn_82FFE098();
extern int fn_82FFE740();
extern int fn_82FFF2F0();
extern unsigned int iStack_60;
extern unsigned int lbl_832645A4;


unsigned __int64 fn_82FFBA78(__int64 param_1,int *param_2)

{
  int iVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  int iStack_60;
  unsigned int auStack_5c;
  
  iVar4 = param_2[3];
  if (iVar4 == 0) {
    return 1;
  }
  lVar7 = param_1 + 0x50;
  iStack_60 = iVar4;
  RtlEnterCriticalSection(lVar7);
  lVar6 = param_1 + 0x90;
  iVar1 = *param_2;
  piVar3 = (int *)fn_82FFE098(lVar6,iVar1);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)fn_82FFE740(lVar6,iVar1);
    if (piVar3 == (int *)0x0) {
      RtlLeaveCriticalSection(lVar7);
      return 2;
    }
    piVar3[6] = iVar1;
  }
  else {
    piVar3[5] = piVar3[5] + 1;
    if (*piVar3 != 0) {
      RtlLeaveCriticalSection(lVar7);
      return 1;
    }
  }
  auStack_5c = 0;
  if ((piVar3[3] - piVar3[2]) / 0xc == 0) {
    uVar2 = 0x800;
    if (*(short *)(param_2 + 6) != 3) {
      uVar2 = 0x10;
    }
    uVar8 = fn_82FA5100(lbl_832645A4,iVar4,uVar2);
    if ((uVar8 & 0xffffffff) == 0) {
      uVar2 = 0x34;
      goto LAB_82ffbc08;
    }
    RtlLeaveCriticalSection(lVar7);
    uVar2 = fn_82FFA278(param_1,param_2,uVar8);
    RtlEnterCriticalSection(lVar7);
  }
  else {
    lVar5 = (unsigned __int64)*(unsigned short *)(param_2 + 6) - 3;
    uVar2 = fn_82FF9F20(piVar3,&auStack_5c,&iStack_60,
                            lVar5 - (((unsigned __int64)*(unsigned short *)(param_2 + 6) - 4) +
                                    (unsigned __int64)(lVar5 == 0)));
    uVar8 = (unsigned __int64)auStack_5c;
    iVar4 = iStack_60;
  }
  if ((int)uVar2 == 1) {
    piVar3[1] = iVar4;
    *piVar3 = (int)uVar8;
    RtlLeaveCriticalSection(lVar7);
    return uVar2;
  }
  if ((uVar8 & 0xffffffff) != 0) {
    fn_82FA5190(lbl_832645A4,uVar8);
  }
LAB_82ffbc08:
  iVar4 = fn_82FF9B18(piVar3);
  if (iVar4 == 0) {
    fn_82FFF2F0(lVar6,iVar1);
  }
  RtlLeaveCriticalSection(lVar7);
  return uVar2;
}

