extern int fn_82E1E9F0();
extern int fn_82E1EAE8();
extern int fn_82F68CC0();


void fn_82E1EC90(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if (*(char *)(param_1 + 10) != '\0') {
    if (*(char *)(param_1 + 0xc) == '\0') {
      fn_82E1E9F0(param_1,param_2,param_3);
    }
    else {
      uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x40);
      uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
      if (*(char *)(param_1 + 0x5c) == '\0') {
        if (uVar1 <= (uVar2 + param_3 + 1 & 0xffffffff)) {
          fn_82E1EAE8(param_1);
        }
        if ((param_3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x40)) {
          fn_82F68CC0((unsigned __int64)*(unsigned int *)(param_1 + 0x4c) + (unsigned __int64)*(unsigned int *)(param_1 + 0x44));
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)param_3;
        }
        else {
          fn_82E1E9F0(param_1,param_2,param_3);
        }
        if ((unsigned __int64)*(unsigned int *)(param_1 + 0x40) / 10 < (unsigned __int64)*(unsigned int *)(param_1 + 0x44) / 9) {
          fn_82E1EAE8(param_1);
        }
      }
      else if (((uVar2 + param_3 + 1 & 0xffffffff) < uVar1) && ((param_3 & 0xffffffff) < uVar1)) {
        fn_82F68CC0(*(unsigned int *)(param_1 + 0x4c) + uVar2);
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)param_3;
      }
    }
  }
  return;
}

