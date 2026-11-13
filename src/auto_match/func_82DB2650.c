typedef unsigned char bool;
#define true 1
#define false 0
#define TBLr 0
extern unsigned int *auStack_a0;
extern int fn_82CE5410();
extern int fn_82CEA480();
extern int fn_82D356D0();
extern int fn_82D35890();
extern int fn_82D93430();
extern int fn_82D93438();
extern int fn_82DB0EC8();
extern int fn_82DB1318();
extern int fn_82DB1478();
extern int fn_82DB1630();
extern int fn_82DB2098();
extern unsigned int iStack_a4;
extern unsigned int iStack_b0;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;


void fn_82DB2650(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  char cVar12;
  unsigned short uVar10;
  short sVar11;
  int iVar9;
  int iVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  int iStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  int iStack_a4;
  unsigned char auStack_a0 [160];
  
  uVar1 = *(unsigned int *)(param_1 + 0x48);
  uStack_ac = 0;
  piVar7 = (int *)fn_82CE5410();
  uVar14 = uVar1 | 0x80000000;
  iVar13 = *piVar7;
  cVar12 = '\0';
  *piVar7 = (uVar1 * 4 + 0x7f & 0xffffff80) + iVar13;
  iStack_b0 = iVar13;
  uStack_a8 = uVar14;
  iStack_a4 = iVar13;
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar8 + 4);
    if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
      *puVar2 = "LtDynamicBuild";
      puVar2[3] = "StGather";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(unsigned int **)(iVar8 + 4) = puVar2 + 4;
    }
    uVar3 = *(unsigned int *)(param_1 + 0x28);
    iVar16 = param_1 + 0x44;
    *(unsigned int *)(param_1 + 0x48) = 0;
    *(unsigned int *)(param_1 + 0x48) = 0;
    fn_82DB1318(iVar16,uVar3);
    fn_82DB1478(iVar16,uVar3);
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar8 + 4);
    if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
      *puVar2 = "StClear";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
    }
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar8 + 4);
    if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
      *puVar2 = "StRebuild";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
    }
    fn_82DB2098(param_1,param_1 + 0x10,iVar16,*(unsigned int *)(param_1 + 0x28),param_2,param_3);
  }
  else {
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar8 + 4);
    if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
      *puVar2 = "LtIncrementalBuild";
      puVar2[3] = "StClear Tree";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(unsigned int **)(iVar8 + 4) = puVar2 + 4;
    }
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar8 + 4);
    if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
      *puVar2 = "StFind Inactivated";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
    }
    dVar18 = (double)lbl_82002AE0;
    if (*(char *)(param_1 + 0x69) != '\0') {
      cVar12 = fn_82DB0EC8(param_1,&iStack_b0);
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      iVar13 = iStack_b0;
      puVar2 = *(unsigned int **)(iVar8 + 4);
      if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
        *puVar2 = "StUpdate Inactive Tree";
        uVar5 = TBLr;
        puVar2[1] = (int)uVar5;
        *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
      }
      uVar15 = (unsigned __int64)uStack_ac;
      uVar3 = *(unsigned int *)(param_1 + 0xc);
      if (0 < (int)uStack_ac) {
        piVar7 = (int *)(iStack_b0 + -4);
        dVar17 = (double)lbl_821AAD20;
        do {
          puVar2 = (unsigned int *)piVar7[1];
          (**(int (***)())(*(int *)*puVar2 + 0x1c))(dVar17,(int *)*puVar2,puVar2[2]);
          iVar8 = KeTlsGetValue(lbl_8323B4A0);
          puVar4 = *(unsigned int **)(iVar8 + 4);
          if (puVar4 < *(unsigned int **)(iVar8 + 0xc)) {
            puVar4[1] = (float)dVar18;
            *puVar4 = "MiNum of Added Nodes";
            *(unsigned int **)(iVar8 + 4) = puVar4 + 2;
          }
          uVar10 = fn_82D356D0(uVar3,auStack_a0,puVar2);
          piVar7 = piVar7 + 1;
          fn_82D93430((int)*(char *)(*piVar7 + 0x10) + *piVar7,uVar10);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      *(unsigned char *)(param_1 + 0x69) = 0;
      uVar14 = uStack_a8;
    }
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar8 + 4);
    if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
      *puVar2 = "StFind Activated";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
    }
    iVar8 = 0;
    uVar3 = *(unsigned int *)(param_1 + 0xc);
    if (-1 < *(int *)(param_1 + 0x58)) {
      piVar7 = *(int **)(param_1 + 0x50);
      do {
        if (*piVar7 != -1) break;
        iVar8 = iVar8 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar8 <= *(int *)(param_1 + 0x58));
    }
    if (iVar8 <= *(int *)(param_1 + 0x58)) {
      do {
        piVar7 = (int *)(iVar8 * 8 + *(int *)(param_1 + 0x50));
        iVar16 = *piVar7;
        iVar9 = piVar7[1];
        sVar11 = fn_82D93438(*(char *)(iVar16 + 0x10) + iVar16);
        if ((iVar9 != 1) || (bVar6 = true, sVar11 == -1)) {
          bVar6 = false;
        }
        if ((bVar6) && (*(char *)(iVar16 + 0x18) == '\x01')) {
          iVar9 = KeTlsGetValue(lbl_8323B4A0);
          puVar2 = *(unsigned int **)(iVar9 + 4);
          if (puVar2 < *(unsigned int **)(iVar9 + 0xc)) {
            puVar2[1] = (float)dVar18;
            *puVar2 = "MiNum of Removed Nodes";
            *(unsigned int **)(iVar9 + 4) = puVar2 + 2;
          }
          uVar10 = fn_82D93438(*(char *)(iVar16 + 0x10) + iVar16);
          fn_82D35890(uVar3,uVar10);
          fn_82DB1630(param_1,iVar16);
        }
        iVar8 = iVar8 + 1;
        if (iVar8 <= *(int *)(param_1 + 0x58)) {
          piVar7 = (int *)(iVar8 * 8 + *(int *)(param_1 + 0x50));
          do {
            if (*piVar7 != -1) break;
            iVar8 = iVar8 + 1;
            piVar7 = piVar7 + 2;
          } while (iVar8 <= *(int *)(param_1 + 0x58));
        }
      } while (iVar8 <= *(int *)(param_1 + 0x58));
    }
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar8 + 4);
    if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
      *puVar2 = "StUpdate Active";
      uVar5 = TBLr;
      puVar2[1] = (int)uVar5;
      *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      fn_82DB2098(param_1,param_1 + 0x10,param_1 + 0x44,*(unsigned int *)(param_1 + 0x28),param_2,
                    param_3);
    }
  }
  iVar8 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(unsigned int **)(iVar8 + 4);
  if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
    *puVar2 = &lbl_8202CF7C;
    uVar5 = TBLr;
    puVar2[1] = (int)uVar5;
    *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
  }
  *(unsigned char *)(param_1 + 0x69) = 0;
  fn_82CEA480(param_1 + 0x50);
  if (cVar12 != '\0') {
    *(unsigned char *)(param_1 + 0x69) = 1;
  }
  piVar7 = (int *)fn_82CE5410();
  *piVar7 = iStack_a4;
  iVar8 = fn_82CE5410();
  if ((uVar14 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))
              (*(int **)(iVar8 + 0x10),iVar13,uVar14 & 0x3fffffff,4);
  }
  return;
}

