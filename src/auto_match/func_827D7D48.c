extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82517A50();
extern int fn_8256DE08();
extern int fn_827D8DE0();
extern int fn_827D9138();


/* WARNING: Removing unreachable block (ram,0x827d7df0) */
/* WARNING: Removing unreachable block (ram,0x827d7e54) */

void fn_827D7D48(int param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piStack0000001c;
  unsigned char auStack_50 [8];
  unsigned char auStack_48 [72];
  
  piStack0000001c = param_2;
  (**(int (***)())(*(int *)*param_2 + 8))();
  iVar1 = param_1 + 0x6c;
  RtlEnterCriticalSection(iVar1);
  fn_8256DE08(auStack_48,0);
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
  if (uVar2 != *(unsigned int *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_48,uVar2);
      if (*param_2 == 0) {
        fn_827D8DE0(auStack_50,param_1 + 0x44,uVar2);
        RtlEnterCriticalSection(param_1 + 0xf4);
        fn_827D9138(param_1 + 0xcc,param_2);
        RtlLeaveCriticalSection(param_1 + 0xf4);
        RtlLeaveCriticalSection(iVar1);
        goto LAB_827d7df4;
      }
      uVar2 = uVar2 + 8;
    } while ((uVar2 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(iVar1);
LAB_827d7df4:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

