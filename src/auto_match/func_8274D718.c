extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82696BC8();
extern int fn_8274CF30();


void fn_8274D718(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_8267B890(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x38,
                            0);
  if (uVar1 != 0) {
    uVar1 = fn_8274CF30(uVar1,*(unsigned int *)(param_1 + 0x18));
  } else { uVar1 = 0; }
  fn_82696BC8(*(unsigned int *)(param_1 + 4),uVar1);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_826824B0(uVar1);
  }
  return;
}

