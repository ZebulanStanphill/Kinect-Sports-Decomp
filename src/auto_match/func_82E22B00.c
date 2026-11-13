void fn_82E22B00(int param_1,int param_2,__int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)param_3) {
    do {
      bVar2 = *(unsigned char *)(iVar3 + param_2) ^ *(unsigned char *)(param_1 + 8);
      *(unsigned char *)(iVar3 + param_2) = bVar2;
      iVar3 = iVar3 + 1;
      bVar1 = *(unsigned char *)(param_1 + 9);
      *(unsigned char *)(param_1 + 9) = bVar2 ^ bVar1;
      *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_1 + 8) ^ bVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
  return;
}

