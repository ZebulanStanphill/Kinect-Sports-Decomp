extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82517978();
extern int fn_82517A50();
extern int fn_827D83A0();
extern int fn_827D8DE0();
extern int fn_827D98C0();


/* WARNING: Removing unreachable block (ram,0x827d85e8) */
/* WARNING: Removing unreachable block (ram,0x827d864c) */

unsigned __int64 fn_827D8560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_60 [8];
  unsigned char auStack_58 [24];
  
  iVar2 = param_1 + 0x6c;
  RtlEnterCriticalSection(iVar2);
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa4);
  if (uVar3 != *(unsigned int *)(param_1 + 0xa8)) {
    do {
      fn_82517A50(auStack_58,uVar3);
      iVar1 = fn_827D98C0(0);
      if (iVar1 == param_2) {
        fn_827D8DE0(auStack_60,param_1 + 0xa4,uVar3);
        fn_82517978(auStack_60,0,0,0);
        fn_827D83A0(param_1,auStack_60);
        RtlLeaveCriticalSection(iVar2);
        return 0;
      }
      uVar3 = uVar3 + 8;
    } while ((uVar3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0xa8));
  }
  RtlLeaveCriticalSection(iVar2);
  return 2;
}

