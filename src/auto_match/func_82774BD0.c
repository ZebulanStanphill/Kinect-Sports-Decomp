extern unsigned int *auStack_20;
extern int fn_8267BED0();


void fn_82774BD0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int auStack_20 [2];
  
  puVar2 = (unsigned int *)param_1[3];
  if (puVar2 == (unsigned int *)0x0) {
    uVar1 = param_1[2];
    if (uVar1 < 0x7f) {
      iVar3 = uVar1 + 1;
      puVar2 = (unsigned int *)(uVar1 * 0x14 + param_1[1]);
    }
    else {
      auStack_20[0] = 0xc4;
      puVar2 = (unsigned int *)fn_8267BED0(param_1[4],0x9f0,auStack_20);
      puVar2[0x27b] = 0;
      if (param_1[1] == 0) {
        *param_1 = puVar2;
      }
      else {
        *(unsigned int **)(param_1[1] + 0x9ec) = puVar2;
      }
      iVar3 = 1;
      param_1[1] = puVar2;
    }
    param_1[2] = iVar3;
  }
  else {
    param_1[3] = *puVar2;
  }
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[4] = 0;
  }
  return;
}

