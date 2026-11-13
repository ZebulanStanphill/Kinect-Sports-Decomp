extern int fn_82AD17B0();


void fn_82B0FE60(unsigned __int64 param_1,int param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  __int64 lVar8;
  
  uVar2 = 0;
  uVar3 = 1;
  uVar6 = 0;
  lVar8 = 0;
  uVar7 = 0;
  if ((int)param_3 != 0) {
    uVar5 = 0;
    piVar4 = (int *)(param_2 + 0x2c);
    uVar6 = 0;
    do {
      if ((uVar3 & param_4) != 0) {
        puVar1 = (unsigned int *)*piVar4;
        if (uVar2 == 0) {
          uVar2 = puVar1[3];
          uVar6 = *puVar1 & 0x1f;
        }
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 & ~(3 << (uVar5 & 0x3f)) | (*puVar1 >> 5 & 3) << (uVar5 & 0x3f);
        uVar5 = uVar5 + 2;
      }
      piVar4 = piVar4 + 1;
      uVar3 = (uVar3 & 0x7fffffff) << 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar1 = (unsigned int *)fn_82AD17B0();
  *puVar1 = (unsigned int)((lVar8 + param_5 & 0xffffffff) << 0x19) & 0xe000000 | *puVar1 & 0xf1ffffff;
  uVar3 = param_5 & 0xffffffff;
  while (uVar3 != 0) {
    uVar7 = uVar7 << 2 | uVar7 & 3;
    param_5 = param_5 - 1;
    uVar3 = param_5;
  }
  *puVar1 = uVar6 | (uVar7 & 0xff) << 5 | *puVar1 & 0xffffe000;
  return;
}

