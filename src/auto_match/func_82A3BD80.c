#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


void fn_82A3BD80(int param_1,unsigned int param_2)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char *puVar3;
  unsigned int uVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = *(char *)(param_1 + 0x2eb4) - (char)param_2;
  uVar4 = *(int *)(param_1 + 0x2eb0) << (param_2 & 0x3f);
  *(unsigned int *)(param_1 + 0x2eb0) = uVar4;
  *(char *)(param_1 + 0x2eb4) = cVar6;
  if ('\0' < cVar6) {
    return;
  }
  puVar3 = *(unsigned char **)(param_1 + 0x2b04);
  if (puVar3 < *(unsigned char **)(param_1 + 0x2b08)) {
    cVar6 = *(char *)(param_1 + 0x2eb4);
    uVar1 = puVar3[1];
    uVar2 = *puVar3;
    *(unsigned char **)(param_1 + 0x2b04) = puVar3 + 2;
    cVar5 = cVar6 + '\x10';
    *(char *)(param_1 + 0x2eb4) = cVar5;
    *(unsigned int *)(param_1 + 0x2eb0) = (unsigned int)CONCAT11(uVar1,uVar2) << (-(int)cVar6 & 0x3fU) | uVar4;
    if ('\0' < cVar5) {
      return;
    }
    if (puVar3 + 2 < *(unsigned char **)(param_1 + 0x2b08)) {
      cVar6 = *(char *)(param_1 + 0x2eb4);
      uVar1 = puVar3[3];
      uVar2 = puVar3[2];
      *(unsigned char **)(param_1 + 0x2b04) = puVar3 + 4;
      *(char *)(param_1 + 0x2eb4) = cVar6 + '\x10';
      *(unsigned int *)(param_1 + 0x2eb0) =
           (unsigned int)CONCAT11(uVar1,uVar2) << (-(int)cVar6 & 0x3fU) | *(unsigned int *)(param_1 + 0x2eb0);
      return;
    }
  }
  *(unsigned char *)(param_1 + 0x2eb7) = 1;
  return;
}

