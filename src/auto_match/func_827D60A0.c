extern unsigned int *auStack_50;
extern int fn_82517A50();
extern int iRam00000000;


/* WARNING: Removing unreachable block (ram,0x827d6130) */

void fn_827D60A0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned char auStack_50 [80];
  
  RtlEnterCriticalSection(param_1 + 0x6c);
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
  if (uVar1 != *(unsigned int *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_50,uVar1);
      (**(int (***)())(iRam00000000 + 0x18))(0,param_2,param_3);
      uVar1 = uVar1 + 8;
    } while ((uVar1 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return;
}

