extern int fn_82E50BE8();
extern int fn_82F419B8();


unsigned __int64 fn_82F41B70(int param_1,unsigned short param_2)

{
  unsigned int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  fn_82F419B8();
  iVar1 = fn_82E50BE8((unsigned __int64)param_2 << 1,0,0,0,0);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    *(unsigned short *)(param_1 + 0x16) = param_2;
  }
  return uVar2;
}

