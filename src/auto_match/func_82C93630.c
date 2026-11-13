typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_4c;
extern int fn_82C83C40();
extern int fn_82CB9530();
extern unsigned int uStack_50;


bool fn_82C93630(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned __int64 param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  bool bVar7;
  unsigned int uVar8;
  int iVar9;
  __int64 lVar10;
  unsigned int uVar11;
  short *psVar12;
  unsigned int uStack_50;
  unsigned int auStack_4c [11];
  
  iVar2 = *(int *)(param_1 + 0x6f4);
  iVar3 = *(int *)(param_1 + 0x6f0);
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff;
  iVar9 = (int)uVar5 * 2;
  uVar8 = (unsigned int)param_3;
  lVar10 = (__int64)iVar9 * (__int64)(int)uVar8 + param_2;
  iVar6 = (int)lVar10 * 2;
  psVar12 = (short *)(iVar6 + iVar2);
  *(unsigned short *)(iVar6 + iVar2) = *(unsigned short *)(iVar6 + iVar2);
  if (((int)param_5 == 0) || (((param_2 | param_3) & 1) == 0)) {
    uVar4 = *param_4;
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 3) == 0) {
        uVar11 = 0;
        if (((param_3 & 1) == 0) &&
           ((uVar8 == 0 ||
            (uVar11 = 0, *(int *)(((int)uVar8 >> 1) * 4 + *(int *)(param_1 + 0x55d0)) != 0)))) {
          uVar11 = 1;
        }
        if (*(int *)(param_1 + 0x50cc) == 0) {
          fn_82CB9530(param_1);
        }
        else {
          uStack_50 = (unsigned int)param_2;
          auStack_4c[0] = uVar8;
          fn_82C83C40(param_1,&uStack_50,auStack_4c,*(unsigned int *)(param_1 + 0x6f0),
                        *(unsigned int *)(param_1 + 0x6f4),param_5,uVar11);
        }
      }
      else {
        if ((uVar4 & 3) == 1) {
          uStack_50 = ((((unsigned __int64)(uStack_50)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)(*(short *)(iVar6 + iVar3 + -2))) & ((unsigned __int64)0xFFFF)) << 16));
          sVar1 = psVar12[-1];
        }
        else {
          iVar9 = (int)((lVar10 + uVar5 * -2 & 0xffffffff) << 1);
          uStack_50 = ((((unsigned __int64)(uStack_50)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)(*(short *)(iVar9 + iVar3))) & ((unsigned __int64)0xFFFF)) << 16));
          sVar1 = *(short *)(iVar9 + iVar2);
        }
        auStack_4c[0] = (unsigned int)sVar1;
        if ((((unsigned __int64)(uStack_50) >> 16) & 0xFFFF) == 0x4000) {
          uStack_50 = ((((unsigned __int64)(uStack_50)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)(0)) & ((unsigned __int64)0xFFFF)) << 16));
          auStack_4c[0] = 0;
        }
      }
      if ((*(int *)(param_1 + 0xfb0) == 2) || (*(int *)(param_1 + 0xfb0) == 3)) {
        *(unsigned short *)param_4 = (unsigned short)((int)*param_4 >> 0xf) & 0xfffe;
        *param_4 = (*param_4 & 0x7ff0) << 1 | *param_4 & 0xffff000f;
      }
      sVar1 = (short)*(unsigned int *)(param_1 + 0x1a4);
      *(unsigned short *)(iVar6 + iVar3) =
           (*(short *)param_4 + sVar1 + (((unsigned __int64)(uStack_50) >> 16) & 0xFFFF) & (unsigned short)*(unsigned int *)(param_1 + 0x1ac))
           - sVar1;
      sVar1 = (short)*(unsigned int *)(param_1 + 0x1a8);
      bVar7 = false;
      *psVar12 = (((short)*param_4 >> 4) + sVar1 + (short)auStack_4c[0] &
                 (unsigned short)*(unsigned int *)(param_1 + 0x1b0)) - sVar1;
    }
    else {
      *(unsigned short *)(iVar6 + iVar3) = 0x4000;
      bVar7 = true;
    }
  }
  else {
    iVar9 = (int)(((__int64)(int)(uVar8 & 0xfffe) * (__int64)iVar9 + (param_2 & 0xfffe) &
                  0xffffffff) << 1);
    *(unsigned short *)(iVar6 + iVar3) = *(unsigned short *)(iVar9 + iVar3);
    *psVar12 = *(short *)(iVar9 + iVar2);
    bVar7 = *(short *)(iVar6 + iVar3) == 0x4000;
  }
  return bVar7;
}

