void fn_82CF6950(int param_1,int param_2,unsigned int param_3)

{
  unsigned short *puVar1;
  unsigned int uVar2;
  
  uVar2 = param_3 >> 1;
  if (param_3 < 2) {
    return;
  }
  puVar1 = (unsigned short *)((uVar2 - 1) * 2 + param_1);
  do {
    *puVar1 = *(unsigned short *)((param_2 - param_1) + (int)puVar1);
    puVar1 = puVar1 + -1;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

