typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8267BE38();
extern int fn_826C6368();
extern unsigned int uStack_30;


unsigned int * fn_8278CE30(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  bool bVar4;
  bool bVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int uStack_30;
  
  puVar2 = uStack_30;
  puVar7 = (unsigned int *)0x0;
  if ((*(unsigned short *)(param_1 + 0x2a) >> 0xb & 1) == 0) {
    bVar5 = true;
    bVar4 = false;
    uStack_30 = (unsigned int *)0x0;
    puVar6 = uStack_30;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x1c);
    bVar5 = false;
    bVar4 = true;
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
    }
    puVar2 = *(unsigned int **)(param_1 + 0x1c);
    puVar6 = puVar2;
    puVar7 = uStack_30;
  }
  uStack_30 = puVar6;
  if ((bVar5) && (puVar7 != (unsigned int *)0x0)) {
    uVar3 = *puVar7;
    *puVar7 = (unsigned int)((unsigned __int64)uVar3 - 1);
    if ((unsigned __int64)uVar3 - 1 == 0) {
      fn_826C6368(puVar7);
      fn_8267BE38(puVar7);
    }
  }
  if ((bVar4) && (puVar2 != (unsigned int *)0x0)) {
    uVar3 = *puVar2;
    *puVar2 = (unsigned int)((unsigned __int64)uVar3 - 1);
    if ((unsigned __int64)uVar3 - 1 == 0) {
      fn_826C6368(puVar2);
      fn_8267BE38(puVar2);
    }
  }
  return uStack_30;
}

