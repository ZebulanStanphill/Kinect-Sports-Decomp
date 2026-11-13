extern unsigned int iStack_74;
extern unsigned int iStack_8c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


unsigned __int64 fn_82C490D8(int param_1)

{
  unsigned __int64 uVar1;
  struct { unsigned int first; int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  int iStack_74;
  unsigned int uStack_70;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffffffffffd;
  }
  else if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) &&
          ((*(unsigned int *)(param_1 + 0x5614) & 1) != 0)) {
    uStack_70 = *(unsigned int *)(param_1 + 0xe84);
    iStack_74 = (int)*(double *)(param_1 + 0x5438);
    stack_pair_90.first = *(unsigned int *)(param_1 + 0x5610);
    uStack_80 = *(unsigned int *)(param_1 + 0xf7c);
    uStack_7c = *(unsigned int *)(param_1 + 0x55ac);
    uStack_78 = *(unsigned int *)(param_1 + 0x5568);
    uStack_88 = *(unsigned int *)(param_1 + 0xb148);
    uStack_84 = 0;
    stack_pair_90.second = param_1;
    uVar1 = (**(int (***)())(*(int *)(param_1 + 0x6070) + 0xc0))(&stack_pair_90.first);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

