extern int fn_82CE5410();


void fn_82D7EDB0(unsigned int *param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar1 = *(unsigned short *)((int)param_1 + 0xe);
  if ((uVar1 & 0x8000) == 0) {
    uVar2 = param_1[2];
    iVar3 = fn_82CE5410();
    (*(int (**)())(**(int **)(iVar3 + 0x10) + 8))
              (*(int **)(iVar3 + 0x10),uVar2,((unsigned __int64)uVar1 & 0x3fff) << 2);
  }
  uVar1 = *(unsigned short *)((int)param_1 + 6);
  if ((uVar1 & 0x8000) == 0) {
    uVar2 = *param_1;
    iVar3 = fn_82CE5410();
    (*(int (**)())(**(int **)(iVar3 + 0x10) + 8))
              (*(int **)(iVar3 + 0x10),uVar2,((unsigned __int64)uVar1 & 0x3fff) << 2);
  }
  return;
}

