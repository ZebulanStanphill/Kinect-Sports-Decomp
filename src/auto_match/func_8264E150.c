typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))


void fn_8264E150(int param_1,unsigned int *param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned short *puVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar9;
  unsigned int *puVar10;
  
  iVar2 = *(int *)(param_1 + 4);
  do {
    puVar3 = (unsigned int *)*param_2;
    for (param_2 = param_2 + 1; param_2 < puVar3; param_2 = param_2 + 2) {
      puVar4 = (unsigned int *)param_2[1];
      uVar6 = (unsigned __int64)*param_2 & 0xfffffffc;
      lVar9 = uVar6 - 0x40000000;
      dataCacheBlockFlush(lVar9);
      if ((*param_2 & 1) == 0) {
        iVar7 = iVar2 + -1;
        puVar5 = (unsigned short *)lVar9;
        uVar8 = 0;
        puVar10 = (unsigned int *)(iVar7 * 0x10 + param_1 + 0xc);
        do {
          uVar8 = uVar8 << 2;
          if ((((puVar10[-1] < (puVar5[1] + 1) * 8) && ((unsigned int)*puVar5 << 3 < puVar10[1])) &&
              (*puVar10 < (puVar5[3] + 1) * 8)) && ((unsigned int)puVar5[2] << 3 < puVar10[2])) {
            uVar8 = uVar8 | 3;
          }
          bVar1 = iVar7 != 0;
          iVar7 = iVar7 + -1;
          puVar10 = puVar10 + -4;
        } while (bVar1);
      }
      else {
        iVar7 = (int)uVar6;
        uVar8 = -(unsigned int)(((((unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffed) << 0x18 |
                           (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffee) << 0x10 |
                           (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffef) << 8 |
                          (unsigned __int64)*(unsigned char *)(iVar7 + -0x3ffffff0)) -
                         ((unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffcd) << 0x18 |
                          (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffce) << 0x10 |
                          (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffcf) << 8 |
                         (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffd0))) -
                        ((unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffc9) << 0x18 |
                         (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffca) << 0x10 |
                         (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffcb) << 8 |
                        (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffcc))) +
                        ((unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffe9) << 0x18 |
                         (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffea) << 0x10 |
                         (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffeb) << 8 |
                        (unsigned __int64)*(unsigned char *)(iVar7 + -0x3fffffec)) != 0);
      }
      *puVar4 = uVar8;
      dataCacheBlockFlush(((unsigned __int64)((unsigned int)puVar4 >> 0x14) + 0x200 & 0x1000) +
                          (ZEXT48(puVar4) & 0x1fffffff) + -0x40000000);
    }
    param_2 = (unsigned int *)*param_2;
  } while (param_2 != (unsigned int *)0xc0000000);
  return;
}

