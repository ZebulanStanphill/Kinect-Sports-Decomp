double fn_82799C40(int *param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  
  if (*param_1 < 0) {
    uVar2 = (unsigned int)*(unsigned short *)((int)param_1 + 0x16);
    uVar1 = *(unsigned short *)((int)param_1 + 0x1a);
  }
  else {
    uVar2 = param_1[6];
    uVar1 = *(unsigned short *)((int)param_1 + 0x26);
  }
  return (double)((float)(__int64)(int)uVar2 - (float)uVar1);
}

