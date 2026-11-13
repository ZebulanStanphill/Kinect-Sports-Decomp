extern unsigned int *auStack_20;
extern unsigned int *auStack_40;
extern int fn_822ABBF0();
extern int fn_82359558();
extern int fn_823C88F0();
extern int fn_823CA0A8();
extern int fn_823CA708();
extern unsigned int iStack_34;
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821B2FB8;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_823C8C78(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int auStack_40 [2];
  unsigned char **ppuStack_38;
  int iStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned char auStack_20 [16];
  
  iVar4 = fn_82359558(*(unsigned int *)(param_1 + 0x240),*(unsigned int *)(param_1 + 0x10));
  if (iVar4 != 0) {
    iStack_34 = 0;
    ppuStack_38 = &lbl_821B2FB8;
    fn_822ABBF0(*(unsigned int *)((*(int **)(iVar4 + 0x1c))[4] * 4 + **(int **)(iVar4 + 0x1c)),
                      &ppuStack_38);
    ppuStack_38 = &lbl_821AC4A4;
    if (iStack_34 != 0) {
      fn_823C88F0(param_1,iStack_34,auStack_20,&uStack_30,auStack_40);
      *(unsigned int *)(param_1 + 0x228) = auStack_40[0];
      puVar1 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (unsigned int *)(param_1 + 0x1a0U & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      *(unsigned int *)(param_1 + 0x214) = uStack_30;
      *(unsigned int *)(param_1 + 0x218) = uStack_2c;
      *(unsigned int *)(param_1 + 0x21c) = uStack_28;
      return;
    }
  }
  uVar3 = fn_823CA0A8(param_1);
  fn_823CA708(param_1,uVar3);
  return;
}

