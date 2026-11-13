extern unsigned int *auStack_70;
extern int fn_83061508();
extern int fn_83061F30();
extern int fn_8306AAF0();
extern int fn_8306AB80();


void fn_83069C28(int param_1,unsigned int param_2,int *param_3,int (**param_4)())

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  int aiStack_90 [4];
  unsigned int *puStack_80;
  unsigned char auStack_70 [112];
  
  fn_83061508(auStack_70);
  aiStack_90[0] = 0;
  aiStack_90[1] = 0;
  aiStack_90[2] = 0;
  puStack_80 = (unsigned int *)0x0;
  fn_8306AAF0(aiStack_90,*(unsigned int *)(param_1 + 0x3c));
  while (iVar2 = aiStack_90[0], puVar4 = puStack_80, aiStack_90[0] != 0) {
    fn_8306AB80(aiStack_90);
    iVar1 = *(int *)(iVar2 + 0x28);
    *(unsigned int *)(iVar1 + 0x38) = param_2;
    *(unsigned int *)(iVar1 + 0x74) = 1;
    for (iVar2 = *(int *)(iVar2 + 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if (((*(char *)(iVar2 + 0x14) == '\0') &&
          (*(int **)(*(int *)(iVar2 + 0x10) + 0xc) != aiStack_90)) &&
         (iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + 0x28), *(int *)(iVar3 + 0x74) == 0)) {
        fn_8306AAF0(aiStack_90);
        *param_3 = *param_3 + 1;
        if (param_4 != (int (**)())0x0) {
          (*param_4)(iVar2,iVar1,iVar3);
        }
      }
    }
  }
  for (; puVar4 != (unsigned int *)0x0; puVar4 = (unsigned int *)puVar4[2]) {
    puVar4[3] = 0;
    *puVar4 = 0;
  }
  fn_83061F30(auStack_70);
  return;
}

