extern int fn_827E0C38();
extern int fn_827E10C8();


void fn_827E0D30(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x70);
  if (*(float *)(param_1 + 0x74) < (float)((double)*(unsigned int *)(param_1 + 8) / (double)uVar1)) {
    iVar2 = 0;
    do {
      if (0x1ffffffe < uVar1) break;
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 << 1;
    } while (iVar2 < 3);
    fn_827E0C38(param_1);
    fn_827E10C8(param_1,*(unsigned int *)(param_1 + 4));
  }
  return;
}

