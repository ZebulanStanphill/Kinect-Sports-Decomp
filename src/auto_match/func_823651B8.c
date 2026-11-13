extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_822315A0();
extern int fn_82365C38();
extern int fn_82520158();
extern int fn_82F64988();
extern unsigned int iStack_1c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_30;


void fn_823651B8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uStack_30;
  unsigned char auStack_2c [4];
  unsigned int auStack_28 [2];
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  fn_82520158(0xffffffff821b2b00,&stack0x00000000 + -0x30,0);
  if (((uStack_30 != 0 && (uStack_30 & 0xff000000) < 0x7a000000) && (*(int *)(param_1 + 0x7d8) == 0)
      ) && ((iVar1 = *(int *)(param_1 + 0xa0), iVar1 == 0 ||
            ((*(int *)(iVar1 + 0x40) != 1 && ((iVar1 == 0 || (*(int *)(iVar1 + 0x40) != 2)))))))) {
    puVar2 = (unsigned int *)
             fn_82365C38(&stack0x00000000 + -0x20,&stack0x00000000 + -0x30,
                               &stack0x00000000 + -0x28,&stack0x00000000 + -0x2c);
    uVar3 = 0;
    uVar4 = 0;
    if ((unsigned int *)(&stack0x00000000 + -0x28) != puVar2) {
      uVar4 = puVar2[1];
      puVar2[1] = 0;
      uVar3 = *puVar2;
      *puVar2 = 0;
    }
    iVar1 = *(int *)(param_1 + 0x7dc);
    *(unsigned int *)(param_1 + 0x7dc) = uVar4;
    *(unsigned int *)(param_1 + 0x7d8) = uVar3;
    if (iVar1 != 0) {
      fn_822315A0();
    }
    if (iStack_1c != 0) {
      fn_822315A0();
    }
    puVar2 = (unsigned int *)(param_1 + 0xa74);
    if (7 < *(unsigned int *)(param_1 + 0xa88)) {
      puVar2 = (unsigned int *)*puVar2;
    }
    fn_82F64988((unsigned __int64)*(unsigned int *)(param_1 + 0x7d8) + 0x1188,0x400,puVar2);
  }
  return;
}

