#define true 1


unsigned __int64 fn_82B8F618(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  while( true ) {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff;
    uVar2 = (unsigned int)(uVar1 << 1) & 0x1e;
    uVar2 = ((2 << ((int)(((unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff) << 1) + 1U & 0x1f)) - 1U
             & *(unsigned int *)((int)*(unsigned int **)(param_1 + 0x28) +
                        ((unsigned int)uVar1 >> 2 & 0x1ffffffc) +
                        (((unsigned int)(((unsigned __int64)**(unsigned int **)(param_1 + 0x28) & 0x7ffff) + 0x1f >> 3) &
                         0x1ffffffc) + 2) * 2) & -1 << uVar2) >> uVar2;
    if ((uVar2 == 0) || (uVar2 == 3)) break;
    param_2 = *(int *)(param_2 + 0x40);
    if (param_2 == 0) {
      return 1;
    }
  }
  return 0;
}

