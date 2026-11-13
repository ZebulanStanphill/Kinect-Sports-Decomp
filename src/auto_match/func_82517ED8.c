#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82518120();
extern int fn_82F56D40();


int fn_82517ED8(int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int **ppuVar6;
  unsigned int *puStack_30;
  unsigned int *apuStack_2c [1];
  
  puStack_30 = *(unsigned int **)(param_2 + 0x28);
  iVar2 = fn_82518120();
  fn_82F56D40(apuStack_2c,iVar2,&puStack_30);
  if ((ZEXT48(apuStack_2c[0]) != (unsigned __int64)*(unsigned int *)(iVar2 + 4)) &&
     (ZEXT48(apuStack_2c[0]) != 0xfffffffffffffff0)) {
    puVar4 = (unsigned int *)apuStack_2c[0][5];
    puVar5 = (unsigned int *)((unsigned int *)apuStack_2c[0][5])[1];
    while (*(char *)((int)puVar5 + 0x69) == '\0') {
      if ((unsigned int)puVar5[4] < param_3) {
        puVar5 = (unsigned int *)puVar5[2];
      }
      else {
        puVar4 = puVar5;
        puVar5 = (unsigned int *)*puVar5;
      }
    }
    puVar5 = (unsigned int *)apuStack_2c[0][5];
    if ((puVar4 == puVar5) || (param_3 < (unsigned int)puVar4[4])) {
      ppuVar6 = &puStack_30;
      puStack_30 = puVar5;
    }
    else {
      ppuVar6 = apuStack_2c;
    }
    puVar1 = *ppuVar6;
    if (((puVar1 != puVar5) && (puVar1[0x18] != 0)) &&
       (puVar5 = (unsigned int *)puVar1[0x18], puVar5 != (unsigned int *)0x0)) {
      iVar2 = param_1;
      if (puVar5 != puVar1 + 0x14) {
        iVar2 = 0;
      }
      apuStack_2c[0] = puVar4;
      uVar3 = (**(int (***)())*puVar5)(puVar5,iVar2);
      *(unsigned int *)(param_1 + 0x10) = uVar3;
      return param_1;
    }
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  return param_1;
}

