extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_825159C8();
extern int fn_82518120();
extern int fn_82897060();
extern int fn_82F56D40();
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_82514E00(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iStack_50;
  unsigned int uStack_4c;
  struct { unsigned int first; int second; } stack_pair_48;

  unsigned char auStack_40 [4];
  int iStack_3c;
  
  iStack_50 = *(int *)(param_1 + 0x28);
  iVar1 = fn_82518120();
  fn_82F56D40(&uStack_4c,iVar1,&iStack_50);
  if ((((unsigned __int64)uStack_4c != (unsigned __int64)*(unsigned int *)(iVar1 + 4)) &&
      ((unsigned __int64)uStack_4c != 0xfffffffffffffff0)) &&
     (iStack_50 = **(int **)(uStack_4c + 0x14), (int *)iStack_50 != *(int **)(uStack_4c + 0x14))) {
    do {
      iVar1 = iStack_50;
      puVar2 = (unsigned int *)(**(int (***)())(iStack_50 + 0x4c))(auStack_40);
      stack_pair_48.first = *puVar2;
      stack_pair_48.second = puVar2[1];
      *puVar2 = 0;
      puVar2[1] = 0;
      fn_82897060(iVar1 + 0x18,*(unsigned int *)(iVar1 + 0x34) & 0xffff,
                        *(unsigned int *)(iVar1 + 0x38) & 0xffff,*(unsigned int *)(iVar1 + 0x48),
                        *(unsigned int *)(iVar1 + 0x40),*(unsigned int *)(iVar1 + 0x44),&stack_pair_48.first,
                        param_1);
      if (stack_pair_48.second != 0) {
        fn_822315A0();
      }
      if (iStack_3c != 0) {
        fn_822315A0();
      }
      fn_825159C8(&iStack_50);
    } while (iStack_50 != *(int *)(uStack_4c + 0x14));
  }
  return;
}

