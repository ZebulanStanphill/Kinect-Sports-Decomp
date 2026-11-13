extern int fn_8268F3D8();
extern int fn_8268F848();


unsigned __int64 fn_8268FF28(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  uVar4 = fn_8268F848();
  iVar3 = (int)uVar4 * 0xc + param_1;
  (**(int (***)())(**(int **)(param_1 + 4) + 0x10))(*(int **)(param_1 + 4));
  uVar1 = *(unsigned int *)(param_1 + 8);
  uVar2 = *(unsigned int *)(param_1 + 0xc);
  param_3 = param_3 >> (uVar2 & 0x3f);
  fn_8268F3D8(((unsigned __int64)*(unsigned int *)(iVar3 + 0x1c) -
                (((unsigned __int64)((uVar1 * 8 + *(unsigned int *)(iVar3 + 0x20)) - 1 >> (uVar2 + 3 & 0x3f)) +
                 (unsigned __int64)uVar1) - 1 & ~((unsigned __int64)uVar1 - 1))) +
                (unsigned __int64)*(unsigned int *)(iVar3 + 0x20),
                (int)(param_2 - *(unsigned int *)(iVar3 + 0x1c)) >> (uVar2 & 0x3f),param_3);
  *(unsigned int *)(iVar3 + 0x24) = *(int *)(iVar3 + 0x24) - param_3;
  *(unsigned int *)(param_1 + 0x18) =
       *(int *)(param_1 + 0x18) - (param_3 << (*(unsigned int *)(param_1 + 0xc) & 0x3f));
  return uVar4;
}

