void fn_82645D88(int param_1,int param_2,__int64 param_3,__int64 param_4)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  bVar1 = *(unsigned char *)(param_1 + 0x2abf);
  *(unsigned char *)(param_1 + 0x2abf) = bVar1 | 0x20;
  if (param_2 != 0) {
    *(unsigned char *)(param_1 + 0x2abf) = bVar1 | 0x30;
  }
  if ((*(unsigned short *)(param_1 + 0x2880) & 3) == 0) {
    uVar7 = 0x10;
  }
  else {
    uVar7 = 8;
    if ((*(unsigned short *)(param_1 + 0x2880) & 3) != 1) {
      uVar5 = 0x10;
      uVar6 = 0x28;
      goto LAB_82645de0;
    }
  }
  uVar5 = 0x20;
  uVar6 = 0x50;
LAB_82645de0:
  uVar8 = (uVar5 + param_4) - 1 & ~(uVar5 - 1);
  trapWord(6,uVar5,0);
  if ((int)param_3 != 0) {
    piVar3 = (int *)(param_1 + 0x33e4);
    puVar4 = (unsigned int *)(param_1 + 0x336c);
    do {
      puVar2 = puVar4 + 1;
      trapWord(6,uVar5,0);
      puVar4 = puVar4 + 2;
      trapWord(6,uVar7,0);
      piVar3 = piVar3 + 1;
      *piVar3 = (int)(*puVar4 / uVar7) * (int)((uVar8 & 0xffffffff) / uVar5) +
                (int)(*puVar2 / uVar5);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *(int *)(param_1 + 0x3424) = (int)uVar8;
  trapWord(6,uVar6,0);
  *(unsigned int *)(param_1 + 0x2880) =
       (unsigned int)((uVar8 & 0xffffffff) << 0x12) | *(unsigned int *)(param_1 + 0x2880) & 0x3ffff;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x100;
  *(int *)(param_1 + 0x3428) = (int)(((uVar6 + param_4) - 1 & 0xffffffff) / uVar6) * (int)uVar6;
  if (((*(unsigned char *)(param_1 + 0x2abf) & 0x20) == 0) &&
     ((*(unsigned int *)(param_1 + 0x2efc) & 0xe0000) == 0x40000)) {
    uVar7 = *(unsigned __int64 *)(param_1 + 0x28) & 0xfffffffffffffeff;
  }
  else {
    uVar7 = *(unsigned __int64 *)(param_1 + 0x28) | 0x100;
  }
  *(unsigned __int64 *)(param_1 + 0x28) = uVar7;
  return;
}

