#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82586BD0();
extern int fn_82F65C10();
extern unsigned int uStack_28;


unsigned int fn_82586A48(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int **ppuVar8;
  unsigned int *puVar9;
  unsigned int *apuStack_30 [2];
  unsigned __int64 uStack_28;
  
  iVar4 = fn_82586BD0();
  uStack_28 = fn_82F65C10(param_1 & 0x7fffffff ^ 0x5eadbeef,0x1f31d);
  uVar7 = (uStack_28 & 0xffffffff) * 0x41a7 + (uStack_28 >> 0x20) * -0xb14;
  if ((__int64)uVar7 < 0) {
    uVar7 = uVar7 - 0x80000001;
  }
  uVar7 = *(unsigned int *)(iVar4 + 0x20) & uVar7;
  if (*(unsigned int *)(iVar4 + 0x24) <= uVar7) {
    uVar7 = (uVar7 - (*(unsigned int *)(iVar4 + 0x20) >> 1)) - 1;
  }
  iVar3 = (int)((uVar7 & 0xffffffff) << 3);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  puVar2 = *(unsigned int **)(iVar3 + *(int *)(iVar4 + 0x10));
  apuStack_30[0] = puVar2;
  while( true ) {
    puVar6 = puVar1;
    if (puVar2 != puVar1) {
      puVar6 = (unsigned int *)**(unsigned int **)(iVar3 + *(int *)(iVar4 + 0x10) + 4);
    }
    puVar9 = puVar1;
    if (apuStack_30[0] == puVar6) goto LAB_82586b34;
    if ((int)param_1 <= (int)apuStack_30[0][2]) break;
    apuStack_30[0] = (unsigned int *)*apuStack_30[0];
  }
  if ((int)param_1 < (int)apuStack_30[0][2]) {
    uStack_28 = CONCAT44(puVar1,(unsigned int)uStack_28);
    ppuVar8 = (unsigned int **)&uStack_28;
  }
  else {
    ppuVar8 = apuStack_30;
  }
  puVar9 = *ppuVar8;
LAB_82586b34:
  uVar5 = 0;
  if (puVar9 != puVar1) {
    uVar5 = puVar9[3];
  }
  return uVar5;
}

