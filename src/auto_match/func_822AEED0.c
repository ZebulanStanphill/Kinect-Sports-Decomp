extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8236DFD8();
extern int fn_8265C9E0();
extern unsigned int iStack_30;
extern unsigned int stack0x00000000;
extern unsigned int uStack_34;


void fn_822AEED0(int param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [4];
  unsigned int uStack_34;
  int iStack_30;
  
  uVar1 = *(unsigned int *)(*param_2 + 8);
  fn_82365BD8(&stack0x00000000 + -0x34);
  puVar3 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = *(unsigned int *)(param_1 + 8);
    puVar3[1] = *(unsigned int *)(param_1 + 8);
    puVar3[2] = *(unsigned int *)(param_1 + 8);
    *(unsigned char *)(puVar3 + 6) = 0;
    *(unsigned char *)((int)puVar3 + 0x19) = 0;
    if (puVar3 + 3 != (unsigned int *)0x0) {
      puVar3[3] = uVar1;
      puVar3[4] = 0;
      puVar3[5] = 0;
      if (puVar3 + 4 != (unsigned int *)(&stack0x00000000 + -0x34)) {
        iVar2 = puVar3[5];
        puVar3[5] = iStack_30;
        puVar3[4] = uStack_34;
        iStack_30 = iVar2;
      }
    }
    fn_8236DFD8(&stack0x00000000 + -0x38,param_1 + 4);
    if (iStack_30 != 0) {
      fn_822315A0(iStack_30);
    }
    if (param_2[1] != 0) {
      fn_822315A0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82230040(&stack0x00000000 + -0x40);
}

