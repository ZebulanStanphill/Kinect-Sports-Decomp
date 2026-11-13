extern int fn_82522838();
extern int fn_82522BC8();
extern unsigned int lbl_832767CC;


void fn_825A2410(unsigned int *param_1)

{
  int iVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  unsigned short *puVar4;
  int iVar5;
  
  puVar3 = (unsigned short *)*param_1;
  if (*(int *)(puVar3 + 4) == *(int *)(puVar3 + 6)) {
    uVar2 = *puVar3;
    iVar1 = (*(int *)(puVar3 + 4) - *(int *)(puVar3 + 2)) / (int)(unsigned int)uVar2;
    iVar5 = (unsigned int)puVar3[1] + iVar1;
    if (lbl_832767CC == 0) {
      fn_82522838();
    }
    puVar3 = (unsigned short *)
             fn_82522BC8(lbl_832767CC,puVar3,
                               (__int64)(int)(unsigned int)uVar2 * (__int64)iVar5 + 0x10);
    puVar4 = puVar3 + 8;
    *(unsigned short **)(puVar3 + 2) = puVar4;
    *(unsigned short **)(puVar3 + 4) = (unsigned short *)((unsigned int)*puVar3 * iVar1 + (int)puVar4);
    *(unsigned short **)(puVar3 + 6) = (unsigned short *)((unsigned int)*puVar3 * iVar5 + (int)puVar4);
    *param_1 = puVar3;
  }
  *(unsigned int *)(puVar3 + 4) = (unsigned int)*puVar3 + *(int *)(puVar3 + 4);
  return;
}

