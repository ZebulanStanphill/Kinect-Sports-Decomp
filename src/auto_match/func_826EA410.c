extern int fn_826EA3B8();


void fn_826EA410(int param_1)

{
  int iVar1;
  int iVar2;
  int lVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  lVar3 = 0x800 - (unsigned __int64)*(unsigned int *)(iVar1 + 4);
  iVar4 = (int)lVar3;
  if ((iVar4 <= 0) ||
     (iVar2 = (*(int (**)())(**(int **)(iVar1 + 0x14) + 0x24))
                        (*(int **)(iVar1 + 0x14),iVar1 + 0x18,lVar3), iVar2 == iVar4)) {
    fn_826EA3B8(iVar1,1);
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

