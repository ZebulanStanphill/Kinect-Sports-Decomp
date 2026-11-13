extern int fn_8225F160();
extern int fn_82358C90();
extern int fn_824BF8A8();
extern int fn_8251F720();
extern int fn_8251FA58();
extern unsigned int iStack_30;
extern unsigned int uStack_2c;


void fn_8242CB38(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *piVar3;
  unsigned int uVar4;
  struct { int first; unsigned int second; } stack_pair_30;

  
  iVar2 = fn_8225F160();
  uVar1 = *(unsigned int *)(iVar2 + 0x5c);
  if (uVar1 == 1) {
    fn_82358C90(param_1,param_2,param_3);
  }
  else {
    piVar3 = (int *)fn_8251F720(param_3,0);
    if (*piVar3 != 0) {
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          stack_pair_30.first = *piVar3;
          stack_pair_30.second = uVar4;
          fn_824BF8A8(param_2,&stack_pair_30.first);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
    }
    fn_8251FA58(piVar3);
  }
  return;
}

