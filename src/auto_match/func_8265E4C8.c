extern int fn_8265C9E0();
extern int fn_8265CC38();
extern int fn_8265D788();
extern int fn_8265EFE0();
extern int fn_8265F540();
extern int fn_82661300();
extern int fn_826635E0();
extern unsigned int iStack00000014;
extern unsigned int iStack_1c;
extern unsigned int lbl_831E7A18;
extern unsigned int lbl_831E7A2C;
extern unsigned int uStack_30;


unsigned __int64 fn_8265E4C8(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iStack00000014;
  unsigned int uStack_30;
  int iStack_1c;
  
  iStack00000014 = param_1;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uVar1 = 0xffffffffffffffff;
  }
  else if (param_1 == 0) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    iVar2 = fn_8265C9E0(0x20);
    if (iVar2 == 0) {
      iStack_1c = 0;
    }
    else {
      iStack_1c = fn_8265D788(iVar2,iStack00000014,1);
    }
    fn_82661300(iStack00000014,0xfffffffffffffeff,0xffffffff8265e648,iStack_1c);
    uStack_30 = 0;
    if (*(unsigned short *)(lbl_831E7A2C + 0x1c) < *(unsigned short *)(iStack_1c + 0x1c)) {
      fn_826635E0(0xffffffff831e7a48,1);
      uStack_30 = fn_82661300(iStack00000014,0xfffffffffffffeff,0xffffffff8265e818,0);
      if (0 < (int)uStack_30) {
        *(unsigned short *)(lbl_831E7A2C + 0x1c) = *(unsigned short *)(iStack_1c + 0x1c);
        fn_8265F540(lbl_831E7A2C,iStack_1c);
        fn_8265EFE0(0xffffffff831e7a30);
      }
    }
    if (iStack_1c != 0) {
      fn_8265CC38(iStack_1c,1);
    }
    uVar1 = (unsigned __int64)uStack_30;
  }
  return uVar1;
}

