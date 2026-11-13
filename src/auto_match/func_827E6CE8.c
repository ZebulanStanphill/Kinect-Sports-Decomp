extern int fn_827D9DC0();
extern int fn_827D9DC8();


unsigned __int64 fn_827E6CE8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if (*(int *)((*(int *)(param_1 + 4) + 3) * 0x28 + *(int *)(param_1 + 0x20)) == 0) {
    uVar1 = 0x4b0;
  }
  else {
    uVar2 = fn_827D9DC0(*(unsigned int *)(param_1 + 8));
    if (((uVar2 & 2) == 0) && (uVar2 = fn_827D9DC0(*(unsigned int *)(param_1 + 8)), (uVar2 & 1) == 0)
       ) {
      uVar1 = 6;
    }
    else {
      fn_827D9DC8(*(unsigned int *)(param_1 + 8));
      uVar1 = 0x3e4;
    }
  }
  return uVar1;
}

