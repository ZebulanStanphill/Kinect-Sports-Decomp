extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_830A7198(unsigned char *param_1,char param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  if (*param_1 == 0) {
    return;
  }
  puVar5 = (unsigned int *)(param_4 + 0x80);
  puVar4 = (unsigned int *)(param_3 + 0x90);
  puVar6 = (unsigned int *)(param_3 + 0x70);
  lVar7 = 3;
  uVar3 = 0;
  do {
    if ((*param_1 >> (uVar3 & 0x3f) & 3) != 0) {
      puVar6[-4] = uVar2;
      *puVar6 = uVar2;
      puVar6[4] = uVar2;
      puVar6[8] = uVar2;
      puVar6[0xc] = uVar2;
      puVar6[0x10] = uVar2;
      *puVar4 = uVar1;
      if (param_2 != '\0') {
        puVar5[-8] = uVar2;
        *(unsigned int *)((param_4 - param_3) + (int)puVar6) = uVar2;
        *puVar5 = uVar2;
        puVar5[4] = uVar2;
        puVar5[8] = uVar2;
        puVar5[0xc] = uVar2;
      }
    }
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    uVar3 = uVar3 + 2;
    puVar4 = puVar4 + 5;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

