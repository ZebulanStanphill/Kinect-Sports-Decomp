extern unsigned int *auStack_30;
extern int fn_829D47B0();
extern int fn_829E6798();
extern int fn_829E71F0();
extern int fn_829E7260();
extern int fn_82A28E60();
extern unsigned int lbl_832179FC;


__int64 fn_829E6288(void)

{
  __int64 lVar1;
  int in_r6;
  unsigned __int64 uVar2;
  unsigned int auStack_30 [12];
  
  lVar1 = fn_829E7260();
  if ((int)lVar1 == 0) {
    fn_829D47B0(auStack_30,0x10e00);
    uVar2 = (unsigned __int64)auStack_30[0];
    lVar1 = fn_829E71F0(in_r6 + 0x3c,uVar2,uVar2 + 0x8700);
    if (lVar1 == 0) {
      lVar1 = fn_829E6798(in_r6 + 0x3c,*(unsigned int *)(in_r6 + 0x38),uVar2);
      if (lVar1 == 0) {
        if (uVar2 != 0) {
          fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,uVar2);
        }
        lVar1 = 0;
      }
      else if (uVar2 != 0) {
        fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,uVar2);
      }
    }
    else if (uVar2 != 0) {
      fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,uVar2);
    }
  }
  return lVar1;
}

