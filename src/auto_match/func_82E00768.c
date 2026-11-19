extern int fn_82D82E28();


void fn_82E00768(int self)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(self + 0x14);
  if (0 < (int)*(unsigned int *)(self + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(self + 0x10));
      fn_82D82E28(*(unsigned int *)(iVar1 + 8),iVar1);
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + 0x60;
    } while (uVar3 != 0);
  }
  return;
}

