typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82359C18();
extern int fn_823FAB00();
extern int fn_823FACD8();
extern int fn_8265CA20();


unsigned int * fn_823FA890(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  bool bVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int *apuStack_50 [20];
  
  puVar3 = *(unsigned int **)(param_2 + 4);
  lVar4 = 1;
  if (*(char *)((int)puVar3[1] + 0x49) == '\0') {
    puVar1 = (unsigned int *)puVar3[1];
    do {
      puVar3 = puVar1;
      if ((*(unsigned int *)(param_3 + 0x10) < (unsigned int)puVar3[4]) ||
         ((*(unsigned int *)(param_3 + 0x10) <= (unsigned int)puVar3[4] &&
          (*(int *)(param_3 + 0x14) < (int)puVar3[5])))) {
        lVar4 = 1;
      }
      else {
        lVar4 = 0;
      }
      if (lVar4 == 0) {
        puVar1 = (unsigned int *)puVar3[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar3;
      }
    } while (*(char *)((int)puVar1 + 0x49) == '\0');
  }
  apuStack_50[0] = puVar3;
  if (lVar4 != 0) {
    if (puVar3 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      lVar4 = 1;
      goto LAB_823fa940;
    }
    fn_823FACD8(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (((unsigned int)apuStack_50[0][4] < *(unsigned int *)(param_3 + 0x10)) ||
     (((unsigned int)apuStack_50[0][4] <= *(unsigned int *)(param_3 + 0x10) &&
      ((int)apuStack_50[0][5] < *(int *)(param_3 + 0x14))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    fn_82359C18(param_3 + 0x30);
    fn_82359C18(param_3 + 0x18);
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_823fa940:
  puVar3 = (unsigned int *)fn_823FAB00(apuStack_50,param_2,lVar4,puVar3,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

