extern int fn_829C9E90();
extern unsigned int lbl_8315C3E8;
extern unsigned int *lbl_8321507C;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned int * fn_829CD2E0(void)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  int aiStack_40 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  unsigned int uStack_24;
  int *piStack_20;
  
  uVar2 = KfAcquireSpinLock(0xffffffff8321506c);
  puVar1 = lbl_8321507C;
  puVar4 = (unsigned int *)0x0;
  if (lbl_8321507C != (unsigned int *)0x0) {
    *lbl_8321507C = *lbl_8321507C & 0xfffffff9 | 2;
    lbl_8321507C = (unsigned int *)0x0;
    puVar4 = puVar1;
  }
  KfReleaseSpinLock(0xffffffff8321506c,uVar2);
  if ((puVar4 != (unsigned int *)0x0) && ((*puVar4 & 0x80) != 0)) {
    stack_pair_30.second = puVar4[0x19];
    aiStack_40[0] = 0x96000;
    piStack_20 = aiStack_40;
    stack_pair_30.first = 0x1e;
    uStack_28 = 0x67200;
    uStack_24 = stack_pair_30.second;
    iVar3 = (*(int (**)())lbl_8315C3E8)(&stack_pair_30.first);
    if ((iVar3 < 0) || (aiStack_40[0] != 0x96000)) {
      fn_829C9E90(puVar4);
      puVar4 = (unsigned int *)0x0;
    }
    else {
      *puVar4 = *puVar4 & 0xffffff7f;
    }
  }
  return puVar4;
}

