#define true 1
extern int fn_82AD17B0();
extern int fn_82AD1978();


int fn_82B10550(unsigned __int64 param_1,int *param_2,int param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int uVar8;
  int *piVar9;
  unsigned int uVar10;
  
  uVar8 = 0;
  piVar9 = (int *)(param_4 + 0x2c);
  do {
    uVar10 = *(unsigned int *)(param_4 + 8) >> 0x13 & 7;
    if (uVar10 <= uVar8) {
      return param_3;
    }
    puVar1 = (unsigned int *)*piVar9;
    uVar2 = puVar1[3];
    piVar7 = (int *)(param_4 + 0x2c);
    for (uVar6 = 0; uVar6 < uVar10; uVar6 = uVar6 + 1) {
      puVar4 = (unsigned int *)*piVar7;
      if (puVar1 == puVar4) goto LAB_82b105d0;
      if (puVar4[3] == uVar2) goto LAB_82b105c8;
      piVar7 = piVar7 + 1;
    }
    puVar4 = (unsigned int *)0x0;
LAB_82b105c8:
    if (puVar1 == puVar4) {
LAB_82b105d0:
      for (iVar5 = *param_2; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        if (*(unsigned int *)(iVar5 + 0xc) == uVar2) goto LAB_82b10684;
      }
      piVar7 = param_2 + param_3 + 10;
      for (uVar10 = *(unsigned int *)(uVar2 + 8) >> 1 & 0xf; uVar10 != 0;
          uVar10 = uVar10 - (uVar10 & ~(uVar10 - 1))) {
        puVar4 = (unsigned int *)fn_82AD17B0(param_1,uVar2);
        uVar3 = (unsigned int)((0x1fU - LZCOUNT(uVar10 & ~(uVar10 - 1)) & 0xffffffff) << 5);
        uVar6 = *puVar4;
        *puVar4 = uVar3 & 0x360 | 0x2001c80 | uVar6 & 0xf3fffc9f;
        *puVar4 = uVar3 & 0x360 | 0x2001c80 | uVar6 & 0xf3fffc80 | *puVar1 & 0x1f;
        iVar5 = fn_82AD1978(param_2,puVar4);
        piVar7 = piVar7 + 1;
        *piVar7 = iVar5;
        param_3 = param_3 + 1;
      }
    }
LAB_82b10684:
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 1;
  } while( true );
}

