extern int fn_82F52840();
extern unsigned int lbl_83262360;


unsigned __int64 fn_82F50D98(int param_1)

{
  unsigned __int64 uVar1;
  
  if (lbl_83262360 != 0) {
    uVar1 = fn_82F52840(lbl_83262360,*(unsigned int *)(*(int *)(param_1 + 4) + 0x7d8) & 0xff);
    return uVar1;
  }
  return 0;
}

