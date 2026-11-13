extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern int fn_82DF8C10();


void fn_82DF8F60(unsigned __int64 param_1,int param_2)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  int iVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned char auStack_20 [4];
  unsigned char auStack_1c [12];
  
  auStack_20[0] = 0;
  fn_82DF8C10(param_1,param_2 + 0x74,param_2 + 0xf4,1,auStack_1c,auStack_20);
  uVar2 = *(unsigned int *)(param_2 + 0x54);
  *(unsigned int *)(param_2 + 0x10c) = 0x103;
  uVar5 = (unsigned __int64)*(unsigned char *)(param_2 + 0x2a);
  iVar7 = (int)uVar2 / (int)(unsigned int)*(unsigned char *)(param_2 + 0x2a);
  lVar8 = (__int64)iVar7;
  trapWord(6,uVar5,0);
  trapWord(5,uVar5 & ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1),
           0xffff);
  if (0 < iVar7) {
    lVar6 = 0;
    do {
      iVar7 = 0;
      lVar9 = lVar6 + (unsigned __int64)*(unsigned int *)(param_2 + 0x50);
      puVar3 = (unsigned char *)lVar9;
      uVar1 = puVar3[0x10];
      puVar3[0x10] = puVar3[0x13];
      puVar3[0x13] = uVar1;
      uVar1 = puVar3[0x11];
      puVar3[0x11] = puVar3[0x12];
      puVar3[0x12] = uVar1;
      uVar1 = *puVar3;
      *puVar3 = puVar3[3];
      puVar3[3] = uVar1;
      uVar1 = puVar3[1];
      puVar3[1] = puVar3[2];
      puVar3[2] = uVar1;
      uVar1 = puVar3[4];
      puVar3[4] = puVar3[7];
      puVar3[7] = uVar1;
      uVar1 = puVar3[5];
      puVar3[5] = puVar3[6];
      puVar3[6] = uVar1;
      uVar1 = puVar3[8];
      puVar3[8] = puVar3[0xb];
      puVar3[0xb] = uVar1;
      uVar1 = puVar3[9];
      puVar3[9] = puVar3[10];
      puVar3[10] = uVar1;
      if (*(char *)(param_2 + 0x28) != '\0') {
        lVar9 = lVar9 + 0x12;
        do {
          iVar4 = (int)lVar9;
          iVar7 = iVar7 + 1;
          uVar1 = *(unsigned char *)(iVar4 + 2);
          *(unsigned char *)(iVar4 + 2) = *(unsigned char *)(iVar4 + 5);
          *(unsigned char *)(iVar4 + 5) = uVar1;
          uVar1 = *(unsigned char *)(iVar4 + 3);
          *(unsigned char *)(iVar4 + 3) = *(unsigned char *)(iVar4 + 4);
          lVar9 = lVar9 + 4;
          *(unsigned char *)lVar9 = uVar1;
        } while (iVar7 < (int)((unsigned int)*(unsigned char *)(param_2 + 0x28) << 1));
      }
      lVar6 = lVar6 + uVar5;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

