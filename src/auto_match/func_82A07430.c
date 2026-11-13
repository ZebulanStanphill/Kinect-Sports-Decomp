typedef unsigned char bool;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern float lbl_8207F394;


__int64 fn_82A07430(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  int in_r0;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  int iVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  struct { float first; float second; } stack_pair_70;

  float fStack_68;
  struct { float first; float second; } stack_pair_60;

  float fStack_58;

  puVar8 = (unsigned int *)((int)&stack_pair_70.first + in_r0 & 0xfffffff0);
  *puVar8 = in_register_00010010;
  puVar8[1] = in_register_00010014;
  puVar8[2] = in_register_00010018;
  puVar8[3] = in_vr1;
  puVar8 = (unsigned int *)((int)&stack_pair_60.first + in_r0 & 0xfffffff0);
  *puVar8 = in_register_00010020;
  puVar8[1] = in_register_00010024;
  puVar8[2] = in_register_00010028;
  puVar8[3] = in_vr2;
  lVar18 = 0;
  *param_3 = 0;
  uVar2 = (unsigned int)((stack_pair_70.first / fStack_68) * lbl_8207F394 + lbl_82015BD0);
  uVar16 = (unsigned __int64)uVar2;
  uVar3 = (unsigned int)(lbl_82015BD8 - (stack_pair_70.second / fStack_68) * lbl_8207F394);
  uVar4 = (unsigned int)((stack_pair_60.first / fStack_58) * lbl_8207F394 + lbl_82015BD0);
  uVar5 = (unsigned int)(lbl_82015BD8 - (stack_pair_60.second / fStack_58) * lbl_8207F394);
  uVar13 = (unsigned __int64)uVar5;
  if ((((((int)uVar2 < 0) || (0x13f < (int)uVar2)) || ((int)uVar3 < 0)) ||
      ((0xef < (int)uVar3 || ((int)uVar4 < 0)))) ||
     ((0x13f < (int)uVar4 || (((int)uVar5 < 0 || (0xef < (int)uVar5)))))) {
    lVar18 = 0;
  }
  else {
    uVar6 = (int)(uVar4 - uVar2) >> 0x1f;
    uVar7 = (int)(uVar5 - uVar3) >> 0x1f;
    bVar1 = (int)((uVar5 - uVar3 ^ uVar7) - uVar7) <= (int)((uVar4 - uVar2 ^ uVar6) - uVar6);
    uVar10 = (unsigned __int64)uVar4;
    uVar11 = (unsigned __int64)uVar3;
    if (!bVar1) {
      uVar10 = uVar13;
      uVar13 = (unsigned __int64)uVar4;
      uVar11 = uVar16;
      uVar16 = (unsigned __int64)uVar3;
    }
    uVar21 = uVar10;
    uVar14 = uVar13;
    if ((int)uVar10 < (int)uVar16) {
      uVar21 = uVar16;
      uVar14 = uVar11;
      uVar11 = uVar13;
      uVar16 = uVar10;
    }
    uVar10 = uVar14 - uVar11;
    uVar12 = uVar21 - uVar16;
    uVar13 = (unsigned __int64)((int)uVar10 >> 0x1f);
    lVar20 = (__int64)((int)uVar12 >> 1) + (unsigned __int64)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    uVar19 = 1;
    if ((int)uVar14 <= (int)uVar11) {
      uVar19 = 0xffffffffffffffff;
    }
    uVar14 = 0;
    if ((int)uVar16 < (int)uVar21) {
      lVar9 = (uVar16 & 0x7fffffff) << 1;
      lVar15 = (uVar11 & 0x7fffffff) << 1;
      uVar21 = uVar12;
      do {
        if (bVar1) {
          iVar17 = *(int *)(param_1 + 4) * (int)uVar11 + (int)lVar9;
        }
        else {
          iVar17 = *(int *)(param_1 + 4) * (int)uVar16 + (int)lVar15;
        }
        lVar20 = lVar20 - ((uVar10 ^ uVar13) - uVar13);
        if (lVar20 < 0) {
          uVar11 = uVar19 + uVar11;
          lVar15 = (uVar19 & 0x7fffffff) * 2 + lVar15;
          lVar20 = lVar20 + uVar12;
        }
        if ((*(unsigned short *)(iVar17 + *(int *)(param_1 + 8)) & 7) == 0) {
          lVar18 = lVar18 + 1;
        }
        uVar16 = uVar16 + 1;
        lVar9 = lVar9 + 2;
        uVar21 = uVar21 - 1;
        uVar14 = uVar12;
      } while (uVar21 != 0);
    }
    *param_3 = (int)uVar14;
  }
  return lVar18;
}
