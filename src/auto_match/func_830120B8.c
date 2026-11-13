extern int fn_82FAB9C0();
extern int fn_83010BF0();
extern int fn_83011240();
extern int fn_83011CF8();
extern unsigned int lbl_832642E0;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_4a;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_830120B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
                  unsigned int param_5,unsigned int param_6)

{
  int *piVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned char uStack_4c;
  unsigned char uStack_4b;
  unsigned char uStack_4a;
  
  piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4);
  if (piVar1 != (int *)0x0) {
    stack_pair_60.second = (unsigned int)param_3;
    uStack_4c = 0;
    uStack_4a = 0;
    uStack_58 = 0;
    uStack_4b = 0;
    uStack_54 = param_5;
    uStack_50 = param_6;
    if (param_4 == 0) {
      fn_83011240(lbl_832642E4,param_2,param_3);
      stack_pair_60.first = 0;
    }
    else if (param_4 == 1) {
      fn_83010BF0(lbl_832642E4,param_2,param_3,1);
      stack_pair_60.first = 1;
    }
    else {
      if (2 < param_4) {
        return;
      }
      fn_83011CF8(lbl_832642E4,param_2,param_3,0);
      stack_pair_60.first = 2;
    }
    (**(int (***)())(*piVar1 + 0x1c))(piVar1,&stack_pair_60.first);
    (**(int (***)())(*piVar1 + 8))(piVar1);
  }
  return;
}

