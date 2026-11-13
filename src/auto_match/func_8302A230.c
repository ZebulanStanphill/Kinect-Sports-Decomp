typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int fStack_20;
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern int fn_83029A58();
extern int fn_8302A198();
extern unsigned int lbl_82002AE0;


void fn_8302A230(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  struct { float first; float second; } stack_pair_28;

  float fStack_20;
  
  uVar1 = *(unsigned short *)(param_1 + 0x18);
  if ((int)(unsigned int)uVar1 < (*(int **)(param_1 + 0x10))[1]) {
    iVar5 = **(int **)(param_1 + 0x10);
    iVar6 = (unsigned int)uVar1 * 0x10 + iVar5;
    *(unsigned short *)(param_1 + 0x18) = uVar1 + 1;
    *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)((unsigned int)uVar1 * 0x10 + iVar5);
    *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(iVar6 + 4);
    *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(iVar6 + 8);
    fn_83029A58(param_1,param_1 + 0x4c);
    iVar5 = (int)(((unsigned __int64)*(unsigned int *)(iVar6 + 0xc) + 0x14 & 0xffffffff) / 0x15);
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    *(int *)(param_1 + 0x3c) = iVar5;
  }
  bVar4 = true;
  if ((*(int *)(*(int *)(param_1 + 0x10) + 4) <= (int)(unsigned int)*(unsigned short *)(param_1 + 0x18)) &&
     (iVar5 = fn_8302A198(param_1), iVar5 != 1)) {
    bVar4 = false;
    *(unsigned int *)(param_1 + 4) = 0;
  }
  if (bVar4) {
    iVar5 = (unsigned int)*(unsigned short *)(param_1 + 0x18) * 0x10 + **(int **)(param_1 + 0x10);
    stack_pair_28.first = *(float *)((unsigned int)*(unsigned short *)(param_1 + 0x18) * 0x10 + **(int **)(param_1 + 0x10));
    stack_pair_28.second = *(float *)(iVar5 + 4);
    fStack_20 = *(float *)(iVar5 + 8);
    fn_83029A58(param_1,&stack_pair_28.first);
    fVar3 = lbl_82002AE0;
    uVar2 = *(unsigned int *)(param_1 + 0x38);
    *(float *)(param_1 + 0x58) = stack_pair_28.first - *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x60) = fStack_20 - *(float *)(param_1 + 0x54);
    *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_1 + 0x3c) + uVar2;
    *(unsigned int *)(param_1 + 0x34) = uVar2;
    fVar3 = fVar3 / (float)*(unsigned int *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x40) = fVar3;
    *(float *)(param_1 + 0x5c) = stack_pair_28.second - *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x44) = -((float)uVar2 * fVar3);
  }
  return;
}

