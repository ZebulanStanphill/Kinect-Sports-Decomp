extern int fn_8263AC58();
extern int fn_8263B230();
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_821CBFB1;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;


unsigned __int64
fn_82A94B08(int param_1,int param_2,unsigned int param_3,unsigned __int64 param_4,int param_5,unsigned __int64 param_6,
             int param_7,unsigned int *param_8)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  
  uVar11 = (unsigned __int64)(param_7 == 0) ^ 1;
  iVar3 = (int)(uVar11 << 1);
  lVar9 = (uVar11 - LZCOUNT((param_1 - iVar3) + -1)) + 0x20;
  lVar7 = (uVar11 - LZCOUNT((param_2 - iVar3) + -1)) + 0x20;
  if ((int)lVar7 <= (int)lVar9) {
    lVar9 = lVar7;
  }
  uVar10 = lVar9 - 4;
  uVar10 = (((uVar10 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar10 == 0) & uVar10;
  if ((param_4 & 0xffffffff) < (uVar10 & 0xffffffff)) {
    uStack_64 = 0;
    uVar6 = 0;
    param_8[1] = 0;
    param_8[2] = 0;
  }
  else {
    if (param_3 < 2) {
      lVar9 = 0;
    }
    else {
      lVar9 = (uVar11 - LZCOUNT((param_3 - iVar3) + -1)) + 0x20;
    }
    uVar5 = (unsigned int)(lVar9 - uVar10);
    iVar2 = 1 << ((((int)uVar11 - (int)LZCOUNT((param_1 - iVar3) + -1)) + 0x20) - (int)uVar10 &
                 0x3fU);
    iVar3 = 1 << ((((int)uVar11 - (int)LZCOUNT((param_2 - iVar3) + -1)) + 0x20) - (int)uVar10 &
                 0x3fU);
    iVar4 = 1 << ((-1 - ((int)uVar5 >> 0x1f)) + (unsigned int)(lVar9 - uVar10 == 0) & uVar5 & 0x3f);
    bVar1 = (&lbl_821CBFB1)[param_5 * 2];
    iStack_70 = iVar2;
    iStack_6c = iVar3;
    iStack_68 = iVar4;
    fn_8263AC58(&iStack_70,&iStack_6c,&iStack_68,bVar1,param_5,1,param_6);
    uVar11 = ((__int64)iStack_70 * (__int64)(int)(unsigned int)bVar1 & 0xffffffffU) >> 3;
    uVar8 = (__int64)(int)uVar11 * (__int64)iStack_6c;
    if (param_3 < 2) {
      uVar8 = uVar8 + 0xfff & 0xfffff000;
    }
    uVar6 = fn_8263B230(param_4 - uVar10,iVar2,iVar3,iVar4,uVar11,uVar8,param_5,&uStack_64);
    param_8[1] = uStack_60;
    param_8[2] = uStack_5c;
  }
  *param_8 = uStack_64;
  return uVar6;
}

