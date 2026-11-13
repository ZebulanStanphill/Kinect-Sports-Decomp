extern unsigned int *auStack_50;
extern int fn_82517A50();
extern int fn_8256DE08();
extern int fn_827D98C0();
extern int iRam00000000;


/* WARNING: Removing unreachable block (ram,0x827d6a24) */
/* WARNING: Removing unreachable block (ram,0x827d6a48) */

unsigned __int64 fn_827D6968(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_50 [16];
  
  fn_8256DE08(auStack_50,0);
  iVar3 = param_1 + 0x6c;
  RtlEnterCriticalSection(iVar3);
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
  if (uVar4 != *(unsigned int *)(param_1 + 0x48)) {
    do {
      fn_82517A50(auStack_50,uVar4);
      if (((param_3 == -1) || (iVar1 = fn_827D98C0(0), param_3 == iVar1)) &&
         (cVar2 = (**(int (***)())(iRam00000000 + 0x20))(0,param_2), cVar2 != '\0')) {
        RtlLeaveCriticalSection(iVar3);
        return 1;
      }
      uVar4 = uVar4 + 8;
    } while ((uVar4 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x48));
  }
  RtlLeaveCriticalSection(iVar3);
  return 0;
}

