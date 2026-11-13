extern int fn_8265C940();
extern int fn_82F68CC0();


unsigned __int64 fn_82A5DD48(int param_1,unsigned int *param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  lVar1 = fn_8265C940(0x42c,0x20970000);
  if (lVar1 == 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    uVar2 = 0;
    fn_82F68CC0(lVar1,*(unsigned int *)(param_1 + 4),0x42c);
    *param_2 = (int)lVar1;
  }
  return uVar2;
}

