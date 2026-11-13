extern int fn_82396230();
extern int fn_82396BE0();
extern int fn_82398668();
extern int fn_823987C8();
extern int fn_82399C38();
extern float lbl_8218E8FC;
extern unsigned int lbl_82192504;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_823A58E0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  *(unsigned int *)(iVar1 + 0x260) = *(unsigned int *)(iVar1 + 0x260) | 0x20;
  fn_823987C8(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
  fn_82398668(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
  iVar1 = fn_82399C38(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
  if (iVar1 != 0) {
    fn_82396BE0(*(unsigned int *)(*(int *)(param_1 + 8) + 8));
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  *(float *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x868) =
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_8218E8FC + lbl_82192504;
  if (*(int *)(iVar1 + 0x178) == 0) {
    *(unsigned int *)(iVar1 + 0x240) = 1;
    fn_82396230();
  }
  return;
}

