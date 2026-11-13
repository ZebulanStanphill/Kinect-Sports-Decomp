extern int fn_82C2E420();


unsigned __int64 fn_82C2C0F0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (*(short *)(param_1 + 0x22) != 0) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 * 0x6f0 + param_2;
      *(unsigned char *)(iVar3 + 0xb4) = 0;
      dVar5 = (double)fn_82C2E420(0,0);
      sVar2 = (short)iVar4 + 1;
      *(float *)(iVar3 + 0xc4) = (float)dVar5;
      iVar4 = (int)sVar2;
    } while ((int)sVar2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
    if (*(unsigned short *)(param_1 + 0x22) != 0) {
      iVar4 = 0;
      do {
        iVar3 = iVar4 * 0x6f0 + param_2;
        sVar2 = (short)iVar4 + 1;
        iVar4 = (int)sVar2;
        *(unsigned int *)(iVar3 + 0x1bc) = 0;
        *(unsigned int *)(iVar3 + 8) = 0;
        *(unsigned int *)(iVar3 + 0x1b4) = 1;
      } while ((int)sVar2 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
      if (*(unsigned short *)(param_1 + 0x22) != 0) {
        iVar4 = 0;
        do {
          sVar2 = (short)*(unsigned int *)(param_1 + 0x100);
          iVar3 = iVar4 * 0x6f0 + param_2;
          sVar1 = (short)iVar4 + 1;
          sVar2 = (sVar2 >> 1) + (unsigned short)(sVar2 < 0 && (*(unsigned int *)(param_1 + 0x100) & 1) != 0);
          iVar4 = (int)sVar1;
          *(short *)(iVar3 + 0x7a) = sVar2;
          *(short *)(iVar3 + 0x7c) = sVar2;
          **(unsigned short **)(*(int *)(iVar3 + 0x1a8) + 8) = (short)*(unsigned int *)(param_1 + 0x100);
          *(unsigned short *)(iVar3 + 0x74) = 0;
        } while ((int)sVar1 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
      }
    }
  }
  return 0;
}

