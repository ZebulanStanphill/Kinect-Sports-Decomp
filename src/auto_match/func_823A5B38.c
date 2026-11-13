extern int fn_82359928();
extern int fn_82398668();
extern int fn_823987C8();
extern int fn_8239FF60();
extern int fn_8249ABC0();
extern int fn_8249D980();
extern unsigned int lbl_8218E8FC;


void fn_823A5B38(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  double dVar4;
  
  fn_823987C8(*(unsigned int *)(param_1 + 8));
  fn_82398668(*(unsigned int *)(param_1 + 8));
  (**(int (***)())(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x50))();
  iVar1 = *(int *)(param_1 + 8);
  *(unsigned int *)(iVar1 + 0x220) = 0;
  *(unsigned int *)(iVar1 + 0x224) = 0;
  *(unsigned int *)(iVar1 + 0x228) = 0;
  *(unsigned int *)(iVar1 + 0x22c) = 0;
  *(unsigned int *)(iVar1 + 0x230) = 0;
  *(unsigned int *)(iVar1 + 0x238) = 0;
  *(unsigned int *)(iVar1 + 0x23c) = 0;
  *(unsigned int *)(iVar1 + 0x234) = 0;
  dVar4 = (double)(**(int (***)())(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0xa0))();
  iVar1 = *(int *)(param_1 + 8);
  *(float *)(iVar1 + 200) = (float)dVar4;
  *(float *)(iVar1 + 0xc4) = (float)dVar4;
  *(unsigned int *)(iVar1 + 0xbc) = 1;
  *(unsigned int *)(iVar1 + 0xc0) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0xac) != 1) {
    iVar3 = fn_8249ABC0();
    if (*(int *)(iVar1 + 0xb4) != -1) {
      fn_8249D980(*(unsigned int *)(iVar3 + 0x110));
      *(unsigned int *)(iVar1 + 0xb4) = 0xffffffff;
    }
    *(unsigned int *)(iVar1 + 0xac) = 1;
  }
  fn_82359928(*(unsigned int *)(param_1 + 8),1);
  if (*(int *)(*(int *)(param_1 + 8) + 0x178) != 0) {
    fn_8239FF60(*(unsigned int *)(*(int *)(param_1 + 8) + 0x2dc),0xc);
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  uVar2 = lbl_8218E8FC;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x40) = uVar2;
  *(unsigned int *)(param_1 + 0x20) = 1;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  return;
}

