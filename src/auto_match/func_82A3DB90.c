#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


unsigned __int64 fn_82A3DB90(int param_1)

{
  unsigned char uVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int *puVar6;
  unsigned char *puVar7;
  __int64 lVar8;
  
  iVar2 = *(int *)(param_1 + 0x2b04);
  puVar7 = (unsigned char *)(iVar2 + -2);
  *(unsigned char **)(param_1 + 0x2b04) = puVar7;
  if (*(unsigned int *)(param_1 + 0x2b08) <= iVar2 + 2U) {
    return 0;
  }
  puVar6 = (unsigned int *)(param_1 + 8);
  lVar8 = 3;
  do {
    puVar3 = puVar7 + 3;
    puVar4 = puVar7 + 2;
    puVar5 = puVar7 + 1;
    uVar1 = *puVar7;
    puVar7 = puVar7 + 4;
    puVar6 = puVar6 + 1;
    *puVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar3,*puVar4),*puVar5),uVar1);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(unsigned char **)(param_1 + 0x2b04) = puVar7;
  return 1;
}

