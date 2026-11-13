typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8225F028();
extern int fn_825143C8();
extern int fn_8265CA20();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_82514288(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned char bVar8;
  char in_RESERVE;
  unsigned char bVar9;
  unsigned int *apuStack_50 [20];
  
  puVar4 = *(unsigned int **)(param_2 + 4);
  bVar8 = 1;
  if (*(char *)((int)puVar4[1] + 0x19) == '\0') {
    puVar1 = (unsigned int *)puVar4[1];
    do {
      puVar4 = puVar1;
      bVar8 = -(*(unsigned int *)(param_3 + 0xc) < (unsigned int)puVar4[3]) & 1;
      if (bVar8 == 0) {
        puVar1 = (unsigned int *)puVar4[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar4;
      }
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  bVar9 = (bVar8 == 0) << 1;
  apuStack_50[0] = puVar4;
  if (bVar8 != 0) {
    if (puVar4 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      bVar8 = 1;
      goto LAB_82514318;
    }
    fn_8225F028(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (*(unsigned int *)(param_3 + 0xc) <= (unsigned int)apuStack_50[0][3]) {
    piVar2 = *(int **)(param_3 + 0x14);
    if (ZEXT48(piVar2) != 0) {
      lVar5 = ZEXT48(piVar2) + 8;
      do {
        puVar6 = (unsigned int *)lVar5;
        lVar7 = (unsigned __int64)*puVar6 - 1;
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(lVar7,0,lVar5);
          *puVar6 = uVar3;
          bVar9 = 2;
        }
      } while (!(bool)(bVar9 >> 1 & 1));
      if ((int)lVar7 == 0) {
        (**(int (***)())(*piVar2 + 4))();
      }
    }
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82514318:
  puVar4 = (unsigned int *)fn_825143C8(apuStack_50,param_2,bVar8,puVar4,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar4;
  return param_1;
}

