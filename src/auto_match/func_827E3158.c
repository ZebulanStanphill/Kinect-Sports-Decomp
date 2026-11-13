extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_827D6E18();
extern int fn_827D9908();
extern unsigned int iStack_2c;


void fn_827E3158(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  uVar2 = fn_827D6E18(auStack_30,param_2,*(unsigned int *)(param_1 + 0x30));
  piVar4 = (int *)(param_1 + 0x38);
  fn_823F2E20(piVar4,uVar2);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  piVar1 = (int *)*piVar4;
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(int (***)())(*piVar1 + 0x54))(piVar1,param_1 + 0x18,param_1 + 0x40);
    *(int *)(param_1 + 0x44) = iVar3;
    if (iVar3 != 0) {
      fn_827D9908(*piVar4);
      (**(int (***)())(**(int **)(param_1 + 0x44) + 4))
                (*(int **)(param_1 + 0x44),*(unsigned int *)(param_1 + 0x34),
                 *(unsigned int *)(param_1 + 8));
    }
  }
  return;
}

