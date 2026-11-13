extern int fn_82E3C5F8();


unsigned __int64 fn_82E3F410(int param_1,short param_2)

{
  unsigned __int64 uVar1;
  short *apsStack_40 [4];
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    do {
      fn_82E3C5F8(param_1 + 0x78,uVar1,apsStack_40);
      if (param_2 == *apsStack_40[0]) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while ((uVar1 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xb8));
  }
  return 0;
}

