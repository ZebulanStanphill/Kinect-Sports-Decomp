#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int fStack0000001c;
extern unsigned int fStack_1c;
extern int fn_824BF8A8();
extern int fn_82F63108();
extern unsigned int iStack_20;
extern unsigned int stack0x0000001c;


void fn_824DF2E8(double param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  float fStack0000001c;
  struct { int first; float second; } stack_pair_20;

  
  stack_pair_20.first = param_2[7];
  fStack0000001c = (float)param_1;
  stack_pair_20.second = (float)param_1;
  if ((param_2[1] - *param_2 & 0xfffffff8U) != 0) {
    piVar1 = (int *)param_2[0xc];
    if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    iVar2 = (**(int (***)())(*piVar1 + 4))(piVar1,param_2 + 6,&stack0x0000001c);
    if (iVar2 == 0) goto LAB_824df358;
  }
  *(unsigned __int64 *)(param_2 + 5) = CONCAT44(stack_pair_20.first,stack_pair_20.second);
LAB_824df358:
  fn_824BF8A8(param_2,&stack_pair_20.first);
  return;
}

