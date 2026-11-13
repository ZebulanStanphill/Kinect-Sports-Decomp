extern unsigned int *auStack_20;
extern int fn_8267BED0();


void fn_827B86F8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int auStack_20 [2];
  
  puVar3 = (unsigned int *)param_1[3];
  if (puVar3 == (unsigned int *)0x0) {
    uVar2 = param_1[2];
    if (uVar2 < 0x7f) {
      iVar4 = uVar2 + 1;
      puVar3 = (unsigned int *)(uVar2 * 0x24 + param_1[1]);
    }
    else {
      auStack_20[0] = 0xc3;
      puVar3 = (unsigned int *)fn_8267BED0(param_1[4],0x11e0,auStack_20);
      puVar3[0x477] = 0;
      if (param_1[1] == 0) {
        *param_1 = puVar3;
      }
      else {
        *(unsigned int **)(param_1[1] + 0x11dc) = puVar3;
      }
      iVar4 = 1;
      param_1[1] = puVar3;
    }
    param_1[2] = iVar4;
  }
  else {
    param_1[3] = *puVar3;
  }
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  puVar3[4] = param_2[4];
  puVar3[5] = param_2[5];
  *(unsigned short *)(puVar3 + 6) = *(unsigned short *)(param_2 + 6);
  *(unsigned short *)((int)puVar3 + 0x1a) = *(unsigned short *)((int)param_2 + 0x1a);
  *(unsigned short *)(puVar3 + 7) = *(unsigned short *)(param_2 + 7);
  *(unsigned short *)((int)puVar3 + 0x1e) = *(unsigned short *)((int)param_2 + 0x1e);
  uVar1 = *(unsigned short *)((int)param_2 + 0x22);
  *(unsigned short *)(puVar3 + 8) = *(unsigned short *)(param_2 + 8);
  *(unsigned short *)((int)puVar3 + 0x22) = uVar1;
  return;
}

