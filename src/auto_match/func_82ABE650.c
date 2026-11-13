extern int fn_82ABDD90();
extern int fn_82ABE5F8();


void fn_82ABE650(int param_1,unsigned char param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int iVar3;
  unsigned int uVar4;
  
  if (param_2 == '\0') {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -0x1000;
    iVar3 = *(int *)(param_1 + 0x21c);
    while (iVar3 != 0) {
      uVar1 = *(unsigned int *)(iVar3 + 8);
      iVar2 = *(int *)(iVar3 + 0x20);
      fn_82ABE5F8(param_1,iVar3,fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7),0);
      iVar3 = iVar2;
    }
    *(unsigned int *)(param_1 + 0x21c) = 0;
  }
  return;
}

