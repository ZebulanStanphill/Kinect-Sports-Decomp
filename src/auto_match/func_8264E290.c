typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))


void fn_8264E290(int param_1,unsigned int *param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  
  iVar2 = *(int *)(param_1 + 4);
  do {
    puVar3 = (unsigned int *)*param_2;
    puVar9 = param_2 + 1;
    if (puVar9 < puVar3) {
      iVar5 = iVar2 + -1;
      param_2 = param_2 + 3;
      do {
        uVar6 = 0;
        puVar4 = (unsigned int *)*puVar9;
        puVar8 = (unsigned int *)(iVar5 * 0x10 + param_1 + 0xc);
        iVar7 = iVar5;
        do {
          uVar6 = uVar6 << 2;
          if ((((puVar8[-1] < (*(unsigned short *)((int)param_2 + -2) + 1) * 8) &&
               ((unsigned int)*(unsigned short *)(param_2 + -1) << 3 < puVar8[1])) &&
              (*puVar8 < ((unsigned short)*param_2 + 1) * 8)) && ((unsigned int)*(unsigned short *)param_2 << 3 < puVar8[2])
             ) {
            uVar6 = uVar6 | 3;
          }
          bVar1 = iVar7 != 0;
          iVar7 = iVar7 + -1;
          puVar8 = puVar8 + -4;
        } while (bVar1);
        *puVar4 = uVar6;
        dataCacheBlockFlush(((unsigned __int64)((unsigned int)puVar4 >> 0x14) + 0x200 & 0x1000) +
                            (ZEXT48(puVar4) & 0x1fffffff) + -0x40000000);
        puVar9 = puVar9 + 4;
        param_2 = param_2 + 4;
      } while (puVar9 < puVar3);
    }
    param_2 = (unsigned int *)*puVar9;
  } while (param_2 != (unsigned int *)0xc0000000);
  return;
}

