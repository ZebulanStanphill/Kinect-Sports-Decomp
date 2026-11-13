extern int fn_82AD18C0();
extern int fn_82AD1978();


int fn_82AF6BC8(unsigned __int64 param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int *piVar7;
  unsigned int *puVar8;
  int iVar9;
  
  uVar6 = 0;
  if ((*(unsigned int *)(param_2 + 8) & 0x380000) != 0) {
    piVar7 = (int *)(param_2 + 0x2c);
    do {
      uVar5 = 0;
      uVar1 = *(unsigned int *)(*piVar7 + 0xc);
      if (param_4 != 0) {
        piVar4 = (int *)(param_3 + 0x2c);
        iVar9 = param_4;
        do {
          if (((unsigned int *)*piVar4)[3] == uVar1) {
            uVar5 = 1 << (*(unsigned int *)*piVar4 >> 5 & 3) | uVar5;
          }
          piVar4 = piVar4 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      puVar8 = (unsigned int *)((param_4 + 10) * 4 + param_3);
      for (uVar5 = (*(unsigned int *)(uVar1 + 8) >> 1 & 0xf) - uVar5; uVar5 != 0;
          uVar5 = uVar5 - (uVar5 & ~(uVar5 - 1))) {
        uVar2 = fn_82AD18C0(param_1,uVar1,0x1f - LZCOUNT(uVar5 & ~(uVar5 - 1)));
        uVar3 = fn_82AD1978(param_3,uVar2);
        puVar8 = puVar8 + 1;
        *puVar8 = uVar3;
        param_4 = param_4 + 1;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar6 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7));
  }
  return param_4;
}

