extern unsigned int *auStack_50;
extern int fn_82FAA780();
extern int fn_82FAD0A8();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


unsigned __int64 fn_82FAABA8(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  int *piStack_44;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  
  uStack_48 = (**(int (***)())(**(int **)(param_1 + 8) + 0x18))();
  if ((uStack_48 != 0) && (piStack_44 = (int *)fn_82FAD0A8(), piStack_44 != (int *)0x0)) {
    uVar1 = param_3 & 0xffffffff;
    while (uVar1 != 0) {
      piStack_44 = (int *)(**(int (***)())(*piStack_44 + 0xc))
                                    (piStack_44,*(unsigned int *)(param_1 + 8),&uStack_48,auStack_50);
      param_3 = param_3 - 1;
      uVar1 = param_3;
    }
    stack_pair_40.second = 1;
    stack_pair_40.first = param_4;
    uStack_38 = param_2;
    uVar2 = fn_82FAA780(piStack_44,&stack_pair_40.first);
    return uVar2;
  }
  return 2;
}

