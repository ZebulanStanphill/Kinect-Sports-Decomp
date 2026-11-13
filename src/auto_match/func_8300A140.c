typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_83006E68();
extern int fn_830177C8();
extern int fn_8302AF48();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


double fn_8300A140(int param_1)

{
  unsigned int *puVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  bVar2 = false;
  dVar5 = (double)lbl_821AAD20;
  dVar6 = dVar5;
  if (((*(unsigned char *)(param_1 + 0x3d) & 4) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    iVar3 = fn_83006E68();
    if ((iVar3 != 0) && (iVar3 = fn_8302AF48(), iVar3 == 1)) {
      bVar2 = true;
    }
    dVar6 = (double)*(float *)(*(int *)(param_1 + 0x20) + 4);
  }
  if ((!bVar2) &&
     (dVar6 = (double)(float)((double)(__int64)*(short *)(param_1 + 0x2c) * (double)lbl_82186E6C +
                             dVar6), (*(unsigned int *)(param_1 + 0x40) & 1) != 0)) {
    dVar4 = (double)fn_830177C8(lbl_832642FC,param_1,0,0);
    dVar6 = (double)(float)(dVar4 + dVar6);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    dVar6 = (double)(float)((double)*(float *)(*(int *)(param_1 + 0x24) + 0x28) + dVar6);
  }
  for (puVar1 = *(unsigned int **)(param_1 + 0x7c); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    dVar5 = (double)(float)((double)(float)puVar1[5] + dVar5);
  }
  if (dVar5 < (double)*(float *)(param_1 + 0x58)) {
    dVar5 = (double)*(float *)(param_1 + 0x58);
  }
  dVar5 = (double)(float)(dVar5 + dVar6);
  if (*(int *)(param_1 + 0x14) != 0) {
    dVar6 = (double)((int (*)())fn_8300A140)();
    dVar5 = (double)(float)(dVar6 + dVar5);
  }
  return dVar5;
}

