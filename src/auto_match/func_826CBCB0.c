extern unsigned int *auStack_20;
extern int fn_8267B890();


unsigned int *fn_826CBCB0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int auStack_20 [2];
  
  puVar2 = (unsigned int *)param_1[3];
  if (puVar2 != (unsigned int *)0) {
    param_1[3] = *puVar2;
  } else {

    uVar1 = param_1[2];
    if (uVar1 < 0x32) {
      iVar3 = uVar1 + 1;
      puVar2 = (unsigned int *)(uVar1 * 0x38 + param_1[1]);
    }
    else {
      auStack_20[0] = 2;
      puVar2 = (unsigned int *)fn_8267B890(param_1[4],0xaf4,auStack_20);
      puVar2[0xaf0/4] = 0;
      if (param_1[1] != 0) {
        *(unsigned int **)(param_1[1] + 0xaf0) = puVar2;
      } else {
        *param_1 = puVar2;
      }
      iVar3 = 1;
      param_1[1] = puVar2;
    }
    param_1[2] = iVar3;
    }
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[2] = 0xffffffff;
    { unsigned int *v = puVar2 + 4;
      v[0] = 0;
      v[1] = 0; }
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(unsigned char *)(puVar2 + 0xd) = 0xff;
    *(unsigned char *)((int)puVar2 + 0x35) = 0;
  }
  return puVar2;
}

