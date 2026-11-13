extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int fStack_38;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8248E428();
extern int fn_8248E5A8();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int uStack_40;


unsigned __int64 fn_8248DF70(double param_1,unsigned __int64 param_2,int param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  unsigned char auStack_50 [8];
  unsigned char auStack_48 [4];
  int iStack_44;
  struct { unsigned int first; int second; } stack_pair_40;

  float fStack_38;
  
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uVar2 = (**(int (***)())(**(int **)(param_3 + 0x18) + 4))
                    (auStack_48,*(int **)(param_3 + 0x18),param_3,*(unsigned int *)(param_3 + 0x34),
                     *(unsigned int *)(param_3 + 0x38));
  fn_823F2E20(&stack_pair_40.first,uVar2);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  fStack_38 = (float)param_1;
  piVar4 = (int *)(param_3 + 8);
  fn_8248E428(piVar4,&stack_pair_40.first);
  fVar1 = (float)(param_1 + (double)*(float *)(param_3 + 0x30));
  *(float *)(param_3 + 0x30) = fVar1;
  if (*(int *)(param_3 + 0x60) == 0) {
    while (*(float *)(param_3 + 0x40) < fVar1) {
      *(float *)(param_3 + 0x30) = *(float *)(param_3 + 0x30) - *(float *)(*piVar4 + 8);
      fn_8248E5A8(auStack_50,piVar4);
      fVar1 = *(float *)(param_3 + 0x30);
    }
  }
  else {
    iVar3 = *(int *)(param_3 + 0xc) - *piVar4;
    while (*(unsigned int *)(param_3 + 100) < (unsigned int)(iVar3 / 0xc)) {
      *(unsigned int *)(param_3 + 0x30) = *(unsigned int *)(*piVar4 + 8);
      fn_8248E5A8(auStack_50,piVar4);
      iVar3 = *(int *)(param_3 + 0xc) - *piVar4;
    }
  }
  fn_82365BD8(param_2,&stack_pair_40.first);
  if (stack_pair_40.second != 0) {
    fn_822315A0();
  }
  return param_2;
}

