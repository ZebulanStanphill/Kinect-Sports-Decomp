extern unsigned int *auStack_50;
extern unsigned int fStack_34;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82250A18();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_824180B0();
extern int fn_8241CE30();
extern int fn_82539560();
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000020;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_824121C8(unsigned __int64 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned char auStack_50 [28];
  float fStack_34;
  
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  iVar5 = **(int **)(param_2 + 0x24);
  uStack_58 = 0;
  iVar6 = iVar5 + 0x149c;
  if (*(int *)(param_2 + 0x2c) == 4) {
    fVar1 = *(float *)(iVar5 + 0x888);
    fVar2 = *(float *)(iVar5 + 0x884);
    fVar3 = *(float *)(iVar5 + 0x880);
    fVar4 = *(float *)(iVar5 + 0x87c);
  }
  else {
    if (*(int *)(param_2 + 0x80) == 0) goto LAB_824122e0;
    *(unsigned int *)(param_2 + 0x80) = 0;
    iVar5 = **(int **)(param_2 + 0x24);
    fVar1 = *(float *)(iVar5 + 0x878);
    fVar2 = *(float *)(iVar5 + 0x874);
    iVar6 = iVar5 + 0x1498;
    fVar3 = *(float *)(iVar5 + 0x870);
    fVar4 = *(float *)(iVar5 + 0x86c);
  }
  dVar7 = (double)fn_82539560(param_1,(double)fVar4,(double)fVar3,(double)fVar2,(double)fVar1);
  fn_82230110(auStack_50,0xffffffff821b8218);
  fStack_34 = (float)dVar7;
  fn_8236D0D0(&stack_pair_60.first,auStack_50);
  fn_82230300(auStack_50,1,0);
  fn_824180B0(*(unsigned int *)(param_2 + 0x24),iVar6,&stack0x00000020,&stack_pair_60.first);
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) != '\0') {
    fn_8241CE30(param_1,*(unsigned int *)(param_2 + 0x24),param_2,2);
  }
LAB_824122e0:
  fn_822CD140(&stack_pair_60.first);
  return;
}

