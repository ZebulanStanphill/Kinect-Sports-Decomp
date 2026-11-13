extern int fn_822314E8();
extern int fn_82248AE8();
extern int fn_82365BD8();
extern int fn_8251CF80();
extern unsigned int lbl_83265A54;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82514888(unsigned int *param_1)

{
  unsigned int uVar1;
  char cVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  lbl_83265A54 = 1;
  uStack_38 = 0;
  cVar2 = fn_82248AE8(&stack_pair_40.first,(int)(param_1[1] - *param_1) >> 3);
  if (cVar2 != '\0') {
    uVar1 = param_1[1];
    uVar4 = (unsigned __int64)stack_pair_40.first;
    if ((unsigned __int64)*param_1 != (unsigned __int64)uVar1) {
      lVar3 = *param_1 - uVar4;
      do {
        if ((uVar4 & 0xffffffff) != 0) {
          fn_82365BD8(uVar4,lVar3 + uVar4);
        }
        uVar4 = uVar4 + 8;
      } while ((lVar3 + uVar4 & 0xffffffff) != (unsigned __int64)uVar1);
    }
    stack_pair_40.second = (unsigned int)uVar4;
  }
  fn_8251CF80(0xffffffff8326597c,0,&stack_pair_40.first);
  fn_822314E8(param_1);
  return;
}

