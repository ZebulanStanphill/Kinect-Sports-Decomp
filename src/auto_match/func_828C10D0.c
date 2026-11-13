extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_828A17A0();
extern int fn_828C01A0();
extern int fn_828D0BE0();
extern int fn_82F68CC0();
extern unsigned int iStack_4c;
extern unsigned int lbl_83213FC8;
extern unsigned int stack0x00000000;


int fn_828C10D0(int param_1,unsigned int param_2,__int64 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned int auStack_48 [18];
  
  fn_82F68CC0(param_1,param_3,0x54);
  fn_828C01A0(param_1 + 0x58,param_4);
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x78) = param_2;
  uVar5 = (unsigned __int64)lbl_83213FC8;
  if (uVar5 == 0) {
    uVar5 = fn_828A17A0();
  }
  puVar3 = (unsigned int *)
           fn_828D0BE0(&stack0x00000000 + -0x50,uVar5,0,param_3 + 0x1c,param_3 + 0x14,
                             param_3 + 0x40);
  uVar4 = 0;
  uVar6 = 0;
  if ((unsigned int *)(&stack0x00000000 + -0x48) != puVar3) {
    uVar6 = puVar3[1];
    puVar3[1] = 0;
    uVar4 = *puVar3;
    *puVar3 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  *(unsigned int *)(param_1 + 0x74) = uVar6;
  *(unsigned int *)(param_1 + 0x70) = uVar4;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  piVar2 = (int *)param_4[4];
  if (piVar2 != (int *)0x0) {
    (**(int (***)())(*piVar2 + 0xc))(piVar2,param_4 != piVar2);
    param_4[4] = 0;
  }
  return param_1;
}

