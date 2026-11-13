typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BA0450();
extern int fn_82BA05E8();
extern int fn_82BB4F18();
extern int fn_82BB5308();
extern int fn_82BB5CB0();
extern int fn_82BB6200();
extern int fn_82BB8248();
extern int fn_82BBFD48();
extern int fn_82BBFDD0();
extern int fn_82BBFE50();
extern int fn_82BC0088();
extern int fn_82BC2438();
extern int fn_82BC24F0();
extern int fn_82BC31C8();
extern int fn_82BC32F0();
extern int fn_82BD3128();
extern int fn_82BD31A8();
extern int fn_82BD3338();
extern unsigned int lbl_820E0044;
extern unsigned int lbl_820E0048;
extern unsigned int lbl_820E004C;
extern unsigned int lbl_820E0050;
extern unsigned int lbl_820E0214;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8316FF50;
extern unsigned int lbl_8316FF54;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * fn_82BB8B88(int *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  bool bVar4;
  char cVar19;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar9;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int *piVar10;
  int iVar11;
  unsigned int *puVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  unsigned int *puVar17;
  unsigned int *puVar18;
  unsigned __int64 uVar20;
  int iVar21;
  unsigned int *puVar22;
  __int64 lVar23;
  char acStack_90 [144];
  
  iVar9 = ((unsigned int *)param_1[0xb])[2];
  puVar18 = (unsigned int *)param_1[0xb];
  while (iVar9 != 0) {
    piVar10 = (int *)puVar18[10];
    cVar19 = (**(int (***)())(*piVar10 + 0x44))(piVar10);
    if ((((cVar19 == '\0') || (iVar9 = param_1[0x1e], iVar9 == 0)) ||
        (*(int *)(iVar9 + 0x1c) < *(int *)(param_1[3] + 8))) ||
       (cVar19 = fn_82BB6200(*(unsigned int *)(iVar9 + 0x28),piVar10), cVar19 == '\0')) {
      if (((int)puVar18[0xf] < 1) || (((unsigned int)piVar10[0x39] >> 9 & 1) == 0)) {
LAB_82bb8d74:
        cVar19 = (**(int (***)())(*(int *)param_1[2] + 4))((int *)param_1[2],piVar10);
        if (cVar19 == '\0') {
          cVar19 = (**(int (***)())(*(int *)param_1[2] + 0x1c))();
          if (cVar19 != '\0') {
            if (((*(unsigned int *)(&lbl_8316FF50 + piVar10[6] * 0x34) >> 2 & 1) == 0) ||
               (bVar4 = true, *(int *)(&lbl_8316FF54 + piVar10[6] * 0x34) == 0)) {
              bVar4 = false;
            }
            if (bVar4) {
              fn_82BD31A8(param_1[2],piVar10);
              uVar8 = (**(int (***)())(*piVar10 + 0x50))(piVar10,1,0);
              uVar5 = (**(int (***)())(*piVar10 + 0x50))(piVar10,2,0);
              uVar6 = fn_82BC32F0(piVar10);
              cVar19 = (**(int (***)())(*(int *)param_1[2] + 4))((int *)param_1[2],piVar10);
              if ((cVar19 != '\0') && (cVar19 = fn_82BB4F18(param_1[3],piVar10), cVar19 != '\0'))
              {
                fn_82BD3128(param_1[2],piVar10);
                goto LAB_82bb8da8;
              }
              fn_82BC31C8(piVar10,uVar8,uVar5,uVar6);
              fn_82BD3128(param_1[2],piVar10);
            }
          }
        }
        else {
          cVar19 = fn_82BB4F18(param_1[3],piVar10);
          if (cVar19 != '\0') {
LAB_82bb8da8:
            fn_82BBFDD0(puVar18);
            return puVar18;
          }
        }
      }
      else {
        iVar14 = fn_82BA0450(piVar10);
        iVar16 = 0;
        iVar11 = 0;
        uVar7 = 0;
        iVar9 = *(int *)(puVar18[0xd] + 4);
        if (iVar9 < 1) {
LAB_82bb8d18:
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0738,0xffffffff820e0168,0x5d8);
        }
        else {
          iVar21 = 0;
          do {
            iVar1 = puVar18[0xd];
            if ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 4)) {
              puVar12 = (unsigned int *)(*(int *)(iVar1 + 8) + iVar21);
            }
            else {
              puVar12 = (unsigned int *)fn_82BC0088(iVar1,uVar7);
            }
            iVar1 = *(int *)*puVar12;
            if (*(int *)(iVar1 + 0x28) == iVar14) {
              iVar2 = puVar18[0xd];
              if ((uVar7 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 4)) {
                piVar13 = (int *)(*(int *)(iVar2 + 8) + iVar21);
              }
              else {
                piVar13 = (int *)fn_82BC0088(iVar2,uVar7);
              }
              if (*(int *)(*piVar13 + 8) == 0) {
                iVar11 = iVar11 + 1;
                iVar16 = iVar1;
              }
            }
            uVar7 = uVar7 + 1;
            iVar21 = iVar21 + 4;
          } while ((int)uVar7 < iVar9);
          if (iVar16 == 0) goto LAB_82bb8d18;
        }
        if (((((*(unsigned int *)(iVar14 + 0xe4) >> 5 & 1) == 0) ||
             ((*(unsigned int *)(iVar14 + 0xe4) >> 6 & 1) == 0)) || (*(char *)(puVar18 + 0xe) == '\0')) &&
           (*(int *)(iVar16 + 0x3c) <= iVar11)) goto LAB_82bb8d74;
        if (*(int *)(iVar16 + 0x1c) < param_1[7]) {
          puVar12 = (unsigned int *)puVar18[2];
          goto LAB_82bb8ed4;
        }
      }
      puVar12 = (unsigned int *)puVar18[2];
      fn_82BBFDD0(puVar18);
      fn_82BBFE50(param_1 + 0x15,puVar18);
    }
    else {
      fn_82BBFDD0(puVar18);
      fn_82BB8248(param_1,puVar18);
      fn_82BB5308(param_1[3],param_1[0x1e]);
      puVar12 = (unsigned int *)param_1[0xb];
    }
LAB_82bb8ed4:
    puVar18 = puVar12;
    iVar9 = puVar12[2];
  }
  cVar19 = fn_82BBFD48(param_1 + 9);
  if ((cVar19 == '\0') && (iVar9 = fn_82BB5CB0(param_1,acStack_90), iVar9 != 0)) {
    fn_82BBFDD0(iVar9);
    iVar16 = *(int *)(iVar9 + 0x28);
    if ((*(int *)(iVar9 + 0x3c) < 1) || ((*(unsigned int *)(iVar16 + 0xe4) >> 9 & 1) == 0)) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e06fc,0xffffffff820e0168,0x61e);
    }
    uVar7 = fn_82BA0450(iVar16);
    uVar8 = 0x66;
    if (acStack_90[0] == '\0') {
      uVar8 = 0x31;
    }
    piVar10 = (int *)fn_82BC24F0(uVar8,*param_1);
    piVar10[0x14] = 0;
    piVar10[0xe] = piVar10[0x38];
    fn_82BC2438(piVar10,iVar16);
    if (acStack_90[0] == '\0') {
      lVar23 = 0;
      do {
        iVar14 = (**(int (***)())(*piVar10 + 0x50))(piVar10,0,lVar23);
        if (iVar14 == 1) {
          uVar20 = lVar23 + 1;
          (**(int (***)())(*piVar10 + 0x58))
                    (piVar10,1,lVar23,
                     uVar20 + ((__int64)((int)uVar20 >> 2) +
                               (unsigned __int64)((int)uVar20 < 0 && (uVar20 & 3) != 0) & 0x3fffffff) * -4)
          ;
        }
        lVar23 = lVar23 + 1;
      } while ((int)lVar23 < 4);
    }
    else {
      iVar11 = (**(int (***)())(*piVar10 + 0x50))(piVar10,0,0);
      iVar14 = lbl_820E0044;
      if ((((iVar11 == 0) ||
           (iVar11 = (**(int (***)())(*piVar10 + 0x50))(piVar10,0,1), iVar14 = lbl_820E0048,
           iVar11 == 0)) ||
          (iVar11 = (**(int (***)())(*piVar10 + 0x50))(piVar10,0,2), iVar14 = lbl_820E004C, iVar11 == 0
          )) || (iVar11 = (**(int (***)())(*piVar10 + 0x50))(piVar10,0,3), iVar14 = lbl_820E0050,
                iVar11 == 0)) {
        piVar10[0x21] = iVar14;
      }
    }
    fn_82BA05E8(piVar10,1,uVar7);
    iVar14 = *(int *)(iVar16 + 0x14);
    if ((*(unsigned int *)(iVar16 + 0xe4) >> 9 & 1) == 0) {
      *(int *)(iVar16 + 0x14) = iVar14 + 1;
      *(int **)((iVar14 + 0x3b) * 4 + iVar16) = piVar10;
      *(unsigned int *)(iVar16 + 0xe4) = *(unsigned int *)(iVar16 + 0xe4) | 0x200;
    }
    else {
      *(int **)((iVar14 + 0x3a) * 4 + iVar16) = piVar10;
    }
    iVar14 = *(int *)(param_1[6] + 4);
    piVar10[0xdf] = iVar14;
    uVar3 = *(unsigned int *)(*param_1 + 0x5b0);
    puVar12 = (unsigned int *)fn_82B7BD28(uVar3,0x48);
    puVar18 = puVar12 + 1;
    *puVar12 = uVar3;
    if (puVar18 == (unsigned int *)0x0) {
      puVar18 = (unsigned int *)0x0;
    }
    else {
      puVar12[0xc] = iVar14;
      puVar12[0xb] = piVar10;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[8] = 0xffffffff;
      uVar3 = lbl_821AAD20;
      *puVar18 = &lbl_820E0214;
      puVar12[5] = uVar3;
      puVar12[9] = 0;
      puVar12[10] = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      *(unsigned char *)(puVar12 + 0xf) = 0;
      puVar12[0x10] = 0;
      puVar12[0x11] = 0;
      puVar12[4] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
    }
    piVar10[0x39] = piVar10[0x39] & 0xffffffdf;
    *(unsigned char *)(puVar18 + 0xe) = *(unsigned char *)(iVar9 + 0x38);
    uVar3 = *(unsigned int *)(*param_1 + 0x5b0);
    puVar12 = (unsigned int *)fn_82B7BD28(uVar3,0x14);
    puVar22 = puVar12 + 1;
    *puVar12 = uVar3;
    if (puVar22 == (unsigned int *)0x0) {
      puVar22 = (unsigned int *)0x0;
    }
    else {
      fn_82BA03B8(puVar22,*(unsigned int *)(*param_1 + 0x5b0));
    }
    puVar18[0xd] = puVar22;
    uVar3 = *(unsigned int *)(*param_1 + 0x5b0);
    puVar12 = (unsigned int *)fn_82B7BD28(uVar3,0x14);
    puVar22 = puVar12 + 1;
    *puVar12 = uVar3;
    if (puVar22 == (unsigned int *)0x0) {
      puVar22 = (unsigned int *)0x0;
    }
    else {
      fn_82BA03B8(puVar22,*(unsigned int *)(*param_1 + 0x5b0));
    }
    puVar18[0xc] = puVar22;
    puVar18[7] = 0xffffffff;
    puVar18[9] = 0;
    puVar18[8] = param_1[7];
    puVar12 = (unsigned int *)fn_82BC0088(param_1[6],*(unsigned int *)(param_1[6] + 4));
    *puVar12 = puVar18;
    uVar20 = 0;
    iVar14 = *(int *)(*(int *)(iVar9 + 0x34) + 4);
    if (0 < iVar14) {
      iVar11 = 0;
      do {
        iVar21 = *(int *)(iVar9 + 0x34);
        if ((uVar20 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar21 + 4)) {
          piVar13 = (int *)(*(int *)(iVar21 + 8) + iVar11);
        }
        else {
          piVar13 = (int *)fn_82BC0088(iVar21,uVar20);
        }
        piVar13 = (int *)*piVar13;
        iVar21 = *piVar13;
        if (((unsigned __int64)*(unsigned int *)(iVar21 + 0x28) == (uVar7 & 0xffffffff)) && (piVar13[2] == 0)) {
          piVar13[1] = (int)puVar18;
          iVar14 = fn_82BD3338(uVar7,piVar10,0,1,0);
          piVar13[3] = iVar14;
          piVar15 = (int *)fn_82BC0088(puVar18[0xd],*(unsigned int *)(puVar18[0xd] + 4));
          *piVar15 = (int)piVar13;
          if (param_1[7] < *(int *)(iVar21 + 0x1c) + piVar13[3]) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e06cc,0xffffffff820e0168,0x667);
          }
          uVar3 = *(unsigned int *)(*param_1 + 0x5b0);
          puVar12 = (unsigned int *)fn_82B7BD28(uVar3,0x18);
          puVar22 = puVar12 + 1;
          *puVar12 = uVar3;
          *puVar22 = puVar18;
          puVar12[2] = iVar9;
          puVar12[3] = 0;
          iVar16 = fn_82BD3338(piVar10,iVar16,0,*(unsigned int *)(iVar16 + 0x14),0);
          puVar12[4] = iVar16;
          if (iVar16 != 0) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e06b8,0xffffffff820e0168,0x66f);
          }
          puVar17 = (unsigned int *)fn_82BC0088(puVar18[0xc],*(unsigned int *)(puVar18[0xc] + 4));
          *puVar17 = puVar22;
          iVar16 = *(int *)(iVar9 + 0x34);
          if ((uVar20 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar16 + 4)) {
            puVar17 = (unsigned int *)(*(int *)(iVar16 + 8) + (int)uVar20 * 4);
          }
          else {
            puVar17 = (unsigned int *)fn_82BC0088(iVar16,uVar20);
          }
          *puVar17 = puVar22;
          puVar18[0xf] = puVar18[0xf] + 1;
          *(int *)(iVar9 + 0x20) = puVar12[4] + param_1[7];
          *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) + 1;
          break;
        }
        uVar20 = uVar20 + 1;
        iVar11 = iVar11 + 4;
      } while ((int)uVar20 < iVar14);
    }
    param_1[0x22] = param_1[0x22] + 1;
    fn_82BD3128(param_1[2],piVar10);
  }
  else {
    puVar18 = (unsigned int *)0x0;
  }
  return puVar18;
}

