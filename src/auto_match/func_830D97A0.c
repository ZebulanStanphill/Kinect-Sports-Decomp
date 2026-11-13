typedef unsigned char bool;
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern int fn_830D95E8();
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_60;


unsigned int fn_830D97A0(int param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  bool bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  int iVar6;
  unsigned int uVar7;
  short sVar9;
  unsigned int uVar8;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  __int64 lVar13;
  unsigned int uStack_60;
  unsigned int uStack_50;
  unsigned short uStack_4c;
  unsigned short uStack_4a;
  unsigned short uStack_48;
  unsigned short uStack_46;
  
  bVar1 = *param_3 != 0x4000;
  if (bVar1) {
    uStack_50 = *param_3;
  }
  uVar11 = (unsigned __int64)bVar1;
  if (param_3[1] != 0x4000) {
    uVar11 = uVar11 + 1;
    (&uStack_50)[bVar1] = param_3[1];
  }
  if (param_3[2] != 0x4000) {
    lVar13 = uVar11 << 2;
    uVar11 = uVar11 + 1;
    *(unsigned int *)((int)&uStack_50 + (int)lVar13) = param_3[2];
  }
  iVar12 = (int)uVar11;
  if (param_3[3] != 0x4000) {
    iVar12 = iVar12 + 1;
    *(unsigned int *)((int)&uStack_50 + (int)(uVar11 << 2)) = param_3[3];
  }
  if (iVar12 == 3) {
    uVar3 = (unsigned short)((unsigned int)((int)(short)uStack_4a - (int)(short)(((unsigned __int64)(uStack_50) >> 16) & 0xFFFF)) >> 0x10);
    uVar2 = (unsigned short)((unsigned int)((int)(short)uStack_4a - (int)(short)uStack_46) >> 0x10) ^ uVar3;
    uVar3 = (unsigned short)((unsigned int)((int)(short)uStack_46 - (int)(short)(((unsigned __int64)(uStack_50) >> 16) & 0xFFFF)) >> 0x10) ^ uVar3;
    uVar5 = (unsigned short)((unsigned int)((int)(short)uStack_4c - (int)(short)(((unsigned __int64)(uStack_50) >> 0) & 0xFFFF)) >> 0x10);
    uVar4 = (unsigned short)((unsigned int)((int)(short)uStack_4c - (int)(short)uStack_48) >> 0x10) ^ uVar5;
    uVar5 = (unsigned short)((unsigned int)((int)(short)uStack_48 - (int)(short)(((unsigned __int64)(uStack_50) >> 0) & 0xFFFF)) >> 0x10) ^ uVar5;
    uStack_60 = CONCAT22(uStack_48 & ~((short)(uVar4 | uVar5) >> 0xf) |
                         (short)uVar5 >> 0xf & (((unsigned __int64)(uStack_50) >> 0) & 0xFFFF) | (short)uVar4 >> 0xf & uStack_4c,
                         uStack_46 & ~((short)(uVar2 | uVar3) >> 0xf) |
                         (short)uVar3 >> 0xf & (((unsigned __int64)(uStack_50) >> 16) & 0xFFFF) | (short)uVar2 >> 0xf & uStack_4a);
  }
  else if (iVar12 == 2) {
    uVar10 = (int)(short)(((unsigned __int64)(uStack_50) >> 16) & 0xFFFF) + (int)(short)uStack_4a;
    uVar7 = (int)(short)(((unsigned __int64)(uStack_50) >> 0) & 0xFFFF) + (int)(short)uStack_4c;
    uStack_60 = CONCAT22((short)((int)uVar7 >> 1) + (unsigned short)((int)uVar7 < 0 && (uVar7 & 1) != 0),
                         (short)((int)uVar10 >> 1) + (unsigned short)((int)uVar10 < 0 && (uVar10 & 1) != 0))
    ;
  }
  else {
    uStack_60 = 0x4000;
  }
  lVar13 = 4;
  do {
    if ((param_4 & 0x20) == 0) {
      uVar7 = *param_3;
      if (((*(unsigned int *)(param_2 + 0x10) * 0x20 + (uVar7 & 0x8000) * -2 + *(int *)(param_1 + 0x6b0) +
            uVar7 | (*(int *)(param_1 + 0x6b4) + (*(unsigned int *)(param_2 + 0x10) & 0x7ffffff) * -0x20) -
                    uVar7) & 0x80008000) != 0) {
        if (*(int *)(param_1 + 0x490) == 7) {
          uVar7 = fn_830D95E8(param_1,uVar7,param_2);
        }
        else {
          iVar12 = (int)uVar7 >> 0x10;
          sVar9 = (short)uVar7;
          uVar8 = (unsigned int)sVar9;
          uVar7 = (unsigned int)*(unsigned short *)(param_2 + 0x12) * 0x20 + (int)sVar9 & 0xfffffffc;
          iVar6 = (unsigned int)*(unsigned short *)(param_1 + 0x32) * 0x20;
          uVar10 = (unsigned int)*(unsigned short *)(param_2 + 0x10) * 0x20 + iVar12 & 0xfffffffc;
          if ((int)uVar7 < -0x40) {
            uVar8 = ((int)sVar9 - uVar7) - 0x40;
          }
          else if (iVar6 < (int)uVar7) {
            uVar8 = (iVar6 - uVar7) + (int)sVar9;
          }
          if ((int)uVar10 < -0x40) {
            iVar12 = (iVar12 - uVar10) + -0x40;
          }
          else if ((int)((unsigned int)*(unsigned short *)(param_1 + 0x34) << 5) < (int)uVar10) {
            iVar12 = ((unsigned int)*(unsigned short *)(param_1 + 0x34) * 0x20 - uVar10) + iVar12;
          }
          uVar7 = iVar12 << 0x10 | uVar8 & 0xffff;
        }
      }
      *param_3 = uVar7;
    }
    lVar13 = lVar13 + -1;
    param_3 = param_3 + 1;
    param_4 = (param_4 & 0x7fffffff) << 1;
  } while (lVar13 != 0);
  return uStack_60;
}

