#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_822C6B30();
extern int fn_822E58E8();
extern int fn_8255A780();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D9208;


void fn_822E5710(int param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)(*(int *)((*(int **)(param_1 + 0x1c))[4] * 4 +
                                     **(int **)(param_1 + 0x1c)) + 0x14);
  iVar1 = fn_8255A780((double)*(float *)(param_1 + 0x2a0),dVar2,(double)lbl_831D9208);
  if (iVar1 == 0) {
    *(float *)(param_1 + 0x2a0) = (float)dVar2;
    *(unsigned int *)(param_1 + 0x2a8) = 0;
  }
  if (*(int *)(param_1 + 0x2a8) == 0) {
    iVar1 = fn_822E58E8(param_1);
    if (iVar1 == 0) {
      fn_822C6B30((unsigned __int64)*(unsigned int *)(param_1 + 0x114) + 0x50,param_1 + 0x80,param_1 + 0xc0,
                        CONCAT44(ltcg_pool_0_0f,*(unsigned int *)(param_1 + 0x2a0)),
                        (unsigned __int64)ltcg_pool_0_0f << 0x20);
    }
    else {
      *(unsigned int *)(param_1 + 0x2a8) = 1;
    }
  }
  return;
}

