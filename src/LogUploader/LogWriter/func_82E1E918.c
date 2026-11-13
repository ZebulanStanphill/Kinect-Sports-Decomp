extern unsigned int *auStack_30;
extern int fn_8251C390();
extern int fn_8265CA20();
extern int fn_829E53B0();
extern int fn_82A1E108();
extern int fn_82A1E810();
extern int fn_82A1F2F8();
extern int fn_82E1E6E0();
extern int fn_82E21B50();


unsigned __int64 fn_82E1E918(int param_1)

{
  char cVar1;
  int iVar2;
  unsigned char auStack_30 [16];
  
  cVar1 = *(char *)(param_1 + 0x15);
  while (cVar1 == '\0') {
    fn_82A1E108(0xfa);
    while ((*(int *)(param_1 + 0x18) != 0 && (*(char *)(param_1 + 0x15) == '\0'))) {
      fn_8251C390(auStack_30,0xffffffff8214ba04,0x30b);
      fn_82E1E6E0(param_1,(*(unsigned int **)(param_1 + 0x18))[1],**(unsigned int **)(param_1 + 0x18))
      ;
      while (*(char *)(param_1 + 0x14) != '\0') {
        fn_82A1F2F8();
        fn_82A1E108(0x19);
      }
      iVar2 = *(int *)(param_1 + 0x18);
      *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(iVar2 + 8);
      if (iVar2 != 0) {
        fn_82E21B50(iVar2);
        fn_8265CA20(iVar2);
      }
      fn_829E53B0(auStack_30);
    }
    fn_82A1E810(*(unsigned int *)(param_1 + 0x3c));
    cVar1 = *(char *)(param_1 + 0x15);
  }
  return 0;
}

