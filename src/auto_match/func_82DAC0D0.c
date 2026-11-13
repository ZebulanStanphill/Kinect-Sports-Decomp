extern int fn_82DAD448();
extern int fn_82DAF190();
extern unsigned int iStack_40;
extern unsigned int iStack_44c;
extern unsigned int iStack_450;


void fn_82DAC0D0(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned int **ppuVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  int iVar10;
  int iVar11;
  unsigned short uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  int iStack_450;
  int iStack_44c;
  unsigned int *apuStack_444 [257];
  int iStack_40;
  
  uVar12 = *(short *)(param_1 + 0x12) - 1;
  if (*(short *)(param_1 + 0x12) == 0) {
    iVar11 = *(char *)(param_2 + 0x10) + param_2;
    iVar10 = *(char *)(param_3 + 0x10) + param_3;
    uVar12 = *(unsigned short *)(iVar10 + 0xaa);
    if (*(unsigned short *)(iVar11 + 0xaa) < *(unsigned short *)(iVar10 + 0xaa)) {
      uVar12 = *(unsigned short *)(iVar11 + 0xaa);
    }
    puVar7 = param_5 + 4;
    if (puVar7 < (unsigned int *)*param_5) {
      iVar2 = *(int *)(param_1 + 0x20);
      ppuVar6 = apuStack_444;
      lVar8 = (unsigned __int64)(unsigned int)((int)*param_5 + (-1 - (int)puVar7)) / 0x30 + 1;
      do {
        bVar1 = *(unsigned char *)(puVar7[8] + iVar2);
        if (bVar1 == 0xff) {
          puVar9 = (unsigned int *)0x0;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x3c);
          puVar9 = (unsigned int *)((unsigned int)*(unsigned char *)(iVar3 + 10) * (int)(short)(unsigned short)bVar1 +
                            (unsigned int)*(unsigned short *)(iVar3 + 6) * 0x20 + iVar3 + 0x30);
        }
        ppuVar6 = ppuVar6 + 1;
        *ppuVar6 = puVar9;
        puVar7 = puVar7 + 0xc;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iStack_450 = param_2;
    iStack_44c = param_3;
    apuStack_444[0] = param_5;
    iStack_40 = param_1;
    fn_82DAF190(*(unsigned int *)(param_1 + 0xc),&iStack_450);
    if (*(short *)(iVar11 + 0x204) != 0) {
      fn_82DAD448(iVar11,&iStack_450);
    }
    if (*(short *)(iVar10 + 0x204) != 0) {
      fn_82DAD448(iVar10,&iStack_450);
    }
    (**(int (***)())(*(int *)param_5[1] + 0x14))((int *)param_5[1],*(unsigned int *)(param_1 + 0x38),8);
  }
  puVar7 = param_5 + 4;
  *(unsigned short *)(param_1 + 0x12) = uVar12;
  if (puVar7 < (unsigned int *)*param_5) {
    lVar8 = (unsigned __int64)(unsigned int)((int)*param_5 + (-1 - (int)puVar7)) / 0x30 + 1;
    do {
      puVar4 = (unsigned int *)(in_r0 + (int)puVar7 & 0xfffffff0);
      uVar13 = puVar4[1];
      uVar14 = puVar4[2];
      uVar15 = puVar4[3];
      iVar10 = (unsigned int)*(unsigned char *)(puVar7[8] + *(int *)(param_1 + 0x20)) * 0x20 +
               *(int *)(param_1 + 0x3c);
      puVar5 = (unsigned int *)(in_r0 + iVar10 + 0x30 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar13;
      puVar5[2] = uVar14;
      puVar5[3] = uVar15;
      puVar4 = (unsigned int *)((unsigned int)(puVar7 + 4) & 0xfffffff0);
      uVar13 = puVar4[1];
      uVar14 = puVar4[2];
      uVar15 = puVar4[3];
      puVar7 = puVar7 + 0xc;
      puVar5 = (unsigned int *)(iVar10 + 0x40U & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar13;
      puVar5[2] = uVar14;
      puVar5[3] = uVar15;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

