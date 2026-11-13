typedef struct Pair_824801F8 {unsigned a,b;} Pair;
static __forceinline void tidy(Pair *p) {unsigned r=p->b;p->b=0;p->a=0;if(r)fn_822315A0(r);}
extern int fn_822315A0();
extern int fn_8226D6A0();
extern int fn_82279CA0();
extern int fn_822817E0();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_824801F8(int param_1)

{
  unsigned iVar1;
  struct { unsigned first; unsigned second; } stack_pair_20;

  
  if (*(unsigned int *)(param_1 + 0x84) != 0) {
    fn_8226D6A0(*(int *)(param_1+0x84));
    *(unsigned int *)(param_1 + 0x84) = 0;
  }
  if (*(unsigned int *)(param_1 + 0x14) != 0) {
    fn_822817E0(&stack_pair_20.first, *(int *)(param_1+0x14));
    if (stack_pair_20.first != 0) {
      fn_82279CA0(stack_pair_20.first,0);
    }
    if (stack_pair_20.second != 0) {
      fn_822315A0(stack_pair_20.second);
    }
  }
  tidy((Pair *)(param_1+0x7c));
  return;
}

