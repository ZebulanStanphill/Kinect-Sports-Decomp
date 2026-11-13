extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_82672C20();
extern int fn_82F63108();
extern unsigned int iStack_1c;


void fn_8227C580(int param_1)

{
  unsigned int *puVar1;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  puVar1 = (unsigned int *)fn_82279C58(auStack_20,param_1);
  fn_82672C20(*puVar1,0xffffffff821a8668,0,0);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  if (*(int *)(param_1 + 0x1180) != 0) {
    if (*(int *)(param_1 + 0x1180) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(int (***)())(**(int **)(param_1 + 0x1180) + 4))();
  }
  return;
}

