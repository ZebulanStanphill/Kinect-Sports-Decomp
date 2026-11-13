#define true 1
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8265C940();
extern int fn_829D26C0();
extern int fn_829DAB78();
extern int fn_829DAB88();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005718;
extern unsigned int lbl_8205743C;
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_832178F0;
extern unsigned int uStack_40;
extern unsigned int uStack_44;


unsigned __int64 fn_829D2750(int param_1,float *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  struct { float first; float second; } stack_pair_50;

  float fStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  if (lbl_83214FFC == 0) {
    uVar1 = 0xffffffff8000ffff;
  }
  else {
    stack_pair_50.first = lbl_82002C5C;
    stack_pair_50.second = lbl_82002C5C;
    fStack_48 = lbl_82002C5C;
    uStack_44 = lbl_82005718;
    uStack_40 = lbl_8205743C;
    if (param_2 == (float *)0x0) {
      param_2 = &stack_pair_50.first;
    }
    uVar2 = (unsigned __int64)lbl_832178F0;
    if (uVar2 == 0) {
      lbl_832178F0 = fn_8265C940(0x1e00,0x209c0000);
      if (lbl_832178F0 == 0) {
        return 0xffffffff8007000e;
      }
      fn_829D26C0();
      uVar2 = (unsigned __int64)lbl_832178F0;
    }
    uVar4 = 0;
    piVar3 = (int *)(param_1 + 0x30);
    while( true ) {
      if (*piVar3 == 2) {
        fn_829DAB88((double)*param_2,(double)param_2[1],(double)param_2[2],(double)param_2[3],
                          (double)param_2[4]);
      }
      else {
        fn_829DAB78(uVar4 + uVar2);
      }
      uVar4 = uVar4 + 0x500;
      piVar3 = piVar3 + 0x70;
      if (0x1dff < (uVar4 & 0xffffffff)) break;
      uVar2 = (unsigned __int64)lbl_832178F0;
    }
    uVar1 = 0;
  }
  return uVar1;
}

