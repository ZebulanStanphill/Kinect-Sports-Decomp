extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828A2348();
extern int fn_828A60D8();
extern int fn_828A61C8();
extern int fn_828BAB20();
extern int fn_828BCA78();
extern int fn_828C2480();
extern int fn_828C35A0();
extern unsigned int iStack_5c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_48;


void fn_828C36B0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned char *puVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_70 [8];
  unsigned int auStack_68 [2];
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_50 [4];
  unsigned int *puStack_4c;
  unsigned int uStack_48;
  
  fn_828A2348(&stack0x00000000 + -0x50,&stack0x00000000 + -0x70,&stack0x00000000 + -0x70);
  puVar4 = (unsigned char *)fn_828C35A0(param_1 + 0xe8,param_3);
  if (puVar4 != &stack0x00000000 + -0x50) {
    fn_828A60D8();
    puVar5 = *(unsigned int **)(puVar4 + 4);
    *(unsigned int **)(puVar4 + 4) = puStack_4c;
    *(unsigned int *)(puVar4 + 8) = uStack_48;
    puStack_4c = puVar5;
  }
  fn_828A61C8(&stack0x00000000 + -0x68,&stack0x00000000 + -0x50,*puStack_4c);
  fn_8265CA20(puStack_4c);
  uVar2 = fn_8265C9E0(0x28);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828C35A0(param_1 + 0xe8,param_3);
    uVar3 = fn_828C2480(uVar2,param_2,param_3,uVar3);
  }
  puVar5 = (unsigned int *)fn_828BAB20(&stack0x00000000 + -0x60,uVar3);
  puVar6 = (unsigned int *)fn_828BCA78(param_1 + 0xd8,param_3);
  uVar7 = 0;
  uVar8 = 0;
  if ((unsigned int *)(&stack0x00000000 + -0x68) != puVar5) {
    uVar8 = puVar5[1];
    puVar5[1] = 0;
    uVar7 = *puVar5;
    *puVar5 = 0;
  }
  iVar1 = puVar6[1];
  puVar6[1] = uVar8;
  *puVar6 = uVar7;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return;
}

