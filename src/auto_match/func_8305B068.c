extern int fn_83059A80();


void fn_8305B068(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned short *)(param_3 + 3);
  uVar1 = (unsigned __int64)*param_3;
  fn_83059A80(param_2,uVar1,uVar2 * 8 + uVar1,uVar2 * 4 + uVar1,uVar2 * 0xc + uVar1,
                  uVar2 * 0x10 + uVar1,uVar2 * 0x14 + uVar1);
  return;
}

