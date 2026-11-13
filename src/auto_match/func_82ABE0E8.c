extern int fn_82ABDD90();


unsigned int fn_82ABE0E8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  iVar2 = fn_82ABDD90(param_2,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
  uVar3 = 7;
  uVar1 = *(unsigned int *)(iVar2 + param_1 + -8);
  if ((uVar1 & 3) == 0) {
    uVar3 = uVar1 >> 2 & 0xf;
  }
  return uVar3;
}

