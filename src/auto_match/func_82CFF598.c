void fn_82CFF598(char *param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  uVar2 = (__int64)(piVar1[3] + -1) * (__int64)*piVar1 + (unsigned __int64)(unsigned int)piVar1[1];
  *param_1 = (((char)(uVar2 >> 0x18) >> 7) - (char)((int)*(unsigned int *)(param_2 + 0xc) >> 0x1f)) +
             (*(unsigned int *)(param_2 + 0xc) <= uVar2);
  return;
}

