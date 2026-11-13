extern int fn_82B7C438();
extern int fn_82BA02A8();
extern int fn_82BA0450();
extern int fn_82BABD38();
extern int fn_82BD3440();
extern int fn_82BD34A0();


void fn_82BB6580(int *param_1)

{
  unsigned int uVar1;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar2;
  char cVar8;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar7;
  int *piVar9;
  int iVar10;
  unsigned int uVar11;
  __int64 lVar12;
  int *piVar14;
  __int64 lVar13;
  unsigned __int64 uVar15;
  
  iVar5 = *param_1;
  if ((*(unsigned int *)(iVar5 + 0x858) >> 10 & 1) == 0) {
    for (iVar5 = *(int *)(param_1[1] + 0x88); *(int *)(iVar5 + 8) != 0; iVar5 = *(int *)(iVar5 + 8))
    {
      for (iVar10 = *(int *)(iVar5 + 0x1c); *(int *)(iVar10 + 8) != 0; iVar10 = *(int *)(iVar10 + 8)
          ) {
        if ((*(unsigned int *)(iVar10 + 0xe4) & 1) != 0) {
          *(unsigned int *)(iVar10 + 0xe4) = *(unsigned int *)(iVar10 + 0xe4) | 0x20;
        }
      }
    }
  }
  else {
    uVar15 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x560) + 1;
    iVar5 = fn_82B7C438(iVar5,(uVar15 & 0x3fffffff) << 2);
    iVar10 = 0;
    if (0 < (int)uVar15) {
      piVar9 = (int *)(iVar5 + -4);
      do {
        piVar9 = piVar9 + 1;
        *piVar9 = iVar10;
        iVar10 = iVar10 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    for (iVar10 = *(int *)(param_1[1] + 0x88); *(int *)(iVar10 + 8) != 0;
        iVar10 = *(int *)(iVar10 + 8)) {
      for (piVar9 = *(int **)(iVar10 + 0x1c); piVar9[2] != 0; piVar9 = (int *)piVar9[2]) {
        if ((piVar9[0x39] & 1U) != 0) {
          iVar6 = (**(int (***)())(*piVar9 + 0x2c))(piVar9);
          if (iVar6 == 0) {
            if (piVar9[6] == 0x32) {
              uVar2 = fn_82BD3440((unsigned __int64)(unsigned int)piVar9[0x38] + 1,iVar5);
              fn_82BD34A0(0,uVar2,iVar5);
            }
            else {
              iVar6 = 1;
              if (0 < piVar9[5]) {
                piVar14 = piVar9 + 0x3b;
                do {
                  if (*(int *)(*piVar14 + 0x3b4) != piVar9[0xed]) {
                    uVar2 = fn_82BD3440((unsigned __int64)*(unsigned int *)(*piVar14 + 0xe0) + 1,iVar5);
                    fn_82BD34A0(0,uVar2,iVar5);
                  }
                  iVar6 = iVar6 + 1;
                  piVar14 = piVar14 + 1;
                } while (iVar6 <= piVar9[5]);
              }
            }
          }
          else {
            uVar2 = fn_82BD3440((unsigned __int64)(unsigned int)piVar9[0x38] + 1,iVar5);
            fn_82BD34A0(0,uVar2,iVar5);
            iVar6 = 1;
            piVar9[0x39] = piVar9[0x39] | 0x20;
            if (0 < piVar9[5]) {
              piVar14 = piVar9 + 0x3a;
              do {
                piVar14 = piVar14 + 1;
                uVar2 = fn_82BD3440((unsigned __int64)*(unsigned int *)(*piVar14 + 0xe0) + 1,iVar5);
                fn_82BD34A0(0,uVar2,iVar5);
                iVar6 = iVar6 + 1;
              } while (iVar6 <= piVar9[5]);
            }
          }
          if (((unsigned int)piVar9[0x39] >> 9 & 1) == 0) {
            cVar8 = fn_82BABD38(piVar9);
            if (cVar8 == '\0') goto LAB_82bb67dc;
            uVar11 = piVar9[0x38];
            uVar1 = *(unsigned int *)(piVar9[0x3b] + 0xe0);
          }
          else {
            uVar11 = piVar9[0x38];
            iVar6 = fn_82BA0450();
            uVar1 = *(unsigned int *)(iVar6 + 0xe0);
          }
          uVar3 = fn_82BD3440((unsigned __int64)uVar11 + 1,iVar5);
          uVar4 = fn_82BD3440((unsigned __int64)uVar1 + 1,iVar5);
          uVar2 = uVar3;
          if ((int)uVar4 <= (int)uVar3) {
            uVar2 = uVar4;
            uVar4 = uVar3;
          }
          fn_82BD34A0(uVar2,uVar4,iVar5);
        }
LAB_82bb67dc:;}
    }
    lVar12 = 0;
    lVar13 = 0;
    for (iVar10 = *(int *)(param_1[1] + 0x88); *(int *)(iVar10 + 8) != 0;
        iVar10 = *(int *)(iVar10 + 8)) {
      for (iVar6 = *(int *)(iVar10 + 0x1c); *(int *)(iVar6 + 8) != 0; iVar6 = *(int *)(iVar6 + 8)) {
        if ((*(unsigned int *)(iVar6 + 0xe4) & 1) != 0) {
          iVar7 = fn_82BD3440((unsigned __int64)*(unsigned int *)(iVar6 + 0xe0) + 1,iVar5);
          if (iVar7 == 0) {
            lVar13 = lVar13 + 1;
            uVar11 = *(unsigned int *)(iVar6 + 0xe4) | 0x20;
          }
          else {
            uVar11 = *(unsigned int *)(iVar6 + 0xe4) & 0xffffffdf;
          }
          *(unsigned int *)(iVar6 + 0xe4) = uVar11;
          lVar12 = lVar12 + 1;
        }
      }
    }
    fn_82BA02A8(*param_1,0xffffffff820e0458,lVar13,lVar12);
    (**(int (***)())(*param_1 + 0x59c))(*(unsigned int *)(*param_1 + 0x5a4),iVar5);
  }
  return;
}

