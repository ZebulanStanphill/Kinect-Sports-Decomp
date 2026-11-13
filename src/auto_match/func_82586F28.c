#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82F65C10();
extern unsigned int uStack_28;


int * fn_82586F28(int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int **ppuVar6;
  unsigned int *apuStack_30 [2];
  unsigned __int64 uStack_28;
  
  uStack_28 = fn_82F65C10(*param_3 & 0x7fffffff ^ 0x5eadbeef,0x1f31d);
  uVar5 = (uStack_28 & 0xffffffff) * 0x41a7 + (uStack_28 >> 0x20) * -0xb14;
  if ((__int64)uVar5 < 0) {
    uVar5 = uVar5 - 0x80000001;
  }
  uVar5 = *(unsigned int *)(param_2 + 0x20) & uVar5;
  if (*(unsigned int *)(param_2 + 0x24) <= uVar5) {
    uVar5 = (uVar5 - (*(unsigned int *)(param_2 + 0x20) >> 1)) - 1;
  }
  iVar3 = (int)((uVar5 & 0xffffffff) << 3);
  puVar1 = *(unsigned int **)(param_2 + 4);
  puVar2 = *(unsigned int **)(iVar3 + *(int *)(param_2 + 0x10));
  apuStack_30[0] = puVar2;
  while( true ) {
    puVar4 = puVar1;
    if (puVar2 != puVar1) {
      puVar4 = (unsigned int *)**(unsigned int **)(iVar3 + *(int *)(param_2 + 0x10) + 4);
    }
    if (apuStack_30[0] == puVar4) break;
    if (*param_3 <= (unsigned int)apuStack_30[0][2]) {
      if (*param_3 < (unsigned int)apuStack_30[0][2]) {
        uStack_28 = CONCAT44(puVar1,(unsigned int)uStack_28);
        ppuVar6 = (unsigned int **)&uStack_28;
      }
      else {
        ppuVar6 = apuStack_30;
      }
      *param_1 = (int)*ppuVar6;
      return param_1;
    }
    apuStack_30[0] = (unsigned int *)*apuStack_30[0];
  }
  *param_1 = (int)puVar1;
  return param_1;
}

