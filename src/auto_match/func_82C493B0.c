extern unsigned int iStack_9c;
extern unsigned int lbl_820FBA20;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;


unsigned __int64 fn_82C493B0(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  struct { unsigned int first; int second; } stack_pair_a0;

  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffffffffffd;
  }
  else if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) &&
          ((*(unsigned int *)(param_1 + 0x5614) & 8) != 0)) {
    stack_pair_a0.first = *(unsigned int *)(param_1 + 0x5610);
    uStack_94 = 3;
    uStack_98 = *(unsigned int *)(param_1 + 0xb148);
    if ((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) {
      uStack_90 = *(unsigned int *)(param_1 + 0x120);
    }
    else {
      uStack_90 = *(unsigned int *)
                   (&lbl_820FBA20 +
                   (*(int *)(param_1 + 0x5514) * 6 + *(int *)(param_1 + 0x5510)) * 4);
    }
    uStack_8c = *(unsigned int *)(param_1 + 0x5568);
    uStack_88 = *(unsigned int *)(param_1 + 0x5424);
    uStack_84 = *(unsigned int *)(param_1 + 0x5428);
    uStack_80 = *(unsigned int *)(param_1 + 0x556c);
    uStack_74 = *(unsigned int *)(param_1 + 0x54b0);
    uStack_70 = *(unsigned int *)(param_1 + 0xd9c);
    uStack_6c = *(unsigned int *)(param_1 + 0xda0);
    uStack_68 = *(unsigned int *)(param_1 + 0x5444);
    uStack_64 = *(unsigned int *)(param_1 + 0x5448);
    uStack_60 = *(unsigned int *)(param_1 + 0x567c);
    stack_pair_a0.second = param_1;
    uStack_7c = param_2;
    uStack_78 = param_3;
    uVar1 = (**(int (***)())(*(int *)(param_1 + 0x6070) + 0xc0))(&stack_pair_a0.first);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

