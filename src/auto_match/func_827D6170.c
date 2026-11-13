extern unsigned int *auStack_50;
extern int fn_82517A50();
extern int fn_827D98C0();
extern int iRam00000000;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


/* WARNING: Removing unreachable block (ram,0x827d6220) */

void fn_827D6170(int param_1,unsigned int param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uStack0000001c;
  unsigned char auStack_50 [80];
  
  uStack0000001c = param_2;
  RtlEnterCriticalSection(param_1 + 0x6c);
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
  if (uVar2 != *(unsigned int *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_50,uVar2);
      if ((param_3 == -1) || (iVar1 = fn_827D98C0(0), param_3 == iVar1)) {
        (**(int (***)())(iRam00000000 + 0x1c))(0,&stack0x0000001c,param_4);
      }
      uVar2 = uVar2 + 8;
    } while ((uVar2 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return;
}

