extern int fn_8268E9E8();
extern int fn_8270AED0();
extern int fn_82F691F0();
extern unsigned int lbl_8200E1B0;


unsigned __int64 fn_8270B220(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned short uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  
  if ((param_3 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[4]) {
    param_3 = (unsigned __int64)(unsigned int)param_1[4];
  }
  if ((unsigned int *)param_1[0xb] == param_1 + 9) {
    uVar9 = (unsigned __int64)(unsigned int)param_1[2];
  }
  else {
    uVar9 = 0;
  }
  uVar11 = (unsigned __int64)(unsigned int)param_1[0x14];
  uVar10 = param_3;
  if ((param_3 & 0xffffffff) < uVar11) {
    uVar10 = uVar11;
  }
  uVar6 = (unsigned __int64)(unsigned int)param_1[5];
  if (uVar6 < (uVar10 & 0xffffffff)) {
    uVar10 = uVar6;
  }
  uVar7 = (unsigned __int64)(unsigned int)param_1[1];
  uVar6 = -(unsigned __int64)(uVar6 < param_3) & param_3;
  uVar5 = -(unsigned __int64)(uVar10 < uVar11) & uVar11;
  trapWord(6,uVar7,0);
  uVar6 = ((__int64)
           (int)((((((-(unsigned __int64)(uVar5 < uVar6) & uVar6) + uVar9 + param_2 + param_3) - 1 &
                   ~(param_3 - 1)) + uVar7) - 1 & 0xffffffff) / uVar7) * (__int64)(int)param_1[1] +
           uVar5 + uVar11) - 1 & ~(uVar11 - 1);
  lVar3 = (**(int (***)())(*(int *)*param_1 + 4))((int *)*param_1,uVar6,uVar10);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = (int)uVar6;
    uVar6 = (lVar3 + uVar11) - 1 & ~(uVar11 - 1);
    if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar6,0,uVar9);
    }
    iVar1 = param_1[0xb];
    *(unsigned int *)(*(int *)(iVar1 + 4) + 8) = *(unsigned int *)(iVar1 + 8);
    *(unsigned int *)(*(int *)(iVar1 + 8) + 4) = *(unsigned int *)(iVar1 + 4);
    *(int *)(*(int *)(iVar1 + 0xc) + 8) = *(int *)(*(int *)(iVar1 + 0xc) + 8) + 1;
    *(int *)(iVar1 + 0x10) = (int)uVar6;
    *(unsigned int *)(iVar1 + 0x14) = ((int)lVar3 + iVar2 & (unsigned int)~(uVar11 - 1)) - (int)uVar6;
    *(unsigned int *)(iVar1 + 0x18) = 0;
    if ((uVar10 & 0xffff0000) == 0) {
      if ((uVar10 & 0xff00) == 0) {
        uVar8 = (unsigned short)(unsigned char)(&lbl_8200E1B0)[(unsigned int)uVar10 & 0xff];
      }
      else {
        uVar8 = (unsigned char)(&lbl_8200E1B0)[(unsigned int)uVar10 >> 8 & 0xff] + 8;
      }
    }
    else if ((uVar10 & 0xff000000) == 0) {
      uVar8 = (unsigned char)(&lbl_8200E1B0)[(unsigned short)(uVar10 >> 0x10) & 0xff] + 0x10;
    }
    else {
      uVar8 = (unsigned char)(&lbl_8200E1B0)[(unsigned char)(uVar10 >> 0x18)] + 0x18;
    }
    *(short *)(iVar1 + 0x1e) = (short)uVar6 - (short)lVar3;
    *(unsigned short *)(iVar1 + 0x1c) = uVar8 & 0xff;
    fn_8270AED0(param_1 + 0x11,iVar1);
    fn_8268E9E8(param_1 + 0x13,iVar1);
    uVar4 = 1;
    param_1[0x12] = iVar2 + param_1[0x12];
  }
  return uVar4;
}

