extern unsigned char *fn_8288AE70(int, unsigned int *);
extern void fn_8289EDA0(unsigned int,unsigned int,unsigned int *,unsigned char);
extern int fn_828A1C98();
extern unsigned int iStack_1c;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


unsigned int fn_8288B150(int param_1,unsigned int param_2)

{
  char *pcVar1;
  int result;

  unsigned char uStack_20;
  unsigned int iStack_1c;
  struct { unsigned int first; unsigned int second; } stack_pair_18;

  

  fn_828A1C98(&stack_pair_18.first,param_1 + 0x124,&param_2);
  iStack_1c = 0;
  fn_8289EDA0(stack_pair_18.first,stack_pair_18.second,&iStack_1c,uStack_20);
  if ((iStack_1c != 0) &&
     (pcVar1 = (char *)fn_8288AE70(param_1 + 0x124,&param_2), *pcVar1 == '\0')) {
    result = 0;
  } else { result = 1; }
  return (unsigned char)result;
}

