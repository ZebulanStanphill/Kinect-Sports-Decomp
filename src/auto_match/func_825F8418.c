extern int fn_825F88A8();


__int64 fn_825F8418(double param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  int iVar1;
  __int64 lVar2;
  char *pcVar3;
  
  lVar2 = 0;
  pcVar3 = (char *)(param_2 + 0x28);
  do {
    if (*pcVar3 == '\0') {
      iVar1 = (int)lVar2 * 0x2c + param_2;
      *(float *)(iVar1 + 0x10) = (float)param_1;
      *(float *)(iVar1 + 0x18) = (float)param_1;
      *(float *)(iVar1 + 0x1c) = (float)param_1;
      *(unsigned int *)(iVar1 + 4) = *param_3;
      *(unsigned char *)(iVar1 + 0x28) = 1;
      goto LAB_825f8458;
    }
    lVar2 = lVar2 + 1;
    pcVar3 = pcVar3 + 0x2c;
  } while ((int)lVar2 < 0xc);
  lVar2 = -1;
LAB_825f8458:
  *(int *)((*(int *)(param_2 + 0x27c) + 0x93) * 4 + param_2) = (int)lVar2;
  *(int *)(param_2 + 0x27c) = *(int *)(param_2 + 0x27c) + 1;
  fn_825F88A8(param_2,param_5,1);
  iVar1 = (int)lVar2 * 0x2c + param_2;
  *(int *)(*(int *)(param_2 + 0x248) * 4 + param_2 + 0x230) = (int)lVar2;
  *(int *)(param_2 + 0x248) = *(int *)(param_2 + 0x248) + 1;
  *(char *)(iVar1 + 0x2a) = (char)param_5;
  *(unsigned char *)(iVar1 + 0x2b) = 1;
  *(unsigned int *)(iVar1 + 0xc) = 0;
  return lVar2;
}

