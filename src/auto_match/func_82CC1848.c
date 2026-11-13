extern int fn_82F65D50();
extern int fn_82F68CC0();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82110F68;
extern unsigned int uStack_e0;


void fn_82CC1848(unsigned __int64 param_1,int param_2,__int64 param_3,__int64 param_4,__int64 param_5
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
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  unsigned int uStack_e0;
  
  lVar2 = fn_82F6A53C();
  dVar15 = (double)(__int64)in_stack_00000074;
  dVar20 = (double)(__int64)in_stack_0000006c;
  iVar3 = (int)lVar2;
  iVar1 = iVar3 >> 1;
  uVar12 = 0;
  if (0 < param_2) {
    uVar5 = (unsigned __int64)in_stack_00000054;
    uVar10 = (unsigned __int64)in_stack_0000005c;
    lVar6 = param_6 - uVar5;
    uStack_e0 = in_stack_0000006c >> 0x1f;
    uVar7 = (unsigned __int64)uStack_e0;
    uVar9 = (unsigned __int64)uStack_e0;
    dVar16 = -dVar20;
    lVar11 = 0;
    dVar17 = lbl_82005710;
    dVar18 = lbl_82110F68;
    dVar19 = lbl_82005730;
    do {
      dVar21 = dVar15 - (double)(__int64)(int)uVar12;
      if (dVar16 <= dVar21) {
        if (dVar21 <= dVar20) {
          dVar14 = (double)fn_82F65D50(dVar21 / dVar20);
          uVar7 = -(unsigned __int64)(unsigned int)(int)((dVar14 * dVar20 - dVar21) + dVar19);
          uVar9 = -(unsigned __int64)(unsigned int)(int)(((dVar18 - dVar14) * dVar20 - dVar21) + dVar19);
          if ((__int64)(uVar9 + uVar12) < 0) {
            if ((__int64)(uVar7 + uVar12) < 0) goto LAB_82cc1924;
            if (dVar21 <= dVar17) goto LAB_82cc190c;
            iVar8 = 1;
            lVar4 = (__int64)(int)uVar7 * (__int64)iVar3 + lVar11 + param_3;
          }
          else {
            iVar8 = 1;
            lVar4 = (__int64)(int)uVar9 * (__int64)iVar3 + lVar11 + param_3;
          }
        }
        else {
LAB_82cc1924:
          iVar8 = 2;
          lVar4 = lVar6 + uVar5;
        }
      }
      else {
LAB_82cc190c:
        iVar8 = 0;
        lVar4 = lVar6 + (param_3 - param_6) + uVar5;
      }
      fn_82F68CC0(uVar5,lVar4,lVar2);
      if ((uVar12 & 1) == 0) {
        lVar4 = (__int64)((int)uVar12 >> 1) * (__int64)iVar1;
        if (iVar8 == 1) {
          if ((__int64)(uVar9 + uVar12) < 0) {
            iVar8 = (int)uVar7;
          }
          else {
            iVar8 = (int)uVar9;
          }
          lVar13 = (__int64)(iVar8 >> 1) * (__int64)iVar1 + lVar4;
          fn_82F68CC0(lVar4 + uVar10,lVar13 + param_4,iVar1);
          lVar13 = lVar13 + param_5;
        }
        else if (iVar8 == 0) {
          fn_82F68CC0(lVar4 + uVar10,lVar4 + param_4,iVar1);
          lVar13 = lVar4 + param_5;
        }
        else {
          if (iVar8 != 2) goto code_r0x82cc1a50;
          fn_82F68CC0(lVar4 + uVar10,lVar4 + param_7,iVar1);
          lVar13 = lVar4 + (unsigned __int64)param_8;
        }
        fn_82F68CC0(lVar4 + (unsigned __int64)in_stack_00000064,lVar13,iVar1);
      }
code_r0x82cc1a50:
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + lVar2;
      uVar5 = uVar5 + lVar2;
    } while ((int)uVar12 < param_2);
  }
  fn_82F6A588();
  return;
}

