typedef unsigned char bool;
#define false 0
extern int fn_830177C8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


bool fn_83001CB8(int param_1,unsigned int param_2,int param_3)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  double dVar5;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    return false;
  }
  if ((*(int *)((param_2 + 1) * 0xc + iVar2) != -1) &&
     ((1 << (param_2 + 0x18 & 0x3f) & *(unsigned int *)(param_1 + 0x40)) != 0)) {
    dVar5 = (double)fn_830177C8(lbl_832642FC,param_1,param_2 + 0x18);
    return dVar5 != (double)lbl_821AAD20;
  }
  puVar3 = *(unsigned int **)(param_1 + 0x54);
  if (puVar3 != (unsigned int *)0x0) {
    for (piVar4 = (int *)*puVar3; (piVar4 != (int *)puVar3[1] && (*piVar4 != param_3));
        piVar4 = piVar4 + 2) {
    }
    piVar4 = (int *)(-(unsigned int)((int *)puVar3[1] != piVar4) & (unsigned int)(piVar4 + 1));
    if (piVar4 != (int *)0x0) {
      return (bool)(*(unsigned char *)(*piVar4 + 0x3d) >> (param_2 & 0x3f) & 1);
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    bVar1 = *(unsigned char *)(iVar2 + 0x3c);
  }
  else {
    bVar1 = *(unsigned char *)(*(int *)(param_1 + 0x24) + 0x3d);
  }
  return (bool)(bVar1 >> (param_2 & 0x3f) & 1);
}

