typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82308E08();


unsigned __int64 fn_8230C220(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned int **ppuVar5;
  unsigned int *puStack_10;
  unsigned int *apuStack_c [3];
  
  puStack_10 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)puStack_10[1] + 0x49) == '\0') {
    puVar2 = (unsigned int *)puStack_10[1];
    do {
      if (((unsigned int)puVar2[4] < *param_2) ||
         (((unsigned int)puVar2[4] <= *param_2 && ((int)puVar2[5] < (int)param_2[1])))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        puVar1 = (unsigned int *)puVar2[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar2;
        puStack_10 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x49) == '\0');
  }
  puVar2 = *(unsigned int **)(param_1 + 4);
  if (puStack_10 != puVar2) {
    if ((*param_2 < (unsigned int)puStack_10[4]) ||
       ((*param_2 <= (unsigned int)puStack_10[4] && ((int)param_2[1] < (int)puStack_10[5])))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      ppuVar5 = &puStack_10;
      goto LAB_8230c2ec;
    }
  }
  apuStack_c[0] = puVar2;
  ppuVar5 = apuStack_c;
LAB_8230c2ec:
  if (*ppuVar5 == puVar2) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_82308E08(*ppuVar5 + 6);
  }
  return uVar4;
}

