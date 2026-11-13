void fn_82FAF198(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  if ((unsigned int)iVar2 != *(unsigned int *)(param_1 + 0x80)) {
    do {
      piVar1 = *(int **)(iVar2 + 4);
      if ((*(short *)(piVar1 + 6) != 0) && ((*(unsigned char *)((int)piVar1 + 0x3e) & 0x80) == 0)) {
        (*(int (**)())(*piVar1 + 0x54))(piVar1,param_2,param_3,param_4,param_5);
      }
      iVar2 = iVar2 + 8;
    } while ((unsigned int)iVar2 != *(unsigned int *)(param_1 + 0x80));
  }
  return;
}

