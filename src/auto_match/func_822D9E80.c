extern unsigned int *auStack_20;
extern int fn_822C6880();
extern int fn_822C6938();
extern int fn_822C7490();
extern int fn_822CF300();
extern int fn_822CF9D8();
extern int fn_82365BD8();
extern int fn_8250EC68();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;


void fn_822D9E80(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  unsigned char auStack_20 [1];
  
  *(unsigned int *)(param_1 + 0x50) = 0;
  fn_822C6880(*(unsigned int *)(param_1 + 0x24));
  fn_822C6938();
  iVar2 = *(int *)(param_1 + 0x9c);
  dVar4 = (double)fn_822CF9D8(iVar2,0);
  dVar5 = (double)lbl_821CA460;
  dVar3 = (double)lbl_8218E8FC;
  *(float *)(iVar2 + 0x108) = (float)(dVar4 * (double)lbl_82192604 + dVar3);
  *(float *)(iVar2 + 0x10c) = (float)((double)(float)(dVar4 + dVar5) * dVar3);
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar1 = fn_82365BD8(auStack_20,param_1 + 0xd0);
    fn_822C7490(param_1,uVar1);
    *(unsigned int *)(param_1 + 0xb8) = 0;
  }
  if (*(int *)(param_1 + 0x1ac) == 0) {
    fn_8250EC68(param_1 + 0x60);
    *(unsigned int *)(param_1 + 0x1ac) = 1;
  }
  if (*(int *)(*(int *)(param_1 + 0x9c) + 0x24) == 0) {
    fn_822CF300(*(int *)(param_1 + 0x9c),0);
  }
  return;
}

