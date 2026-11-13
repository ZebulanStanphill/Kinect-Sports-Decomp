#define _uStack00000010 ((*(unsigned __int64*)&uStack00000010))
extern int fn_82AC3FB0();
extern unsigned int uStack00000010;
extern unsigned int uStack00000014;


unsigned __int64
fn_82AC4188(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned int uStack00000010;
  unsigned int uStack00000014;
  
  uStack00000010 = (unsigned int)(param_1 >> 0x20);
  uVar4 = uStack00000010;
  uVar10 = (unsigned __int64)(uStack00000010 >> 0xc) & 7;
  if (uVar10 < 7) {
    uVar11 = 0;
    if ((uStack00000010 >> 0xc & 7) != 0) {
      uStack00000014 = (unsigned int)param_1;
      uVar5 = uStack00000014;
      uVar1 = (unsigned __int64)uStack00000010;
      uVar12 = 0;
      _uStack00000010 = param_1;
      do {
        uVar8 = (uVar1 & 0xfff) + uVar11;
        if ((unsigned __int64)*param_3 <= (uVar8 & 0x7fffffff) << 1) goto LAB_82ac41b8;
        uVar2 = uVar4 >> 0x10;
        uVar3 = uVar5 >> 0xc & 0xf;
        if ((uVar3 == 3) || (uVar3 == 4)) {
          uVar9 = 1;
        }
        else if ((uVar3 == 0xd) || (uVar3 == 0xe)) {
          uVar9 = 0;
        }
        else {
          uVar9 = (~(param_1 & 0xffffffff) & 0xffffffff) >> 9 & 1;
        }
        iVar7 = fn_82AC3FB0(param_4,uVar8,
                              (((uVar5 & 3) << 4 | uVar4 >> 0x1c) & 1 << ((unsigned int)uVar11 & 0x3f)) != 0
                              ,(2 << (uVar12 & 0x3f) & uVar2 & 0xfff) != 0,
                              (1 << (uVar12 & 0x3f) & uVar2 & 0xfff) != 0,uVar9,param_3,param_5);
        if (iVar7 < 0) goto LAB_82ac41b8;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 + 2;
      } while ((uVar11 & 0xffffffff) < uVar10);
    }
    if ((param_1 & 0x800000000000) != 0) {
      param_2[*param_2 * 4 + 3] = param_2[*param_2 * 4 + 3] & 0xffffefff;
    }
    uVar6 = 0;
  }
  else {
LAB_82ac41b8:
    uVar6 = 0xffffffff80004005;
  }
  return uVar6;
}

