extern unsigned int *auStack_24;
extern int fn_82A9FA30();
extern int fn_82C7CA40();
extern unsigned int iStack_30;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


unsigned __int64 fn_82C47498(int param_1)

{
  int iVar1;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int auStack_24;
  
  iStack_30 = *(int *)(*(int *)(param_1 + 0x50) + 0x18);
  if (iStack_30 != 0) {
    while (iStack_30 != 0) {
      iVar1 = *(int *)(param_1 + 0x50);
      fn_82A9FA30(*(unsigned int *)(iVar1 + 0x2c),0,&uStack_28,4,&uStack_2c,&iStack_30);
      *(int *)(iVar1 + 0x18) = iStack_30;
      if (*(int *)(*(int *)(iVar1 + 0x28) + 0x3cb0) == 7) {
        auStack_24 = uStack_28;
        fn_82C7CA40(*(int *)(iVar1 + 0x28),uStack_28,uStack_2c,&auStack_24,&uStack_2c,iStack_30
                         );
      }
    }
  }
  return 0;
}

