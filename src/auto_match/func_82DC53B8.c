extern unsigned int *auStack_40;
extern int fn_830A2398();
extern int fn_830A4688();


void fn_82DC53B8(unsigned int *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int auStack_40 [16];
  
  auStack_40[0] = param_1[3];
  uVar4 = (unsigned __int64)auStack_40[0];
  iVar1 = param_1[1];
  puVar7 = (unsigned int *)*param_1;
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      iVar6 = iVar6 + 1;
      if (iVar6 < iVar1) {
        uVar3 = (unsigned __int64)puVar7[7];
        dataCacheBlockTouch(uVar3);
        dataCacheBlockTouch(uVar3 + 0x80);
        dataCacheBlockTouch((unsigned __int64)puVar7[9]);
        dataCacheBlockTouch(uVar4 + 0x200);
      }
      *(unsigned int *)(param_2 + 0x38) = puVar7[3];
      *(unsigned int *)(param_2 + 0x3c) = puVar7[4];
      *(unsigned int *)(param_2 + 0x30) = (unsigned int)*(unsigned short *)(puVar7 + 6) * 0x80 + param_1[2];
      *(unsigned int *)(param_2 + 0x34) = (unsigned int)*(unsigned short *)((int)puVar7 + 0x1a) * 0x80 + param_1[2];
      *(unsigned int *)(param_2 + 0x50) = (unsigned int)*(unsigned short *)(puVar7 + 6);
      *(unsigned int *)(param_2 + 0x54) = (unsigned int)*(unsigned short *)((int)puVar7 + 0x1a);
      *(unsigned int *)(param_2 + 0x48) = puVar7[1];
      *(unsigned int *)(param_2 + 0x4c) = puVar7[2];
      *(unsigned int *)(param_2 + 0x58) = puVar7[2];
      psVar2 = (short *)*puVar7;
      if (*psVar2 == 0x16) {
        fn_830A4688(psVar2,param_2,1);
      }
      else {
        fn_830A2398(psVar2,*(unsigned short *)(puVar7 + 5),param_2,auStack_40);
      }
      uVar4 = (unsigned __int64)auStack_40[0];
      puVar7 = puVar7 + 7;
    } while (iVar6 < iVar1);
  }
  puVar5 = (unsigned int *)uVar4;
  if (*(char *)(param_1 + 6) == '\0') {
    *puVar5 = 0;
  }
  else if (0 < (__int64)((unsigned int)param_1[4] - uVar4)) {
    puVar5[1] = (int)((unsigned int)param_1[4] - uVar4);
    *(unsigned char *)((int)puVar5 + 3) = 2;
  }
  return;
}

