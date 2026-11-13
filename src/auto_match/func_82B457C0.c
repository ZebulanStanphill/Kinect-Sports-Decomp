#define true 1
extern int fn_82B45740();


unsigned __int64 fn_82B457C0(unsigned __int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  while( true ) {
    if (*(int *)(param_2 + 4) != 1) {
      uVar1 = fn_82B45740();
      return uVar1;
    }
    if (*(int *)(param_2 + 0xc) != 0) break;
    param_2 = *(int *)(param_2 + 8);
  }
  return 0;
}

