extern unsigned int lbl_832179FC;


unsigned __int64 fn_829D4E70(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  piVar1 = (int *)((param_1 + 0x11e7c) * 8 + lbl_832179FC);
  uVar2 = (unsigned __int64)(unsigned int)piVar1[1];
  if (uVar2 == 0) {
    return 0;
  }
  trapWord(6,uVar2,0);
  return (unsigned int)(*piVar1 * 10) / uVar2 & 0xff;
}

