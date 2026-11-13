#define true 1
extern int fn_82674630();


unsigned int  fn_826747D8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  while( true ) {
    if (iVar2 == *(int *)(param_1 + 0x2c)) {
      return 0;
    }
    uVar1 = fn_82674630(param_1,param_2,*(unsigned int *)(iVar2 + 4));
    if ((uVar1 & 0xffffffff) != 0) break;
    iVar2 = iVar2 + 0xc;
  }
  return uVar1;
}

