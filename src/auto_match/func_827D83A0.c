extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517A50();
extern int fn_827D9350();
extern int fn_827D98D0();


/* WARNING: Removing unreachable block (ram,0x827d8450) */
/* WARNING: Removing unreachable block (ram,0x827d849c) */

void fn_827D83A0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int *puStack0000001c;
  unsigned char auStack_60 [8];
  unsigned char auStack_58 [88];
  
  iVar4 = param_1 + 0x6c;
  puStack0000001c = param_2;
  RtlEnterCriticalSection(iVar4);
  uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
  if (uVar5 != *(unsigned int *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_58,uVar5);
      uVar1 = *param_2;
      iVar2 = fn_827D98D0(0);
      iVar3 = fn_827D98D0(uVar1);
      if (iVar3 < iVar2) {
        fn_827D9350(auStack_60,param_1 + 0x44,uVar5,param_2);
        RtlLeaveCriticalSection(iVar4);
        goto LAB_827d8458;
      }
      uVar5 = uVar5 + 8;
    } while ((uVar5 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x48));
  }
  fn_827D9350(auStack_60,param_1 + 0x44,uVar5,param_2);
  RtlLeaveCriticalSection(iVar4);
LAB_827d8458:
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

