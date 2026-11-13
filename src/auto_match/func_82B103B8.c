#define true 1
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B0FF30();
extern int fn_82B84350();


unsigned int fn_82B103B8(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int *piVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  
  uVar3 = fn_82B84350(param_1,*(unsigned int *)(param_2 + 0x1c),0,
                            *(unsigned int *)(param_2 + 8) >> 0xe & 7);
  uVar14 = uVar3 & 0xfffffffe;
  puVar8 = (unsigned int *)((param_2 & 0xfffffffe) + 0x24);
  iVar12 = 0;
  uVar10 = 0;
  *(unsigned int *)(uVar14 + 0x24) = *puVar8;
  *(unsigned int *)(*puVar8 & 0xfffffffe) = uVar14;
  *(unsigned int *)(uVar14 + 0x28) = param_2 & 0xfffffffe;
  *puVar8 = uVar14 + 0x28;
  piVar11 = (int *)(param_2 + 0x2c);
  do {
    uVar14 = *(unsigned int *)(param_2 + 8) >> 0x13 & 7;
    if (uVar14 <= uVar10) {
      fn_82B0FF30(param_1,param_2,uVar3);
      return uVar3;
    }
    puVar8 = (unsigned int *)*piVar11;
    uVar1 = puVar8[3];
    piVar7 = (int *)(param_2 + 0x2c);
    for (uVar6 = 0; uVar6 < uVar14; uVar6 = uVar6 + 1) {
      puVar4 = (unsigned int *)*piVar7;
      if (puVar8 == puVar4) goto LAB_82b10484;
      if (uVar1 == puVar4[3]) goto LAB_82b1047c;
      piVar7 = piVar7 + 1;
    }
    puVar4 = (unsigned int *)0x0;
LAB_82b1047c:
    if (puVar8 == puVar4) {
LAB_82b10484:
      uVar6 = 0;
      uVar14 = *(unsigned int *)(uVar1 + 8) >> 1 & 0xf;
      if ((*(unsigned int *)(uVar1 + 8) & 0x1c000) != 0) {
        puVar13 = (unsigned int *)((iVar12 + 10) * 4 + uVar3);
        do {
          uVar9 = uVar14 & ~(uVar14 - 1);
          uVar14 = uVar14 - uVar9;
          puVar4 = (unsigned int *)fn_82AD17B0(param_1,uVar1);
          uVar2 = (unsigned int)((-LZCOUNT(uVar9) - 1U & 0xffffffff) << 5);
          uVar9 = *puVar4;
          *puVar4 = uVar2 & 0x360 | 0x2001c80 | uVar9 & 0xf3fffc9f;
          *puVar4 = uVar2 & 0x360 | 0x2001c80 | uVar9 & 0xf3fffc80 | *puVar8 & 0x1f;
          uVar5 = fn_82AD1978(uVar3,puVar4);
          puVar13 = puVar13 + 1;
          *puVar13 = uVar5;
          uVar6 = uVar6 + 1;
          iVar12 = iVar12 + 1;
        } while (uVar6 < (*(unsigned int *)(uVar1 + 8) >> 0xe & 7));
      }
    }
    uVar10 = uVar10 + 1;
    piVar11 = piVar11 + 1;
  } while( true );
}

