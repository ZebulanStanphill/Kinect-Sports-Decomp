extern unsigned int lbl_8326183C;


void fn_82F4DB90(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  puVar3 = (unsigned int *)(param_1 + 0x14);
  lVar5 = 6;
  puVar4 = (unsigned int *)(lbl_8326183C + 0x15d4);
  do {
    puVar1 = (unsigned int *)((unsigned int)(puVar4 + 3) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(puVar3 + -5) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar3[-1] = *puVar4;
    puVar1 = puVar4 + -1;
    puVar4 = puVar4 + 0x70;
    *puVar3 = *puVar1;
    puVar3 = puVar3 + 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

