extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8266F628();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_2c;
extern unsigned int lbl_831CEE78[];



extern unsigned int uStack_30;


typedef struct { int obj; void *rc; } Pair_8228B6A8;
void fn_8228B6A8(Pair_8228B6A8 *param_1)

{
  int uVar1;
  struct { unsigned int first; void *second; } stack_pair_30;

  
  if (param_1->obj != 0) {
    fn_8266F628(param_1->obj,1);
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    fn_82517978(&stack_pair_30.first,param_1->obj,param_1->rc,0);
    uVar1 = fn_8266F6B8();
    fn_826728E8(stack_pair_30.first,lbl_831CEE78[0],(int)uVar1);
    if (stack_pair_30.second != 0) {
      fn_822315A0(stack_pair_30.second);
    }
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    fn_82517978(&stack_pair_30.first,param_1->obj,param_1->rc,0);
    uVar1 = fn_8266F6B8();
    fn_826728E8(stack_pair_30.first,lbl_831CEE78[1],(int)uVar1);
    if (stack_pair_30.second != 0) {
      fn_822315A0(stack_pair_30.second);
    }
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    fn_82517978(&stack_pair_30.first,param_1->obj,param_1->rc,0);
    uVar1 = fn_8266F6B8();
    fn_826728E8(stack_pair_30.first,lbl_831CEE78[2],(int)uVar1);
    if (stack_pair_30.second != 0) {
      fn_822315A0(stack_pair_30.second);
    }
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    fn_82517978(&stack_pair_30.first,param_1->obj,param_1->rc,0);
    uVar1 = fn_8266F6B8();
    fn_826728E8(stack_pair_30.first,lbl_831CEE78[3],(int)uVar1);
    if (stack_pair_30.second != 0) {
      fn_822315A0(stack_pair_30.second);
    }
  }
  if ((unsigned)param_1->rc != 0) {
    fn_822315A0(param_1->rc);
  }
  return;
}

