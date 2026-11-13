typedef unsigned char bool;
extern unsigned int *auStack_50;
extern int fn_822ABA88();
extern int fn_822BD338();
extern int fn_823099E8();
extern int fn_8230A5A0();
extern int fn_8230A860();
extern int fn_8230A9D0();
extern int fn_8230AAD0();
extern int fn_823D0FF8();
extern int fn_8288B760();


void fn_82309468(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  unsigned int uVar5;
  char cVar6;
  char cVar7;
  unsigned __int64 uVar8;
  int iVar9;
  unsigned char auStack_50 [32];
  
  iVar9 = *(int *)(param_2 + 0x10);
  iVar4 = *(int *)(iVar9 + 0x9a0);
  if (iVar4 == 0) {
    iVar1 = *(int *)(iVar9 + 0x41c);
    iVar4 = *(int *)(iVar9 + 0x9a4);
    if (((iVar1 == 3) || (iVar1 == 4)) || (iVar1 == 5)) {
      piVar2 = *(int **)(*(int *)(iVar9 + 0x420) * 4 + **(int **)(iVar9 + 8));
      iVar4 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),*(unsigned int *)(iVar9 + 0x424));
    }
  }
  iVar9 = *(int *)(param_2 + 0xc);
  if (iVar4 == iVar9) {
    return;
  }
  if (*(int *)(iVar9 + 0x168) == 0) {
    uVar5 = *(unsigned int *)(iVar9 + 0x16c);
  }
  else {
    uVar5 = fn_8288B760();
    uVar5 = uVar5 & 0xff;
  }
  if (uVar5 == 0) {
    return;
  }
  cVar7 = '\0';
  bVar3 = *(char *)(*(int *)(param_2 + 0x10) + 0xd51) != '\0';
  cVar6 = fn_822BD338((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20) +
                            4,0xffffffff821aca94);
  if ((cVar6 != '\0') ||
     (cVar6 = fn_822BD338((unsigned __int64)
                                *(unsigned int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20) + 4,
                                0xffffffff821aee20), cVar6 != '\0')) {
    cVar7 = fn_823099E8(param_1,param_2);
  }
  if ((cVar7 != '\0') || (*(int *)(param_2 + 0x120) == 0)) goto LAB_8230966c;
  if ((bVar3) &&
     ((*(int *)(*(int *)(param_2 + 0xc) + 0x24) == 0 &&
      (*(int *)(*(int *)(param_2 + 0xc) + 0x220) == 0)))) {
    fn_8230A9D0(param_2);
    uVar8 = 1;
LAB_8230965c:
    fn_8230AAD0(param_2,uVar8);
  }
  else {
    if ((*(int *)(*(int *)(param_2 + 0xc) + 0x24) == 0) &&
       (*(int *)(*(int *)(param_2 + 0xc) + 0x224) == 3)) {
      fn_8230A860(auStack_50,param_2);
    }
    else {
      fn_8230A5A0(auStack_50,param_2);
    }
    fn_823D0FF8(*(unsigned int *)(param_2 + 0x10),
                      *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x2c));
    if (bVar3) {
      uVar8 = 0;
      goto LAB_8230965c;
    }
  }
  cVar7 = '\x01';
LAB_8230966c:
  *(unsigned int *)(param_2 + 0x120) = 0;
  if (((*(char *)(param_2 + 0x60) == '\0') && (cVar7 != '\0')) && (bVar3)) {
    iVar9 = *(int *)(*(int *)(param_2 + 0xc) + 0x2c) * 0x84 +
            *(int *)(*(int *)(param_2 + 0x10) + 0x4bc);
    *(int *)(iVar9 + 0x2c) = *(int *)(iVar9 + 0x2c) + 1;
    iVar9 = *(int *)(param_2 + 0x10);
    iVar4 = *(int *)(iVar9 + 0x54);
    if (iVar4 == 8) {
      iVar9 = *(int *)(*(int *)(param_2 + 0xc) + 0x2c) * 0x84 + *(int *)(iVar9 + 0x4bc);
      *(int *)(iVar9 + 0x30) = *(int *)(iVar9 + 0x30) + 1;
    }
    else if (iVar4 == 9) {
      iVar9 = *(int *)(*(int *)(param_2 + 0xc) + 0x2c) * 0x84 + *(int *)(iVar9 + 0x4bc);
      *(int *)(iVar9 + 0x34) = *(int *)(iVar9 + 0x34) + 1;
    }
    else if (iVar4 == 10) {
      iVar9 = *(int *)(*(int *)(param_2 + 0xc) + 0x2c) * 0x84 + *(int *)(iVar9 + 0x4bc);
      *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + 1;
    }
  }
  *(char *)(param_2 + 0x60) = cVar7;
  return;
}

