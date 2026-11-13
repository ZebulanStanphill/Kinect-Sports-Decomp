extern unsigned int *auStack_40;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_8269A240();
extern int fn_827A1070();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8272D828(int *param_1,unsigned int param_2,unsigned int *param_3)

{
  int iVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [32];
  
  iVar1 = (**(int (***)())(*param_1 + 0x40))();
  if (iVar1 != 0) {
    if (param_2 < 4) {
      iVar1 = param_2 * 0x24 + iVar1 + 0x944;
    }
    else {
      iVar1 = 0;
    }
    stack_pair_50.second = *(unsigned int *)(iVar1 + 0x18);
    stack_pair_50.first = *(unsigned int *)(iVar1 + 0x14);
    fn_8268CC00(auStack_40);
    fn_8269A240(param_1,auStack_40);
    fn_8268D008(auStack_40,&uStack_48,&stack_pair_50.first);
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = uStack_48;
      param_3[1] = uStack_44;
    }
    fn_827A1070(param_1[0x28]);
  }
  return;
}

