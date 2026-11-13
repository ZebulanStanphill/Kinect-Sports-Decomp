extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_822C8A18();
extern int fn_823F2E20();
extern unsigned int iStack_1c;


void fn_822C8920(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  (**(int (***)())(**(int **)(param_1 + 0x20) + 8))();
  uVar2 = fn_822C8A18(auStack_20,param_1,0xffffffff821aca8c);
  fn_823F2E20((unsigned int *)(param_1 + 0x20),uVar2);
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  (**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
  return;
}

