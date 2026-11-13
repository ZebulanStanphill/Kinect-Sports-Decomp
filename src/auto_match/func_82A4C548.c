extern int fn_82A1DDC0();
extern int memcpy();
extern int memset();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82A4C548(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  unsigned int uVar1;
  float fVar2;
  unsigned int *puVar3;
  double dVar4;
  float afStack_60 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  float *pfStack_48;
  unsigned int uStack_44;
  int iStack_40;
  int iStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  if (param_3[1] != 0) {
    puVar3 = (unsigned int *)(param_1 + 0x28);
    afStack_60[0] = *(float *)(param_1 + 0x38);
    *(unsigned int *)(param_1 + 0x28) = *param_3;
    fVar2 = lbl_82002AE0;
    uVar1 = *param_5;
    dVar4 = (double)lbl_82002AE0;
    *(unsigned int *)(param_1 + 0x2c) = uVar1;
    if ((double)afStack_60[0] == dVar4) {
      if (*(int *)(param_1 + 0x3c) == 7) {
        fn_82A1DDC0(uVar1,*puVar3,*(int *)(param_1 + 0x40) << 2);
      }
      else {
        uStack_38 = *(unsigned int *)(param_1 + 0x48);
        stack_pair_50.first = *puVar3;
        pfStack_48 = afStack_60;
        afStack_60[0] = fVar2;
        uStack_44 = 0;
        uStack_30 = 0;
        uStack_2c = 1;
        stack_pair_50.second = uVar1;
        iStack_40 = *(int *)(param_1 + 0x3c);
        iStack_3c = *(int *)(param_1 + 0x40);
        uStack_34 = uStack_38;
        (**(int (***)())(param_1 + 0x54))(&stack_pair_50.first);
      }
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) != 0) {
        memcpy(*(unsigned int *)(param_1 + 0x30),
                     ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) - (unsigned __int64)*(unsigned int *)(param_1 + 0x48) &
                     0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x2c),
                     *(unsigned int *)(param_1 + 0x48) << 2);
        memcpy(((unsigned __int64)*(unsigned int *)(param_1 + 0x48) & 0x3fffffff) * 4 +
                     (unsigned __int64)*(unsigned int *)(param_1 + 0x30),
                     ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) - (unsigned __int64)*(unsigned int *)(param_1 + 0x48) &
                     0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x2c));
      }
    }
    else {
      (**(int (***)())(param_1 + 0x50))(puVar3);
      if (((double)*(float *)(param_1 + 0x5c) == dVar4) &&
         ((double)*(float *)(param_1 + 0x60) == dVar4)) {
        *(unsigned int *)(param_1 + 0x4c) = 0;
        *(unsigned int *)(param_1 + 0x34) = lbl_821AAD20;
      }
    }
    trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x48),0);
    param_5[2] = *(unsigned int *)(param_1 + 0x44) / *(unsigned int *)(param_1 + 0x48);
    param_5[1] = param_3[1];
    return;
  }
                    /* WARNING: Subroutine does not return */
  memset(*(unsigned int *)(param_1 + 0x30),0,(unsigned __int64)*(unsigned int *)(param_1 + 0x48) * 0xc);
}

