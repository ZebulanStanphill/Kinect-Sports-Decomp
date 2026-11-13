extern unsigned int *auStack_50;
extern int fn_82517A50();
extern int iRam00000000;


/* WARNING: Removing unreachable block (ram,0x827d6770) */

unsigned __int64 fn_827D66D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_50 [16];
  
  uVar2 = 0;
  RtlEnterCriticalSection(param_1 + 0x6c);
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
  if (uVar3 != *(unsigned int *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_50,uVar3);
      iVar1 = (**(int (***)())(iRam00000000 + 0x60))(0,param_2,param_3);
      if (iVar1 != 0) {
        uVar2 = 1;
        break;
      }
      uVar3 = uVar3 + 8;
    } while ((uVar3 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return uVar2;
}

