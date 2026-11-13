extern int fn_82C10F40();

unsigned int fn_82C23720(int param_1, int param_2, unsigned short *param_3, unsigned short *param_4, unsigned int *param_5)
{
  int iVar1;
  int iVar3;
  unsigned int uVar2;
  int iStack_40;
  int aiStack_3c[1];

  iVar1 = *(int *)(param_1 + 0x1c);
  *param_3 = 0xffff;
  *param_4 = 0;
  *param_5 = 0;
  aiStack_3c[0] = 0;
  iStack_40 = 0;
  iVar3 = fn_82C10F40(*(int *)(*(int *)(iVar1 + 4) + 0x7c), param_2, &iStack_40);
  if ((unsigned int)iVar3 == 0x80500016) {
    return 0;
  }
  *param_5 = *(unsigned int *)(iStack_40 + 0x18);
  uVar2 = fn_82C10F40(*(int *)(*(int *)(iVar1 + 4) + 0x80), param_2, aiStack_3c);
  if (uVar2 == 0x80500016) {
    return 0;
  }
  *param_3 = *(unsigned short *)(aiStack_3c[0] + 0x54);
  *param_4 = *(unsigned short *)(aiStack_3c[0] + 0x56);
  return uVar2;
}
