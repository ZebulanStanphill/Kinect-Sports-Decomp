typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_824BF8A8();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


void fn_82441298(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  bool bVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_10;

  
  if (param_1[5] == 0) {
    if (((param_1[6] == 0) || (param_1[7] != 0)) || (bVar1 = true, (*param_1 & 0x100) != 0)) {
      bVar1 = false;
    }
    if (((*param_1 & 0x80) == 0) && (!bVar1)) {
      return;
    }
    stack_pair_10.second = 7;
    param_1[5] = 1;
  }
  else {
    if ((param_1[6] == 0) && ((*param_1 & 0x100) != 0)) {
      param_1[6] = 1;
    }
    if ((param_1[7] == 0) || (param_1[6] != 0)) {
      if (((*param_1 & 0x100) == 0) && (param_1[7] == 0)) {
        return;
      }
      stack_pair_10.second = 8;
    }
    else {
      stack_pair_10.second = 9;
    }
    param_1[5] = 0;
  }
  stack_pair_10.first = param_2;
  fn_824BF8A8(param_3,&stack_pair_10.first);
  return;
}

