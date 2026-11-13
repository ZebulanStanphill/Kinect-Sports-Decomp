unsigned __int64 fn_829ABDA0(int *param_1)

{
  int iVar1;
  __int64 lVar2;
  
  *(unsigned int *)(*param_1 + 0x14) = 0x66;
  (*(int (**)())(*param_1 + 4))(param_1,1);
  if (*(int *)(param_1[0x6f] + 0xc) != 0) {
    *(unsigned int *)(*param_1 + 0x14) = 0x3d;
    (*(int (**)())*param_1)(param_1);
  }
  iVar1 = 0;
  lVar2 = 0x10;
  do {
    *(unsigned char *)((int)param_1 + iVar1 + 0xe8) = 0;
    *(unsigned char *)((int)param_1 + iVar1 + 0xf8) = 1;
    *(unsigned char *)((int)param_1 + iVar1 + 0x108) = 5;
    iVar1 = iVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0x46] = 0;
  param_1[10] = 0;
  param_1[0x4c] = 0;
  param_1[0x47] = 0;
  *(unsigned char *)(param_1 + 0x48) = 1;
  *(unsigned char *)((int)param_1 + 0x121) = 1;
  *(unsigned char *)((int)param_1 + 0x122) = 0;
  *(unsigned short *)(param_1 + 0x49) = 1;
  *(unsigned short *)((int)param_1 + 0x126) = 1;
  param_1[0x4a] = 0;
  *(unsigned char *)(param_1 + 0x4b) = 0;
  *(unsigned int *)(param_1[0x6f] + 0xc) = 1;
  return 1;
}

