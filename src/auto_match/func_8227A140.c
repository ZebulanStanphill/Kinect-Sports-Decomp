extern unsigned int *auStack_b0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82526C70();
extern int fn_82672C20();
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_8227A140(int param_1,int param_2,unsigned char param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  unsigned char uStack_b8;
  unsigned char auStack_b0 [160];
  
  *(unsigned int *)(param_1 + 0xf8) = 1;
  if (*(int *)(param_1 + 0xdc) != 0) {
    if (*(int **)(param_1 + 0xa4) != (int *)0x0) {
      (**(int (***)())(**(int **)(param_1 + 0xa4) + 4))();
    }
    puVar3 = *(unsigned int **)(param_1 + 0x10);
    for (puVar1 = (unsigned int *)*puVar3; puVar1 != puVar3; puVar1 = (unsigned int *)*puVar1) {
      iVar2 = puVar1[2];
      if (*(int *)(iVar2 + 0x10) == param_2) {
        stack_pair_c0.first = 0;
        stack_pair_c0.second = 0;
        fn_82273CD8(&stack_pair_c0.first,2);
        uStack_b8 = param_3;
        fn_82526C70(auStack_b0,0x80,0xffffffff821a81e4,iVar2 + 0x18);
        fn_82672C20(*(unsigned int *)(iVar2 + 8),auStack_b0,&stack_pair_c0.first,1);
        fn_82273C88(&stack_pair_c0.first);
        break;
      }
      puVar3 = *(unsigned int **)(param_1 + 0x10);
    }
  }
  *(unsigned int *)(param_1 + 0xf8) = 0;
  return;
}

