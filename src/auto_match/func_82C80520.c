typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A1DDC0();
extern int fn_82C53960();
extern int fn_82C53970();
extern int fn_82C7F870();
extern int fn_82C7F8F8();
extern int fn_82C800C8();
extern int fn_82C80360();
extern int fn_82CC6160();
extern int fn_82CC6230();
extern int fn_82F68CC0();


bool fn_82C80520(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5
                  )

{
  short sVar1;
  int iVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar2;
  unsigned int *puVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  
  if (param_2 == (unsigned int *)0x0) {
    return true;
  }
  if (param_1 == 0) {
LAB_82c80598:
    *param_2 = 0;
    return true;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  sVar1 = *(short *)(param_1 + 0xe);
  iVar3 = fn_82C800C8(iVar5,param_3,param_4,0);
  if (iVar3 != 0) goto LAB_82c80598;
  if (param_5 != 0) {
    if (iVar5 == 0) {
      if (sVar1 != 0x20) goto LAB_82c80598;
    }
    else if ((((iVar5 != 0x59565955) && (iVar5 != 0x32595559)) &&
             (((iVar5 != 0x56555949 && ((iVar5 != 0x30323449 && (iVar5 != 0x32315659)))) &&
              (iVar5 != 0x32323450)))) && (iVar5 != 0x31313450)) goto LAB_82c80660;
    piVar4 = (int *)fn_82C53960(0x138,0);
    if (piVar4 == (int *)0x0) goto LAB_82c80598;
    fn_82C7F870();
    iVar5 = fn_82C53960(0x28,0);
    *piVar4 = iVar5;
    if (iVar5 != 0) {
      puVar8 = (unsigned int *)(param_1 + -4);
      puVar7 = (unsigned int *)(iVar5 + -4);
      lVar9 = 10;
      do {
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar8;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      iVar5 = *(int *)(*piVar4 + 8);
      if (iVar5 < 1) {
        iVar5 = -iVar5;
      }
      *(int *)(*piVar4 + 8) = iVar5;
      iVar5 = *piVar4;
      if (*(int *)(iVar5 + 0x14) == 0) {
        uVar6 = fn_82C80360(piVar4,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8));
        *(unsigned int *)(iVar5 + 0x14) = uVar6;
      }
      fn_82CC6160(piVar4 + 0x27,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),param_3,
                   param_4);
      piVar4[7] = (int)param_3;
      piVar4[8] = (int)param_4;
      piVar4[5] = -1;
      piVar4[6] = -1;
      piVar4[0x49] = param_5;
      *param_2 = piVar4;
      return false;
    }
    goto LAB_82c80650;
  }
  if (iVar5 == 0) {
    if ((((sVar1 != 8) && (sVar1 != 0x10)) && (sVar1 != 0x18)) && (sVar1 != 0x20))
    goto LAB_82c80598;
  }
  else if (iVar5 == 3) {
    if (((sVar1 != 0xf) && (sVar1 != 0x10)) && (sVar1 != 0x20)) {
      *param_2 = 0;
      return true;
    }
  }
  else if ((((iVar5 != 0x32595559) && (iVar5 != 0x59565955)) &&
           ((iVar5 != 0x39555659 && ((iVar5 != 0x56555949 && (iVar5 != 0x30323449)))))) &&
          ((iVar5 != 0x32315659 && (iVar5 != 0x32323450)))) {
    *param_2 = 0;
    return true;
  }
  piVar4 = (int *)fn_82C53960(0x138,0);
  if (piVar4 == (int *)0x0) goto LAB_82c80598;
  fn_82C7F870();
  if (iVar5 == 0) {
    if (sVar1 == 8) {
      uVar2 = fn_82C53960(0x428,0);
      *piVar4 = (int)uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        fn_82A1DDC0(uVar2,param_1,0x428);
        goto LAB_82c808a4;
      }
    }
    else {
LAB_82c80870:
      iVar5 = fn_82C53960(0x28,0);
      *piVar4 = iVar5;
      if (iVar5 != 0) {
        puVar8 = (unsigned int *)(param_1 + -4);
        puVar7 = (unsigned int *)(iVar5 + -4);
        lVar9 = 10;
        do {
          puVar8 = puVar8 + 1;
          puVar7 = puVar7 + 1;
          *puVar7 = *puVar8;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
LAB_82c808a4:
        iVar5 = *(int *)(*piVar4 + 8);
        if (iVar5 < 1) {
          iVar5 = -iVar5;
        }
        *(int *)(*piVar4 + 8) = iVar5;
        iVar5 = *piVar4;
        if (*(int *)(iVar5 + 0x14) == 0) {
          uVar6 = fn_82C80360(piVar4,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8));
          *(unsigned int *)(iVar5 + 0x14) = uVar6;
        }
        iVar5 = fn_82CC6230(piVar4 + 0xd,*(unsigned int *)(param_1 + 4),
                                  *(unsigned int *)(param_1 + 8),param_3,param_4);
        piVar4[7] = (int)param_3;
        piVar4[8] = (int)param_4;
        piVar4[5] = -1;
        piVar4[6] = -1;
        piVar4[0x49] = 0;
        *param_2 = piVar4;
        return iVar5 == 0;
      }
    }
  }
  else {
    if (iVar5 != 3) goto LAB_82c80870;
    uVar2 = fn_82C53960(0x34,0);
    *piVar4 = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
      fn_82F68CC0(uVar2,param_1,0x34);
      goto LAB_82c808a4;
    }
  }
LAB_82c80650:
  fn_82C7F8F8(piVar4);
  fn_82C53970(piVar4);
LAB_82c80660:
  *param_2 = 0;
  return true;
}

