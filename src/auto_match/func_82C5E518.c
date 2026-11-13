void fn_82C5E518(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = 2;
  if (*(int *)(param_1 + 0x3cb0) == 6) {
    iVar2 = *(int *)(param_1 + 0xf8c);
LAB_82c5e548:
    if (iVar2 == 0) goto LAB_82c5e554;
  }
  else {
    if (*(int *)(param_1 + 0x3cb0) != 7) goto LAB_82c5e554;
    if (*(int *)(param_1 + 0x50c8) == 0) {
      iVar2 = *(int *)(param_1 + 0x50cc);
      goto LAB_82c5e548;
    }
  }
  uVar1 = 3;
LAB_82c5e554:
  *param_2 = uVar1;
  *param_3 = 0;
  return;
}

