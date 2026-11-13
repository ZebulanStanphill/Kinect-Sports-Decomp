typedef unsigned char bool;
extern int fn_8288B760();
extern int fn_828AAF70();


void fn_822B76B8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  char cVar7;
  __int64 lVar4;
  int iVar5;
  unsigned int uVar6;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    bVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0xd4) + 0x18) + 0xc) == 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      cVar7 = fn_8288B760();
      if (cVar7 == '\0') {
        iVar5 = (**(int (***)())(**(int **)(iVar1 + 0x14) + 4))();
        uVar6 = (**(int (***)())(*(int *)(iVar5 + 0x7d4) + 0x3c))();
        *(unsigned int *)(iVar1 + 0xd4) = uVar6 & 0xff;
        return;
      }
      piVar2 = *(int **)(iVar1 + 0x14);
      cVar7 = fn_8288B760(piVar2);
      if (cVar7 != '\0') {
        lVar4 = (**(int (***)())(*piVar2 + 8))(piVar2);
        fn_828AAF70(lVar4 + 0x7d4,bVar3);
      }
    }
    *(unsigned int *)(iVar1 + 0xd4) = (unsigned int)bVar3;
  }
  return;
}

