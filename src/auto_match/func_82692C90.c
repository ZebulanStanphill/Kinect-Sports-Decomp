extern int fn_82692370();
extern int fn_82692538();
extern int fn_82692988();
extern int fn_8270C3A8();
extern int fn_8270C668();
extern int fn_82F68CC0();
extern unsigned int lbl_82005F20;
extern unsigned int uStack_40;


unsigned __int64 fn_82692C90(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uStack_40;
  
  uStack_40 = 0;
  if ((param_4 & 0xffffffff) < 0x10) {
    param_4 = 0x10;
  }
  uVar1 = *(unsigned short *)(param_2 + 0xc);
  uVar5 = *(unsigned int *)(param_1 + 0x10) + param_4 & ~(unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  if (uVar1 < 8) {
    uStack_40 = uVar1 + 1 << (*(unsigned int *)(param_1 + 0xc) & 0x3f);
    if ((uVar5 & 0xffffffff) <= (unsigned __int64)uStack_40) {
      return param_3;
    }
    uVar3 = *(int *)(&lbl_82005F20 + (unsigned int)uVar1 * 4) + *(unsigned int *)(param_1 + 0xc);
  }
  else {
    if (uVar1 != 10) {
      uVar5 = fn_82692988(param_1,param_2,param_3,uVar5);
      return uVar5;
    }
    uVar2 = fn_8270C3A8(param_1 + 0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      return uVar2;
    }
    uVar3 = fn_8270C668(param_1 + 0x14,param_2,param_3,0);
  }
  uVar2 = fn_82692370(param_1,uVar5,1 << (uVar3 & 0x3f));
  if (uVar2 != 0) {
    uVar4 = (unsigned __int64)uStack_40;
    if ((uVar5 & 0xffffffff) <= (unsigned __int64)uStack_40) {
      uVar4 = uVar5;
    }
    fn_82F68CC0(uVar2,param_3,uVar4);
    fn_82692538(param_1,param_2,param_3);
  }
  return uVar2;
}

