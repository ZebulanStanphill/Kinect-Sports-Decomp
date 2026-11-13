extern unsigned int *auStack_80;
extern int fn_82A34B08();
extern int fn_82A34C78();
extern int fn_82A34DC8();
extern int fn_82A37768();
extern unsigned int iStack_78;


unsigned __int64 fn_82A35560(int param_1)

{
  int iVar1;
  unsigned int auStack_80 [2];
  int iStack_78;
  
  if (*(int (***)())(param_1 + 0x44) != (int (**)())0x0) {
    (**(int (***)())(param_1 + 0x44))(0xffffffff820893a4);
  }
  while (iVar1 = fn_82A37768(param_1 + 0xc4,auStack_80), iVar1 != 0) {
    if (auStack_80[0] == 0) {
      fn_82A34B08(param_1,auStack_80);
    }
    else if (auStack_80[0] == 1) {
      fn_82A34C78(param_1,auStack_80);
    }
    else if (auStack_80[0] < 3) {
      fn_82A34DC8(param_1,auStack_80);
    }
    if (iStack_78 != 0) {
      NtSetEvent(iStack_78,0);
    }
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    (**(int (***)())(param_1 + 0x48))();
  }
  return 0;
}

