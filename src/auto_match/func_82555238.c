extern int fn_825463B0();
extern int fn_82546930();
extern int fn_82BFEB80();


unsigned __int64 fn_82555238(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (*(unsigned int *)(param_1 + 0x18) == 0) {
    uVar1 = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0xc) = 0;
    do {
      do {
        iVar2 = fn_82BFEB80(*(unsigned int *)(param_1 + 0x18),0,0);
      } while (iVar2 == 0x166600e8);
      if (iVar2 != 0x16660026) {
        fn_825463B0();
        fn_82546930();
      }
    } while (((iVar2 >= 0) && (iVar2 != 0x16660026)) && (*(int *)(param_1 + 0xc) == 0));
    uVar1 = 1;
  }
  return uVar1;
}

