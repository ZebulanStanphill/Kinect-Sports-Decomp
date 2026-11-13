extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8229E090();
extern int fn_8249ABC0();
extern int fn_8249D278();
extern int fn_824FC500();
extern int fn_82529320();
extern int fn_8265CA20();
extern int fn_82672C20();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F844;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82474FE8(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  __int64 lVar3;
  int *piVar4;
  int *piVar5;
  double dVar6;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char uStack_48;
  
  iVar2 = lbl_8327F844;
  if (lbl_8327F844 != 0) {
    *(unsigned int *)(lbl_8327F844 + 0xf0) = 0;
    *(unsigned int *)(iVar2 + 0xf4) = 0;
  }
  iVar2 = fn_8249ABC0();
  puVar1 = *(unsigned int **)(iVar2 + 0xb0);
  if (puVar1 != (unsigned int *)0x0) {
    uStack_50 = 0;
    uStack_4c = 0;
    fn_82273CD8(&uStack_50,2);
    uStack_48 = 0;
    fn_82672C20(*puVar1,0xffffffff821aa9d4,&uStack_50,1);
    fn_82273C88(&uStack_50);
  }
  iVar2 = fn_8249ABC0();
  if (*(int *)(iVar2 + 0x88) == 0) {
    fn_8249ABC0();
    iVar2 = fn_8249ABC0();
    *(unsigned int *)(iVar2 + 0x88) = 1;
    *(unsigned int *)(iVar2 + 0x8c) = 0;
    if (*(int *)(iVar2 + 0xb4) != 0) {
      fn_8229E090(*(int *)(iVar2 + 0xb4),0,0);
      *(unsigned int *)(iVar2 + 0xb4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x9c) != -1) {
    iVar2 = fn_8249ABC0();
    fn_8249D278(*(unsigned int *)(iVar2 + 0xec),*(unsigned int *)(param_1 + 0x9c));
    *(unsigned int *)(param_1 + 0x9c) = 0xffffffff;
  }
  piVar4 = (int *)(param_1 + 0x84);
  piVar5 = (int *)(param_1 + 0x54);
  lVar3 = 2;
  dVar6 = (double)ltcg_pool_0_0f;
  do {
    iVar2 = *piVar5;
    if (iVar2 != 0) {
      fn_824FC500(iVar2);
      fn_8265CA20(iVar2);
      piVar5[1] = (int)(float)dVar6;
      piVar5[2] = (int)(float)dVar6;
      *piVar5 = 0;
      piVar5[3] = (int)(float)dVar6;
      piVar5[5] = 0;
      piVar5[4] = (int)(float)dVar6;
    }
    if (*piVar4 != 0) {
      fn_82529320(*piVar4,0);
      piVar4[1] = (int)(float)dVar6;
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar5 = piVar5 + 6;
    piVar4 = piVar4 + 2;
  } while (lVar3 != 0);
  if (*(int *)(param_1 + 0x94) != 0) {
    fn_82529320(*(int *)(param_1 + 0x94),0);
    *(float *)(param_1 + 0x98) = (float)dVar6;
    *(unsigned int *)(param_1 + 0x94) = 0;
  }
  return;
}

