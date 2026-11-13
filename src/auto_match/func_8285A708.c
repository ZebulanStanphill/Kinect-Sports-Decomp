extern int fn_8285A408();


void fn_8285A708(int param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 0x44) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + iVar3) + 0x40);
      if (iVar1 != 0) {
        fn_8285A408(iVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x44));
  }
  return;
}

