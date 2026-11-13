extern int fn_82690258();
extern int fn_826909B0();
extern int fn_82690E00();
extern int fn_8270BA30();
extern unsigned int lbl_8200E1B0;


int fn_8270C010(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar9;
  int iVar13;
  
  uVar1 = *param_1;
  param_1 = param_1 + 2;
  iVar7 = fn_82690E00(param_1,param_2 >> (uVar1 & 0x3f),(unsigned __int64)uVar1,param_3 - 1);
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  else {
    iVar2 = *(int *)(iVar7 + 8);
    iVar13 = iVar2 + 0x20;
    iVar3 = *(int *)(iVar2 + 0x1c);
    iVar8 = fn_82690258(iVar7,param_3 - 1);
    uVar10 = (unsigned int)*(unsigned short *)(iVar7 + 0xc);
    if (0x20 < *(unsigned short *)(iVar7 + 0xc)) {
      uVar10 = *(unsigned int *)(iVar7 + 0x10);
    }
    uVar10 = (((uVar10 << (uVar1 & 0x3f)) - iVar8) - param_2) + iVar7;
    if (iVar8 - iVar7 != 0) {
      uVar5 = (unsigned int)(iVar8 - iVar7) >> (uVar1 & 0x3f);
      iVar6 = (uVar5 << (uVar1 & 0x3f)) + iVar7;
      if (uVar5 < 0x21) {
        *(short *)(iVar6 + -2) = (short)uVar5;
        *(short *)(iVar7 + 0xc) = (short)uVar5;
      }
      else {
        *(unsigned short *)(iVar6 + -2) = 0x21;
        *(unsigned short *)(iVar7 + 0xc) = 0x21;
        *(unsigned int *)(iVar6 + -8) = uVar5;
        *(unsigned int *)(iVar7 + 0x10) = uVar5;
      }
      *(int *)(iVar7 + 8) = iVar2;
      fn_826909B0(param_1,iVar7);
      uVar4 = iVar7 - iVar3 >> (uVar1 & 0x3f);
      uVar12 = uVar4 >> 2 & 0x3ffffffc;
      uVar11 = (uVar5 + uVar4) - 1;
      *(unsigned int *)(uVar12 + iVar13) = *(unsigned int *)(uVar12 + iVar13) & ~(3 << ((uVar4 & 0xf) << 1));
      uVar5 = uVar11 >> 2 & 0x3ffffffc;
      *(unsigned int *)(uVar5 + iVar13) = *(unsigned int *)(uVar5 + iVar13) & ~(3 << (uVar11 * 2 & 0x1e));
    }
    if (uVar10 < 0x10) {
      param_2 = uVar10 + param_2;
    }
    else {
      uVar10 = uVar10 >> (uVar1 & 0x3f);
      iVar6 = iVar8 + param_2;
      iVar7 = (uVar10 << (uVar1 & 0x3f)) + iVar6;
      if (uVar10 < 0x21) {
        *(short *)(iVar7 + -2) = (short)uVar10;
        *(short *)(iVar6 + 0xc) = (short)uVar10;
      }
      else {
        *(unsigned short *)(iVar7 + -2) = 0x21;
        *(unsigned short *)(iVar6 + 0xc) = 0x21;
        *(unsigned int *)(iVar7 + -8) = uVar10;
        *(unsigned int *)(iVar6 + 0x10) = uVar10;
      }
      *(int *)(iVar6 + 8) = iVar2;
      fn_826909B0(param_1);
      uVar5 = (int)((iVar8 - iVar3) + param_2) >> (uVar1 & 0x3f);
      uVar4 = uVar5 >> 2 & 0x3ffffffc;
      uVar12 = (uVar10 + uVar5) - 1;
      *(unsigned int *)(uVar4 + iVar13) = *(unsigned int *)(uVar4 + iVar13) & ~(3 << ((uVar5 & 0xf) << 1));
      uVar10 = uVar12 >> 2 & 0x3ffffffc;
      *(unsigned int *)(uVar10 + iVar13) = *(unsigned int *)(uVar10 + iVar13) & ~(3 << (uVar12 * 2 & 0x1e));
    }
    if ((param_3 & 0xffff0000) == 0) {
      if ((param_3 & 0xff00) == 0) {
        uVar9 = (unsigned __int64)(unsigned char)(&lbl_8200E1B0)[(unsigned int)param_3 & 0xff];
      }
      else {
        uVar9 = (unsigned __int64)(unsigned char)(&lbl_8200E1B0)[(unsigned int)param_3 >> 8 & 0xff] + 8;
      }
    }
    else if ((param_3 & 0xff000000) == 0) {
      uVar9 = (unsigned __int64)(unsigned char)(&lbl_8200E1B0)[(unsigned short)(param_3 >> 0x10) & 0xff] + 0x10;
    }
    else {
      uVar9 = (unsigned __int64)(unsigned char)(&lbl_8200E1B0)[(unsigned char)(param_3 >> 0x18)] + 0x18;
    }
    fn_8270BA30(iVar13,iVar8 - iVar3 >> (uVar1 & 0x3f),param_2 >> (uVar1 & 0x3f),
                  (uVar9 & 0xff) - (unsigned __int64)uVar1);
    *param_4 = iVar2;
  }
  return iVar8;
}

