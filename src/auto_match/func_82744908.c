extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_82695DA0();
extern int fn_82696BC8();
extern int fn_826972E0();
extern int fn_82743808();
extern int fn_82744378();
extern int fn_82F64318();


void fn_82744908(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  uVar1 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,
                            0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82744378(uVar1,*(unsigned int *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x1c) < 2) {
    fn_82743808(uVar1,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,0xffffffff831f12e8);
    fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar1);
    if ((uVar1 & 0xffffffff) != 0) {
      fn_826824B0(uVar1);
    }
    return;
  }
  uVar2 = fn_826957D0(param_1,0);
  fn_82695DA0(auStack_50,uVar2);
  uVar2 = fn_826957D0(param_1,1);
  fn_82695DA0(auStack_60,uVar2);
  fn_826972E0(auStack_50,*(unsigned int *)(param_1 + 0x18));
  fn_826972E0(auStack_60,*(unsigned int *)(param_1 + 0x18));
                    /* WARNING: Subroutine does not return */
  fn_82F64318();
}

