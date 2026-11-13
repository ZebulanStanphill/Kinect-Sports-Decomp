extern int fn_823D9D60();
extern int fn_823E8798();


void fn_823E69D0(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  uVar1 = fn_823D9D60(param_1,0);
  lVar2 = fn_823D9D60(uVar1,1);
  fn_823E8798(param_2,*(unsigned int *)(param_1 + 8),lVar2 + 0xc,lVar2 + 0x1090);
  return;
}

