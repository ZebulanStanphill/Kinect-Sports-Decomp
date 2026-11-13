extern int fn_82791560();
extern int fn_827917E8();
extern int fn_827918F8();
extern int fn_82791A60();


unsigned __int64 fn_82792958(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 4) == 8) {
      fn_827918F8(param_1);
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 4) == 7) {
      puVar2 = (unsigned int *)(param_1 + 8);
      do {
        if (*(unsigned int *)(param_1 + 0x10) <= *puVar2) break;
        fn_82791A60(param_1,param_2,param_3);
        fn_827917E8(param_1);
        if (*puVar2 < *(unsigned int *)(param_1 + 0x10)) {
          if (*(int *)(param_1 + 0x14) == 0x3d) {
            fn_82791560(puVar2);
            fn_827917E8(param_1);
            uVar1 = 1;
            *(unsigned int *)(param_1 + 4) = 8;
          }
          else {
            fn_827918F8(param_1);
          }
        }
      } while (*(int *)(param_1 + 4) == 7);
    }
    if (*(unsigned int *)(param_1 + 0x10) <= *(unsigned int *)(param_1 + 8)) {
      *(unsigned int *)(param_1 + 4) = 1;
    }
  }
  return uVar1;
}

