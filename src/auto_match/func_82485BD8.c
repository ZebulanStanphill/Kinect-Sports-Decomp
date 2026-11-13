typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8225C590();
extern int fn_8225D930();
extern int fn_8225DA18();
extern int fn_8225F160();
extern int fn_82F63CA0();
extern unsigned int lbl_831C64D0;


void fn_82485BD8(int param_1,int param_2)

{
  char cVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  char *pcVar8;
  unsigned int *puVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  
  iVar4 = fn_8225F160();
  *(unsigned int *)(param_1 + 0x18c4) = 0;
  *(unsigned int *)(iVar4 + 0x30) = 0;
  uVar2 = *(unsigned int *)(param_1 + 0x18c0);
  if (uVar2 == 0) {
LAB_82485c88:
    *(unsigned int *)(iVar4 + 4) = 4;
  }
  else if (uVar2 == 1) {
    *(unsigned int *)(iVar4 + 4) = 5;
  }
  else if (uVar2 < 3) {
LAB_82485c78:
    *(unsigned int *)(iVar4 + 4) = 2;
  }
  else if (uVar2 < 6) {
    iVar7 = 0;
    puVar9 = (unsigned int *)(param_1 + 0x838);
    lVar6 = 4;
    do {
      if (*puVar9 < 4) {
        iVar7 = iVar7 + 1;
      }
      lVar6 = lVar6 + -1;
      puVar9 = puVar9 + 0x108;
    } while (lVar6 != 0);
    if (iVar7 == 2) goto LAB_82485c78;
    *(unsigned int *)(iVar4 + 4) = 3;
  }
  else {
    if (uVar2 == 6) goto LAB_82485c88;
    if (uVar2 < 8) {
      *(unsigned int *)(iVar4 + 4) = 0;
    }
  }
  uVar2 = *(unsigned int *)(param_1 + 0x18b8);
  if (uVar2 == 0) {
    iVar7 = *(int *)(param_1 + 0xc58);
    if (iVar7 != 2) {
      if ((iVar7 == 0) || (iVar7 == 1)) {
LAB_82485ea0:
        *(unsigned int *)(iVar4 + 0x5c) = 1;
        *(unsigned int *)(iVar4 + 8) = 1;
        *(unsigned int *)(iVar4 + 0x40) = 1;
        *(unsigned int *)(iVar4 + 100) = 2;
        *(unsigned int *)(iVar4 + 0x68) = 1;
        *(unsigned int *)(param_1 + 0x18c4) = 2;
        goto LAB_82485ed4;
      }
LAB_82485ebc:
      *(unsigned int *)(iVar4 + 0x5c) = 1;
      *(unsigned int *)(iVar4 + 8) = 1;
      *(unsigned int *)(iVar4 + 0x40) = 1;
      *(unsigned int *)(iVar4 + 100) = 2;
      *(unsigned int *)(iVar4 + 0x68) = 1;
      *(unsigned int *)(param_1 + 0x18c4) = 4;
      goto LAB_82485ed4;
    }
  }
  else {
    if (uVar2 != 1) {
      if (uVar2 < 3) {
        iVar10 = 0;
        iVar7 = 0;
        puVar9 = (unsigned int *)(param_1 + 0x838);
        lVar6 = 4;
        do {
          if (*puVar9 < 2) {
            iVar7 = iVar7 + 1;
LAB_82485cd4:
            iVar10 = iVar10 + 1;
          }
          else if (*puVar9 == 3) goto LAB_82485cd4;
          lVar6 = lVar6 + -1;
          puVar9 = puVar9 + 0x108;
        } while (lVar6 != 0);
        *(int *)(iVar4 + 0x68) = iVar7;
        *(int *)(iVar4 + 0x5c) = iVar10;
        *(unsigned int *)(iVar4 + 100) = 1;
        if (*(int *)(param_1 + 0x18c0) == 6) {
          if (*(int *)(param_1 + 0xc58) == 4) {
            *(unsigned int *)(param_1 + 0x18c4) = 1;
            *(unsigned int *)(iVar4 + 8) = 3;
            *(unsigned int *)(iVar4 + 0x40) = 3;
          }
          else if (*(int *)(param_1 + 0xc58) == 3) {
            *(unsigned int *)(param_1 + 0x18c4) = 4;
            *(unsigned int *)(iVar4 + 8) = 1;
            *(unsigned int *)(iVar4 + 0x40) = 1;
            *(unsigned int *)(iVar4 + 100) = 2;
          }
          else {
            if (iVar10 == 1) {
              *(unsigned int *)(param_1 + 0x18c4) = 2;
              *(unsigned int *)(iVar4 + 100) = 1;
            }
            else if (iVar10 == 2) {
              *(unsigned int *)(param_1 + 0x18c4) = 7;
              *(unsigned int *)(iVar4 + 100) = 2;
            }
            else if (iVar10 == 3) {
              *(unsigned int *)(param_1 + 0x18c4) = 8;
              *(unsigned int *)(iVar4 + 100) = 3;
            }
            else if (iVar10 == 4) {
              *(unsigned int *)(param_1 + 0x18c4) = 9;
              *(unsigned int *)(iVar4 + 100) = 4;
            }
            *(unsigned int *)(iVar4 + 8) = 1;
            *(unsigned int *)(iVar4 + 0x40) = 1;
          }
        }
        else {
          iVar7 = *(int *)(param_1 + 0x18c8);
          *(int *)(param_1 + 0x18c4) = iVar7;
          if (iVar7 == 2) {
            *(unsigned int *)(iVar4 + 8) = 1;
            *(unsigned int *)(iVar4 + 0x40) = 1;
            *(unsigned int *)(iVar4 + 100) = *(unsigned int *)(iVar4 + 0x5c);
            if (*(int *)(param_1 + 0x18c0) == 0) {
              *(unsigned int *)(iVar4 + 0x30) = 1;
            }
          }
          else if (iVar7 == 6) {
            *(unsigned int *)(iVar4 + 8) = 2;
            *(unsigned int *)(iVar4 + 0x40) = 2;
            *(unsigned int *)(iVar4 + 100) = 1;
          }
        }
      }
      goto LAB_82485ed4;
    }
    if ((*(int *)(param_1 + 0xc58) == 0) || (*(int *)(param_1 + 0xc58) == 1)) {
      iVar7 = *(int *)(param_1 + 0x1078);
      *(unsigned int *)(iVar4 + 0x5c) = 1;
      *(unsigned int *)(iVar4 + 8) = 0;
      *(unsigned int *)(iVar4 + 0x40) = 0;
      *(unsigned int *)(iVar4 + 0x68) = 1;
      if (iVar7 == 3) {
        *(unsigned int *)(iVar4 + 100) = 2;
        *(unsigned int *)(param_1 + 0x18c4) = 5;
      }
      else {
        *(unsigned int *)(iVar4 + 100) = 1;
        *(unsigned int *)(param_1 + 0x18c4) = 3;
      }
      goto LAB_82485ed4;
    }
    iVar7 = *(int *)(param_1 + 0x1078);
    if ((iVar7 == 3) || (iVar10 = *(int *)(param_1 + 0x1498), iVar10 == 3)) goto LAB_82485ebc;
    if ((((iVar7 == 0) || (iVar7 == 1)) || (iVar10 == 0)) || (iVar10 == 1)) goto LAB_82485ea0;
    *(unsigned int *)(iVar4 + 8) = 3;
    *(unsigned int *)(iVar4 + 0x40) = 3;
  }
  *(unsigned int *)(iVar4 + 0x5c) = 1;
  *(unsigned int *)(iVar4 + 100) = 1;
  *(unsigned int *)(iVar4 + 0x68) = 1;
  *(unsigned int *)(param_1 + 0x18c4) = 1;
LAB_82485ed4:
  pcVar11 = (char *)(param_1 + 0x334);
  pcVar8 = (&lbl_831C64D0)[*(int *)(param_1 + 0x18c4)] + -1;
  do {
    if ((char *)(param_1 + 0x434) <= pcVar11) break;
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
    *pcVar11 = cVar1;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  if (pcVar11 == (char *)(param_1 + 0x434)) {
    pcVar11[-1] = '\0';
  }
  if (param_2 != 0) {
    iVar4 = fn_8225C590();
    if (*(int *)(iVar4 + 100) == 0) {
      *(unsigned int *)(iVar4 + 0x30) = 0;
      *(unsigned int *)(iVar4 + 100) = 1;
      iVar7 = *(int *)(iVar4 + 0x10);
      if (iVar7 != *(int *)(iVar4 + 0x14)) {
        fn_82F63CA0(iVar7,*(int *)(iVar4 + 0x14),0);
        *(int *)(iVar4 + 0x14) = iVar7;
      }
      *(unsigned int *)(iVar4 + 100) = 0;
    }
    bVar3 = false;
    iVar7 = 0;
    piVar12 = (int *)(param_1 + 0x838);
    do {
      if ((((*piVar12 == 0) || (*piVar12 == 1)) &&
          ((*(int *)(param_1 + 0x18b8) != 1 || (iVar7 != 3)))) &&
         (lVar6 = fn_8225DA18(iVar4,piVar12[1]), lVar6 != 0)) {
        fn_8225D930(iVar4);
      }
      if ((*piVar12 == 2) && (!bVar3)) {
        iVar10 = piVar12[2];
        iVar5 = fn_8225F160();
        bVar3 = true;
        *(int *)(iVar5 + 0x14) = iVar10;
        *(unsigned int *)(iVar5 + 0x1c) = 0;
        *(unsigned int *)(iVar5 + 0x20) = 0;
        *(unsigned int *)(iVar5 + 0x24) = 0;
        *(int *)(iVar5 + 0x28) = iVar10;
      }
      iVar7 = iVar7 + 1;
      piVar12 = piVar12 + 0x108;
    } while (iVar7 < 4);
  }
  return;
}

