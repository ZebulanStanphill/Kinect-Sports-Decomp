extern int fn_82F29E38();
extern unsigned int iStack00000024;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack0000001c;


unsigned __int64
fn_82F18188(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned __int64 param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  short sVar13;
  unsigned int uVar14;
  short sVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned int uStack0000001c;
  int iStack00000024;
  
  uVar10 = *param_4;
  uStack0000001c = (unsigned int)param_2;
  uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff;
  iStack00000024 = (int)param_3;
  *param_4 = uVar10 & 0xfffffff4;
  uVar17 = (__int64)((int)uVar8 * 2) * (__int64)iStack00000024 + param_2;
  iVar6 = (int)((uVar17 & 0x7fffffff) << 1);
  if (*(short *)(*(int *)(param_1 + 0x9f0) + iVar6) == 0x4000) {
    uVar9 = 1;
    *param_4 = uVar10 & 0xffff0000 | 4;
    *(unsigned short *)param_4 = 0;
  }
  else {
    uVar10 = fn_82F29E38(param_1,param_2,param_3,param_5,&stack0x0000001c,&stack0x00000024);
    *param_4 = uVar10 & 3 | *param_4 & 0xfffffffc;
    if ((uVar10 & 3) == 0) {
      sVar15 = (short)uStack0000001c;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x9f0);
      iVar2 = *(int *)(param_1 + 0x9f4);
      sVar15 = *(short *)(iVar1 + iVar6 + -2);
      iVar7 = (int)((uVar17 + uVar8 * -2 & 0x7fffffff) << 1);
      uVar12 = (int)*(short *)(iVar2 + iVar7) - (int)*(short *)(iVar2 + iVar6);
      uVar16 = (-(unsigned int)(*(short *)(iVar7 + iVar1) != 0x4000) & (int)*(short *)(iVar7 + iVar1)) -
               (int)*(short *)(iVar1 + iVar6);
      uVar14 = (int)*(short *)(iVar2 + iVar6 + -2) - (int)*(short *)(iVar2 + iVar6);
      uVar11 = (-(unsigned int)(sVar15 != 0x4000) & (int)sVar15) - (int)*(short *)(iVar1 + iVar6);
      uVar10 = (int)uVar12 >> 0x1f;
      uVar3 = (int)uVar16 >> 0x1f;
      uVar4 = (int)uVar14 >> 0x1f;
      uVar5 = (int)uVar11 >> 0x1f;
      if ((int)(((uVar14 ^ uVar4) - uVar4) + ((uVar11 ^ uVar5) - uVar5)) <
          (int)(((uVar12 ^ uVar10) - uVar10) + ((uVar16 ^ uVar3) - uVar3))) {
        *param_4 = *param_4 & 0xfffffffc | 1;
        sVar15 = *(short *)(*(int *)(param_1 + 0x9f0) + iVar6 + -2);
        sVar13 = *(short *)(*(int *)(param_1 + 0x9f4) + iVar6 + -2);
      }
      else {
        *param_4 = *param_4 & 0xfffffffc | 2;
        sVar15 = *(short *)(*(int *)(param_1 + 0x9f0) + iVar7);
        sVar13 = *(short *)(*(int *)(param_1 + 0x9f4) + iVar7);
      }
      iStack00000024 = (int)sVar13;
      if (sVar15 == 0x4000) {
        sVar15 = 0;
        iStack00000024 = 0;
      }
    }
    sVar13 = (short)*(unsigned int *)(param_1 + 0xa2c);
    *(unsigned short *)param_4 =
         ((*(short *)(*(int *)(param_1 + 0x9f0) + iVar6) - sVar15) + sVar13 &
         (unsigned short)*(unsigned int *)(param_1 + 0xa34)) - sVar13;
    uVar10 = *param_4;
    uVar3 = ((*(short *)(*(int *)(param_1 + 0x9f4) + iVar6) - iStack00000024) +
             *(unsigned int *)(param_1 + 0xa30) & 0xfffffff & *(unsigned int *)(param_1 + 0xa38) & 0xfffffff) * 0x10
            + (*(unsigned int *)(param_1 + 0xa30) & 0xfffffff) * -0x10 & 0xfff0;
    *param_4 = uVar3 | uVar10 & 0xffff000b;
    if (((uVar10 & 0xffff0000) != 0) || (uVar9 = 0, uVar3 != 0)) {
      uVar9 = 1;
    }
    if ((*(int *)(param_1 + 0x89c) == 2) || (*(int *)(param_1 + 0x89c) == 3)) {
      *(short *)param_4 = (short)((int)*param_4 >> 0x11);
      *param_4 = *param_4 & 0xffff000f | (int)*param_4 >> 1 & 0xfff0U;
    }
  }
  return uVar9;
}

