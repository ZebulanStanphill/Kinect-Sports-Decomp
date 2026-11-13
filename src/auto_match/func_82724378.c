extern int fn_8267C498();
extern int fn_827A3960();


void fn_82724378(int *param_1)

{
  unsigned int iVar1;
  unsigned int iVar2;
  
  if (*(int *)(param_1[0x28] + 0x114) != 0) {
    iVar1 = *(int *)(*(int *)(param_1[0x28] + 0x114) + 0x14);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      fn_827A3960(iVar1);
      iVar2 = (*(int (**)())(*param_1 + 0x40))(param_1);
      if (iVar2 != 0) {
        *(unsigned int *)(iVar2 + 0xb00) = *(unsigned int *)(iVar2 + 0xb00) | 0x400;
      }
      fn_8267C498(iVar1);
    }
  }
  return;
}

