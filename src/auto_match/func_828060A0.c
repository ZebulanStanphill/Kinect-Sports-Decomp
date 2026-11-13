void fn_828060A0(int param_1,int param_2,int *param_3,unsigned char *param_4,int *param_5,unsigned int param_6)

{
  unsigned char bVar1;
  short sVar2;
  int iVar3;
  unsigned char bVar4;
  unsigned __int64 uVar5;
  
  uVar5 = 0x80;
  iVar3 = param_6 << 2;
  bVar1 = **(unsigned char **)(param_2 + 0x24);
  do {
    if (*(unsigned short *)(param_1 + 0x1e) <= param_6) {
      return;
    }
    if ((uVar5 & bVar1) != 0) {
      if ((uVar5 >> 3 & (unsigned __int64)bVar1) == 0) {
        sVar2 = **(short **)(param_2 + 0x28);
        *(short **)(param_2 + 0x28) = *(short **)(param_2 + 0x28) + 1;
        bVar4 = **(unsigned char **)(param_2 + 0x30);
        *(unsigned char **)(param_2 + 0x30) = *(unsigned char **)(param_2 + 0x30) + 1;
        *(float *)*param_3 =
             ((float)(((((unsigned int *)*param_5)[1] << 1) << (0x1f - *param_4 & 0x3f) |
                      *(unsigned int *)*param_5 >> (*param_4 & 0x3f)) & (1 << (bVar4 & 0x3f)) - 1U) +
             (float)(__int64)sVar2) * *(float *)(*(int *)(param_1 + 4) + iVar3);
        bVar4 = *param_4 + bVar4;
        *param_4 = bVar4 & 0x1f;
        *param_5 = (bVar4 >> 3 & 0x1ffffffc) + *param_5;
      }
      else {
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 2;
      }
    }
    uVar5 = uVar5 >> 1;
    param_6 = param_6 + 1;
    iVar3 = iVar3 + 4;
    *param_3 = *param_3 + 4;
  } while (uVar5 != 0x10);
  return;
}

