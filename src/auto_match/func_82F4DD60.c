extern int fn_824B4298();
extern unsigned int lbl_8326183C;


unsigned __int64 fn_82F4DD60(unsigned int param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar2 = 0;
    piVar1 = (int *)(lbl_8326183C + 0x2d9c);
    do {
      if (*piVar1 == param_1) {
        fn_824B4298(param_2,(iVar2 + 0x2d9) * 0x10 + lbl_8326183C,0x10);
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < 2);
  }
  return 0;
}

