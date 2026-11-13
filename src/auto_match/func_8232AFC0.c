extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_8232B500();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int stack0x00000000;
extern unsigned int uStack0000001c;


void fn_8232AFC0(int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uStack0000001c;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  unsigned int auStack_30 [12];
  
  uStack0000001c = param_2;
  puVar2 = (unsigned int *)
           fn_8232B500(&stack0x00000000 + -0x40,param_1 + 0xc,&stack0x00000000 + 0x1c);
  uVar3 = 0;
  uVar4 = 0;
  if ((unsigned int *)(&stack0x00000000 + -0x30) != puVar2) {
    uVar4 = puVar2[1];
    puVar2[1] = 0;
    uVar3 = *puVar2;
    *puVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x114);
  *(unsigned int *)(param_1 + 0x114) = uVar4;
  *(unsigned int *)(param_1 + 0x110) = uVar3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  puVar2 = (unsigned int *)
           fn_8232B500(&stack0x00000000 + -0x38,param_1 + 0xc,&stack0x00000000 + 0x1c);
  uVar3 = 0;
  uVar4 = 0;
  if ((unsigned int *)(&stack0x00000000 + -0x30) != puVar2) {
    uVar4 = puVar2[1];
    puVar2[1] = 0;
    uVar3 = *puVar2;
    *puVar2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x11c);
  *(unsigned int *)(param_1 + 0x11c) = uVar4;
  *(unsigned int *)(param_1 + 0x118) = uVar3;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  *(unsigned int *)(param_1 + 0x140) = param_2;
  return;
}

