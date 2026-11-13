extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_825E4220(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  *(unsigned int *)(param_2 + 0x1c) = 0;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar1 = *(unsigned int *)(param_2 + 0x24);
  *(float *)(param_2 + 0x20) =
       (*(float *)(param_1 + 0x8c) - *(float *)(param_1 + 0x88)) *
       ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + *(float *)(param_1 + 0x88);
  if (uVar1 == 0xffffffff) {
    return;
  }
  iVar2 = *(int *)(*(int *)(*(int *)((((int)uVar1 >> 8 & 0xffU) + 0x1ff) * 4 +
                                    *(int *)(param_1 + 0x30)) + 4) + (uVar1 & 0xff) * 4);
  *(unsigned int *)(iVar2 + 0xc) = lbl_82192734;
  *(unsigned int *)(iVar2 + 0x20) = *(unsigned int *)(iVar2 + 0x20) | 8;
  *(unsigned int *)(param_2 + 0x24) = 0xffffffff;
  return;
}

