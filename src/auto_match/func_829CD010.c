extern unsigned int *auStack_30;
extern int fn_829C9BB0();
extern unsigned int iStack_3c;
extern unsigned int lbl_8315C3E8;
extern unsigned int lbl_8321505C;
extern unsigned int uStack_40;


void fn_829CD010(void)

{
  int iVar1;
  struct { unsigned int first; int second; } stack_pair_40;

  unsigned int auStack_30 [8];
  
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  iVar1 = (*(int (**)())lbl_8315C3E8)(&stack_pair_40.first);
  if ((((-1 < iVar1) && (stack_pair_40.second != 0)) && (stack_pair_40.second != 1)) &&
     (((stack_pair_40.second == 2 || (stack_pair_40.second == 3)) ||
      (((stack_pair_40.second != 4 && (stack_pair_40.second != 5)) && ((stack_pair_40.second == 6 || (stack_pair_40.second == 7)))))))) {
    auStack_30[0] = 2;
    lbl_8321505C = 0;
    fn_829C9BB0(auStack_30);
  }
  return;
}

