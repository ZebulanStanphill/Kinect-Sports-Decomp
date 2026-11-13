typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8226D318();
extern int iRam83275b4c;
extern unsigned int lbl_821CBFB0;


void fn_8263C2C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5,unsigned int *param_6,int *param_7,unsigned int *param_8)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  int iVar11;
  
  uVar9 = param_3 & 0x3f;
  if ((uVar9 == 0x16) || (bVar1 = false, uVar9 == 0x17)) {
    bVar1 = true;
  }
  if (uVar9 == 0x36) {
    uVar9 = 7;
  }
  param_6[1] = 1;
  *param_6 = 4;
  param_6[5] = 0xffff0000;
  uVar8 = 0xffffffffffffffff;
  iVar2 = fn_8226D318(param_1,param_2,param_3,param_4);
  iVar11 = (int)param_4;
  if (bVar1) {
    uVar5 = param_2;
    if (0 < iVar11) {
      uVar5 = (param_2 & 0x7fffffff) << 1;
    }
    uVar7 = param_1;
    if (iVar11 == 2) {
      uVar7 = (param_1 & 0x7fffffff) << 1;
    }
    uVar3 = ((int)uVar7 + 0x1fU >> 5) * ((int)uVar5 + 0xfU >> 4) & 0x7fffff;
  }
  else {
    uVar3 = 0;
  }
  if (param_5 == (unsigned int *)0x0) {
    uVar4 = 0;
    uVar5 = 0;
    if (bVar1) {
      uVar8 = -(unsigned __int64)(iRam83275b4c != 0);
    }
  }
  else {
    uVar4 = *param_5;
    uVar8 = (unsigned __int64)param_5[1];
    uVar5 = (unsigned __int64)param_5[2];
  }
  if ((iVar11 == 0) || (iVar11 == 1)) {
    uVar6 = (int)((param_1 + 0x4f & 0xffffffff) / 0x50) * 0x50;
    uVar7 = param_1 + 0x1f & 0xffffffe0;
  }
  else {
    uVar6 = (int)((param_1 + 0x27 & 0xffffffff) / 0x28) * 0x28;
    uVar7 = param_1 + 0xf & 0xfffffff0;
  }
  uVar10 = (unsigned int)param_3;
  param_6[10] = uVar10;
  param_6[9] = (unsigned int)((param_2 - 1 & 0xffffffff) << 3) & 0x3fff8 |
               (unsigned int)((param_1 - 1 & 0xffffffff) << 0x12) | param_6[9] & 7;
  param_6[6] = (unsigned int)(((uVar7 & 0x3fffffff) << 2 | param_4 & 3) << 0x10) | uVar6 & 0x3fff;
  uVar7 = (unsigned __int64)(*(unsigned short *)(&lbl_821CBFB0 + (int)(uVar9 << 1)) >> 8) & 0xf;
  if (bVar1) {
    param_6[7] = (unsigned int)(uVar7 << 0x10) & 0x10000 | uVar4 & 0xfff;
    if ((int)uVar8 == -1) {
      param_6[8] = 0;
    }
    else {
      if ((param_5 == (unsigned int *)0x0) || (param_5[3] == 0)) {
        uVar9 = (uVar9 - 0x16) - ((uVar9 - 0x17) + (unsigned __int64)(uVar9 - 0x16 == 0));
      }
      else {
        uVar9 = (unsigned __int64)param_5[3] - 1;
      }
      param_6[8] = (unsigned int)((uVar9 & 1 | (uVar8 & 0x7ffff) << 0xd) << 4) | 1;
    }
  }
  else {
    if ((*(unsigned short *)(&lbl_821CBFB0 + (int)(uVar9 << 1)) >> 8 & 0xf) == 0) {
      if (((((param_3 & 0x20000) == 0) && ((uVar10 & 0x600) == 0x600)) &&
          ((uVar10 & 0x1800) == 0x1800)) &&
         (((uVar10 & 0x6000) == 0x6000 && ((param_3 & 0x18000) == 0)))) {
        uVar7 = 1;
      }
    }
    param_6[7] = (unsigned int)(((uVar5 & 0x3f) << 4 | uVar7) << 0x10) | uVar4 & 0xfff;
  }
  param_6[0xb] = iVar2 * 0x1400;
  *param_7 = iVar2;
  *param_8 = uVar3;
  return;
}

