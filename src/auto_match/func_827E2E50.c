extern int fn_82517978();
extern int fn_827D5600();
extern int fn_827D9918();
extern int fn_827E0088();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


int fn_827E2E50(int param_1,int param_2)

{
  int uVar1;
  int iVar3;
  int uVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  if (*(void **)(param_1 + 0x4c) != 0) {
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    fn_82517978(&stack_pair_30.first,*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10),0);
    uVar1 = (*(int (**)())(**(int **)(param_1 + 0x4c) + 8))
                      (*(int **)(param_1 + 0x4c),param_2,&stack_pair_30.first);
    iVar3 = (int)uVar1;
    if ((iVar3 != 0x3e5) && (iVar3 != 0x3e4)) {
      if (iVar3 == 0) {
        fn_827E0088(fn_827D5600(param_2),param_1 + 0x18);
        (*(int (**)())(**(int **)(param_1 + 0x40) + 0x34))
                  (*(int **)(param_1 + 0x40),param_1 + 0x18,*(unsigned int *)(param_1 + 0x48));
      }
      fn_827D9918(*(unsigned int *)(param_1 + 0x40));
      (*(int (**)())(**(int **)(param_1 + 0x40) + 0x50))
                (*(int **)(param_1 + 0x40),*(unsigned int *)(param_1 + 0x4c));
    }
  }
  else { return 2; }
  return uVar1;
}

