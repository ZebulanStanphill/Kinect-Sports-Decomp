extern unsigned int lbl_8317F3F8;


void fn_82CF0460(int param_1,int param_2,int param_3)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int *piVar4;
  __int64 lVar5;
  
  uVar2 = 0;
  puVar1 = (&lbl_8317F3F8)[param_1];
  do {
    puVar3 = (unsigned int *)(uVar2 + param_3);
    lVar5 = 7;
    piVar4 = (int *)(puVar1 + 0x18);
    do {
      if ((*piVar4 << uVar2 & 0xf0000000U) != 0) {
        *puVar3 = 0xff000000;
      }
      piVar4 = piVar4 + -1;
      puVar3 = puVar3 + param_2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar2 = uVar2 + 4;
  } while ((int)uVar2 < 0x20);
  return;
}

