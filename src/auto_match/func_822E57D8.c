#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_822ABA88();
extern int fn_822C6B30();
extern int fn_822E58E8();
extern int fn_8255A070();
extern int fn_8255A780();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D9208;


void fn_822E57D8(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  double dVar4;
  
  piVar1 = *(int **)(((unsigned int)((unsigned __int64)LZCOUNT(*(unsigned int *)(param_1 + 0x2c)) >> 3) & 4) +
                    **(int **)(*(int *)(param_1 + 0x1bc) + 8));
  uVar2 = (**(int (***)())(**(int **)(*(int *)(param_1 + 0x1bc) + 0x2e0) + 0x1c))();
  fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),uVar2);
  dVar4 = (double)fn_8255A070();
  iVar3 = fn_8255A780((double)*(float *)(param_1 + 0x2a0),dVar4,(double)lbl_831D9208);
  if (iVar3 == 0) {
    *(float *)(param_1 + 0x2a0) = (float)dVar4;
    *(unsigned int *)(param_1 + 0x2a8) = 0;
  }
  if (*(int *)(param_1 + 0x2a8) == 0) {
    iVar3 = fn_822E58E8(param_1);
    if (iVar3 == 0) {
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

