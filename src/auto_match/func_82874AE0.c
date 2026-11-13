extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82810328();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;


float * fn_82874AE0(float *param_1,int param_2,unsigned __int64 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned __int64 uVar4;
  double dVar5;
  double dVar6;
  struct { float first; float second; } stack_pair_60;

  float fStack_58;
  
  fVar2 = lbl_821CA1A8;
  fVar3 = lbl_821CA1A4;
  if (*(int *)(param_2 + 0x14) == 0) {
    *param_1 = lbl_821CA1A0;
    param_1[1] = fVar3;
    param_1[2] = fVar2;
  }
  else {
    uVar4 = (unsigned __int64)*(unsigned int *)(param_2 + 0x18);
    dVar6 = (double)lbl_82005C88;
    fVar3 = lbl_821CA1A0;
    fVar2 = lbl_821CA1A4;
    fVar1 = lbl_821CA1A8;
    if (uVar4 != *(unsigned int *)(param_2 + 0x1c)) {
      do {
        fn_82810328(param_3,uVar4,&stack_pair_60.first);
        dVar5 = (double)(stack_pair_60.first * stack_pair_60.first + fStack_58 * fStack_58 + stack_pair_60.second * stack_pair_60.second);
        if (dVar5 < dVar6) {
          dVar6 = dVar5;
          fVar3 = stack_pair_60.first;
          fVar2 = stack_pair_60.second;
          fVar1 = fStack_58;
        }
        uVar4 = uVar4 + 0xc;
      } while ((uVar4 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_2 + 0x1c));
    }
    *param_1 = fVar3;
    param_1[1] = fVar2;
    param_1[2] = fVar1;
  }
  return param_1;
}

