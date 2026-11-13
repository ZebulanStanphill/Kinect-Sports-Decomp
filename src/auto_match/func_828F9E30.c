typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F65390();
extern int fn_82F66A80();
extern int fn_82F68CC0();
extern int fn_82F6B020();
extern int fn_82F6DF30();
extern int fn_82F6E8D4();
extern unsigned int lbl_82029758;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


unsigned __int64 fn_828F9E30(int param_1,unsigned __int64 param_2,double *param_3)

{
  char cVar1;
  unsigned int *puVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  char *pcVar11;
  __int64 lVar10;
  unsigned __int64 uVar12;
  char *pcVar13;
  double dVar14;
  
  puVar2 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0xa0);
  *puVar2 = register0x0000000c;
  bVar4 = false;
  if (((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4)) &&
     (iVar5 = fn_82F66A80(*(char *)param_2), uVar12 = param_2, iVar5 != 0)) {
    do {
      uVar12 = uVar12 + 1;
      if ((unsigned __int64)*(unsigned int *)(param_1 + 4) <= (uVar12 & 0xffffffff)) break;
      iVar5 = fn_82F66A80(*(char *)uVar12);
    } while (iVar5 != 0);
    uVar6 = *(unsigned int *)(param_1 + 4);
    if (((uVar12 & 0xffffffff) < (unsigned __int64)uVar6) && (*(char *)uVar12 == '.')) {
      while( true ) {
        uVar12 = uVar12 + 1;
        if (((unsigned __int64)uVar6 <= (uVar12 & 0xffffffff)) ||
           (iVar5 = fn_82F66A80(*(unsigned char *)uVar12), iVar5 == 0)) break;
        uVar6 = *(unsigned int *)(param_1 + 4);
      }
    }
    else {
      bVar4 = true;
    }
LAB_828f9f2c:
    pcVar13 = (char *)uVar12;
    pcVar11 = (char *)(uVar12 + 1);
    if (((uVar12 + 1 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4)) &&
       ((iVar5 = fn_82F6DF30(*pcVar13), iVar5 == 0x65 &&
        (iVar5 = fn_82F66A80(*pcVar11), iVar5 != 0)))) {
      uVar12 = uVar12 + 2;
      while (((uVar12 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4) &&
             (iVar5 = fn_82F66A80(*(unsigned char *)uVar12), iVar5 != 0))) {
        uVar12 = uVar12 + 1;
      }
    }
    else if (((uVar12 + 2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4)) &&
            ((iVar5 = fn_82F6DF30(*pcVar13), iVar5 == 0x65 &&
             (((cVar1 = *pcVar11, cVar1 == '+' || (cVar1 == '-')) &&
              (iVar5 = fn_82F66A80(*(unsigned char *)(uVar12 + 2)), iVar5 != 0)))))) {
      uVar12 = uVar12 + 3;
      while (((uVar12 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4) &&
             (iVar5 = fn_82F66A80(*(unsigned char *)uVar12), iVar5 != 0))) {
        uVar12 = uVar12 + 1;
      }
    }
    else {
      if (*pcVar13 == '#') {
        puVar8 = (unsigned int *)&lbl_82029758;
        do {
          pcVar11 = (char *)*puVar8;
          pcVar13 = pcVar11;
          do {
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 != '\0');
          uVar7 = ZEXT48(pcVar13 + (-1 - (int)pcVar11));
          if (((uVar7 + param_2 & 0xffffffff) <= (unsigned __int64)*(unsigned int *)(param_1 + 4)) &&
             (iVar5 = fn_82F65390(param_2,pcVar11,uVar7), iVar5 == 0)) {
            *param_3 = (double)(float)puVar8[1];
            return uVar7;
          }
          piVar3 = puVar8 + 3;
          puVar8 = puVar8 + 2;
        } while (*piVar3 != 0);
      }
      if (bVar4) goto LAB_828fa0d4;
    }
    if (param_3 != (double *)0x0) {
      lVar10 = uVar12 - param_2;
      uVar7 = -(lVar10 + 1) & 0xfffffff0;
      fn_82F6E8D4();
      lVar9 = (ZEXT48(&stack0x00000000) - 0xa0) + uVar7;
      *(unsigned int *)lVar9 = *puVar2;
      lVar9 = lVar9 + 0x50;
      fn_82F68CC0(lVar9,param_2,lVar10);
      *(unsigned char *)((int)lVar9 + (int)lVar10) = 0;
      dVar14 = (double)fn_82F6B020(lVar9);
      *param_3 = dVar14;
    }
    uVar12 = uVar12 - param_2;
  }
  else {
    if (((param_2 + 1 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4)) &&
       ((*(char *)param_2 == '.' && (iVar5 = fn_82F66A80(*(unsigned char *)(param_2 + 1)), iVar5 != 0)
        ))) {
      uVar12 = param_2 + 2;
      while (((uVar12 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4) &&
             (iVar5 = fn_82F66A80(*(unsigned char *)uVar12), iVar5 != 0))) {
        uVar12 = uVar12 + 1;
      }
      goto LAB_828f9f2c;
    }
LAB_828fa0d4:
    uVar12 = 0;
  }
  return uVar12;
}

