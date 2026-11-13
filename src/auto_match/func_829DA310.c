extern int fn_829D4EB8();
extern int fn_82A1E0C0();
extern int fn_82A1E2C0();
extern int fn_82A1E508();
extern unsigned int lbl_832179FC;


unsigned __int64 fn_829DA310(unsigned __int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar1 = fn_82A1E0C0(0,0x8000,0xffffffff829d9ff8,0,4,lbl_832179FC + 0x8f4b4);
  *(unsigned int *)(lbl_832179FC + 0x8f4b0) = uVar1;
  if (*(int *)(lbl_832179FC + 0x8f4b0) == 0) {
    uVar3 = 0xffffffff8007000e;
  }
  else {
    iVar2 = fn_82A1E508(*(int *)(lbl_832179FC + 0x8f4b0),param_1);
    if (iVar2 != -1) {
      fn_82A1E2C0(*(unsigned int *)(lbl_832179FC + 0x8f4b0));
      return 0;
    }
    uVar3 = thunk_FUN_82a2b798();
    if (0 < (int)uVar3) {
      uVar3 = uVar3 & 0xffff | 0x80070000;
    }
  }
  fn_829D4EB8();
  return uVar3;
}

