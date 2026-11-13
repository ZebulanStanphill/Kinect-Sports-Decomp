extern int fn_82F691F0();


void fn_8263AA68(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  
  uVar3 = (0x5fU - param_2) / 3;
  iVar1 = (uVar3 + 0x30) * 0x18;
  uVar2 = *(unsigned int *)(iVar1 + param_1);
  puVar4 = (unsigned int *)(iVar1 + param_1);
  if (((uVar2 & 3) != 0) && ((uVar2 & 3) != 2)) {
    *puVar4 = *puVar4 & 0xfffffffc | 1;
    uVar2 = *(int *)(param_3 + 0x18) + param_4;
    (puVar4 + ((0x5fU - param_2) % 3) * 2)[1] =
         *(int *)(param_3 + 0x1c) - param_4 & 0xcfffffffU | 0x10000000;
    puVar4[((0x5fU - param_2) % 3) * 2] = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff);
    *(unsigned __int64 *)(param_1 + 0x18) =
         0x8000000000000000U >> (uVar3 + 0x20 & 0x7f) | *(unsigned __int64 *)(param_1 + 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(puVar4,0,0x18);
}

