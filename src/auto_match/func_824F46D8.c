extern int fn_8262FE50();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82639EA8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern unsigned int lbl_8320A898;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;


void fn_824F46D8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned int uStack_bc;
  unsigned int uStack_b4;
  struct { unsigned int first; unsigned int second; } stack_pair_b0;

  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  
  iVar1 = lbl_8320A898;
  if (*(int *)(param_1 + 0xc) != 0) {
    *(unsigned int *)(lbl_8320A898 + 0x2ed8) = 0;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x80000;
    fn_82631920(lbl_8320A898,*(unsigned int *)(param_1 + 0x1c));
    iVar1 = *(int *)(lbl_8320A898 + 0x3148);
    uStack_bc = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3220);
    uStack_a8 = uStack_bc;
    uStack_b4 = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3224);
    uStack_a4 = uStack_b4;
    uStack_bc = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3218);
    uStack_b4 = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x321c);
    uStack_a0 = *(unsigned int *)(lbl_8320A898 + 0x3228);
    uStack_9c = *(unsigned int *)(lbl_8320A898 + 0x322c);
    stack_pair_b0.first = uStack_bc;
    stack_pair_b0.second = uStack_b4;
    if (iVar1 != 0) {
      fn_8262FE50(iVar1);
    }
    iVar2 = *(int *)(lbl_8320A898 + 0x3158);
    if (iVar2 != 0) {
      fn_8262FE50(iVar2);
    }
    fn_8263A1B8(lbl_8320A898,0,*(unsigned int *)(param_1 + 0x38));
    fn_8263A508(lbl_8320A898,0);
    for (piVar3 = *(int **)(param_1 + 0xc); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      if (*piVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82631578(lbl_8320A898,*(unsigned int *)(param_1 + 0x34));
      }
    }
    fn_8263A1B8(lbl_8320A898,0,iVar1);
    fn_8263A508(lbl_8320A898,iVar2);
    fn_82639EA8(lbl_8320A898,&stack_pair_b0.first);
  }
  return;
}

