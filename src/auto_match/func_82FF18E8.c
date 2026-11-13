#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FF0250();
extern int fn_82FF2248();
extern int fn_82FF22B8();
extern int fn_82FF23B8();
extern int fn_82FF2510();
extern unsigned int lbl_82005CCC;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_82FF18E8(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 *param_4,char param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int aiStack_50;
  struct { unsigned int first; unsigned int second; } stack_pair_48;

  
  if (param_5 != '\0') {
    uVar1 = *(unsigned int *)((int)param_4 + 4);
    stack_pair_48.first = *(unsigned int *)param_4;
    stack_pair_48.second = ~uVar1 & 0x80000000 | stack_pair_48.second & 0x3fffffff;
    uVar2 = CONCAT44(stack_pair_48.first,stack_pair_48.second);
    fn_82FF2248(&aiStack_50,param_2 + 0x1c,uVar2);
    if ((-(unsigned int)(*(int *)(param_2 + 0x20) != aiStack_50) & aiStack_50 + 8U) != 0) {
      if ((uVar1 & 0x80000000) != 0) {
        return;
      }
      fn_82FF23B8(param_2 + 0x1c,uVar2);
    }
  }
  if ((param_1 == (double)lbl_82005CCC) &&
     ((param_5 == '\0' || ((*(unsigned int *)((int)param_4 + 4) & 0x80000000) != 0)))) {
    fn_82FF2248(&aiStack_50,param_2 + 0x1c,*param_4);
    if (aiStack_50 != *(int *)(param_2 + 0x20)) {
      fn_82FF22B8(&stack_pair_48.first,param_2 + 0x1c,&aiStack_50);
      fn_82FF0250(param_2);
      return;
    }
  }
  else {
    fn_82FF2510(param_1,param_2 + 0x1c,*param_4);
  }
  fn_82FF0250(param_2);
  return;
}

