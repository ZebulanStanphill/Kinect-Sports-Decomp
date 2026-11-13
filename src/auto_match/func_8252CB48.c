void fn_8252CB48(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int (***)())(param_1 + 0x924) != (int (**)())0x0) {
    (**(int (***)())(param_1 + 0x924))(param_1,param_3,param_4);
  }
  if (*(int *)(param_1 + 0x8c0) != 0) {
    uVar2 = (unsigned int)((param_3 & 0xffffffff) << 2) & 0x3fc;
    iVar3 = *(int *)(param_1 + 0x8c0) + 0xd0;
    iVar1 = (int)uVar2 >> 3;
    iVar4 = param_2 * 0x20 + iVar1 + iVar3;
    uVar2 = uVar2 + iVar1 * -8;
    *(unsigned char *)(iVar4 + 4) =
         *(unsigned char *)(iVar4 + 4) & ~(unsigned char)(0xf << (uVar2 & 0x3f)) |
         (unsigned char)(((unsigned int)param_4 & 0xff) << (uVar2 & 0x3f));
    *(unsigned int *)((param_2 + 0x11) * 4 + iVar3) = 1;
  }
  return;
}

