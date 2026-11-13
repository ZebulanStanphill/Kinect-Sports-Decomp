extern unsigned int *auStack_60;
extern int fn_82A1BFA8();
extern int fn_82BE5570();
extern int fn_82CE21D8();


void fn_82BE55D8(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned char *puVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned char auStack_60 [96];
  
  uVar7 = 0;
  do {
    iVar8 = uVar7 * 0x14;
    *(unsigned int *)(iVar8 + param_1) = 0;
    puVar9 = (unsigned int *)(iVar8 + param_1);
    iVar2 = fn_82A1BFA8(uVar7);
    if (iVar2 == 2) {
      iVar2 = fn_82CE21D8(uVar7,0x21,auStack_60);
      if (iVar2 == 0) {
        uVar6 = 0;
        *puVar9 = 1;
        do {
          puVar5 = auStack_60 + (int)uVar6 + 1;
          cVar3 = fn_82BE5570(auStack_60[(int)uVar6]);
          uVar4 = (unsigned __int64)cVar3;
          cVar3 = fn_82BE5570(*puVar5);
          iVar2 = (int)uVar6;
          uVar1 = uVar6 & 1;
          uVar6 = uVar6 + 2;
          *(char *)((iVar2 >> 1) + (unsigned int)(iVar2 < 0 && uVar1 != 0) + iVar8 + param_1 + 4) =
               (char)((uVar4 & 0xffffffff) << 4) + cVar3;
        } while ((int)uVar6 < 0x20);
      }
    }
    else if (iVar2 == 1) {
      *puVar9 = 1;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 4);
  return;
}

