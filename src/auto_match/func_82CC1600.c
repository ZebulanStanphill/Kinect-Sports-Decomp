extern int fn_82F65D50();
extern int fn_82F68CC0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int iStack_e0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;


void fn_82CC1600(unsigned __int64 param_1,int param_2,__int64 param_3,__int64 param_4,__int64 param_5
                  ,__int64 param_6,__int64 param_7,unsigned int param_8)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar8;
  __int64 lVar9;
  unsigned int uVar10;
  int iVar12;
  __int64 lVar11;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  int iStack_e0;
  
  lVar2 = fn_82F6A53C();
  dVar19 = (double)(__int64)in_stack_0000006c;
  iVar3 = (int)lVar2;
  iVar1 = iVar3 >> 1;
  uVar10 = 0;
  dVar14 = (double)(__int64)(param_2 + -1) - (double)(__int64)in_stack_00000074;
  if (0 < param_2) {
    uVar5 = (unsigned __int64)in_stack_00000054;
    uVar7 = (unsigned __int64)in_stack_0000005c;
    lVar6 = param_6 - uVar5;
    iStack_e0 = in_stack_00000074 >> 0x1f;
    dVar15 = -dVar19;
    lVar9 = 0;
    dVar16 = lbl_82005710;
    dVar17 = lbl_82110F68;
    dVar18 = lbl_82005730;
    iVar8 = iStack_e0;
    do {
      dVar20 = (double)(__int64)(int)uVar10 - dVar14;
      if (dVar15 <= dVar20) {
        if (dVar20 <= dVar19) {
          dVar13 = (double)fn_82F65D50(dVar20 / dVar19);
          iStack_e0 = (int)((dVar13 * dVar19 - dVar20) + dVar18);
          iVar8 = (int)(((dVar17 - dVar13) * dVar19 - dVar20) + dVar18);
          if ((int)(iVar8 + uVar10) < param_2) {
            iVar12 = 1;
            lVar4 = (__int64)iVar8 * (__int64)iVar3 + lVar9 + param_3;
          }
          else {
            if (param_2 <= (int)(iStack_e0 + uVar10)) goto LAB_82cc16f4;
            if (dVar20 <= dVar16) goto LAB_82cc16dc;
            iVar12 = 1;
            lVar4 = (__int64)iStack_e0 * (__int64)iVar3 + lVar9 + param_3;
          }
        }
        else {
LAB_82cc16f4:
          iVar12 = 2;
          lVar4 = lVar6 + uVar5;
        }
      }
      else {
LAB_82cc16dc:
        iVar12 = 0;
        lVar4 = lVar6 + (param_3 - param_6) + uVar5;
      }
      fn_82F68CC0(uVar5,lVar4,lVar2);
      if ((uVar10 & 1) == 0) {
        lVar4 = (__int64)((int)uVar10 >> 1) * (__int64)iVar1;
        if (iVar12 == 1) {
          iVar12 = iStack_e0;
          if ((int)(iVar8 + uVar10) < param_2) {
            iVar12 = iVar8;
          }
          lVar11 = (__int64)(iVar12 >> 1) * (__int64)iVar1 + lVar4;
          fn_82F68CC0(lVar4 + uVar7,lVar11 + param_4,iVar1);
          lVar11 = lVar11 + param_5;
        }
        else if (iVar12 == 0) {
          fn_82F68CC0(lVar4 + uVar7,lVar4 + param_4,iVar1);
          lVar11 = lVar4 + param_5;
        }
        else {
          if (iVar12 != 2) goto code_r0x82cc1824;
          fn_82F68CC0(lVar4 + uVar7,lVar4 + param_7,iVar1);
          lVar11 = lVar4 + (unsigned __int64)param_8;
        }
        fn_82F68CC0(lVar4 + (unsigned __int64)in_stack_00000064,lVar11,iVar1);
      }
code_r0x82cc1824:
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + lVar2;
      uVar5 = uVar5 + lVar2;
    } while ((int)uVar10 < param_2);
  }
  fn_82F6A588();
  return;
}

