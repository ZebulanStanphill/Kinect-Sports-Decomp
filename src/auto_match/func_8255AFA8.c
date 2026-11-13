typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8251E530();
extern int fn_8255B0D8();
extern int fn_8255B490();
extern int fn_825603C8();
extern int fn_82566E58();
extern int fn_82567088();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83282244;


void fn_8255AFA8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x358);
  if (iVar1 != 0) {
    if ((*(unsigned int **)(param_1 + 0x10))[3] == 0) goto LAB_8255b0a8;
    if ((*(int *)(iVar1 + 0x11c) != 0) ||
       (bVar2 = true, *(float *)(iVar1 + 0x88) < *(float *)(iVar1 + 0x94))) {
      bVar2 = false;
    }
    if (!bVar2) goto LAB_8255b0a8;
    fn_82566E58(**(unsigned int **)(param_1 + 0x10),param_1);
    fn_8251E530((unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_1 + 0x358) = 0;
    *(unsigned int *)(param_1 + 4) = 2;
  }
  if (*(unsigned int **)(param_1 + 0x14) == *(unsigned int **)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 4) != 2) {
      return;
    }
    fn_8255B0D8(param_1);
    *(unsigned int *)(param_1 + 4) = 0;
    return;
  }
  *(unsigned int *)(param_1 + 0x358) = **(unsigned int **)(param_1 + 0x10);
  if ((*(int *)(param_1 + 4) == 0) &&
     (lbl_83282244 = lbl_83282244 | 1, *(int *)(param_1 + 0x1b0) == 0)) {
    fn_825603C8(0,param_1 + 0x30,1);
    *(unsigned int *)(param_1 + 0x1b0) = 1;
    fn_82567088(*(unsigned int *)(param_1 + 0x358),param_1 + 0x30);
  }
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 0x350) = ltcg_pool_0_0f;
LAB_8255b0a8:
  fn_8255B490(param_1);
  return;
}

