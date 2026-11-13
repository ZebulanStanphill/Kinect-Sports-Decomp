extern unsigned int *auStack_50;
extern int fn_82930918();
extern __declspec(noreturn) void fn_82AA66A8(int, int, ...);
extern int fn_82AC6560();


unsigned int * fn_82B466F8(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int auStack_50 [14];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  puVar1 = (unsigned int *)fn_82AC6560(param_1,0x30,0x11);
  fn_82930918(auStack_50);
  { unsigned v = auStack_50[0];
  puVar1[6] = param_2;
  puVar1[1] = 3;
  puVar1[4] = 9;
  *puVar1 = v; }
  return puVar1;
}

