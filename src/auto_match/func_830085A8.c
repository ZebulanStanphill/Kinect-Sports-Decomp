extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82F68B7C();
extern int fn_82FF9B18();
extern int fn_82FFDF28();
extern int fn_82FFF348();
extern int fn_8302B530();
extern int fn_8302B540();
extern unsigned int lbl_832642F0;
extern unsigned int uStack_38;


void fn_830085A8(int param_1)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_40 [8];
  unsigned int uStack_38;
  unsigned char auStack_30 [48];
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
  lVar1 = fn_82F68B7C(lbl_832642F0,uVar3);
  fn_8302B530();
  RtlEnterCriticalSection(lVar1 + 0x50);
  fn_82FFDF28(auStack_40,lVar1 + 0x90,uVar3);
  if (((unsigned __int64)uStack_38 != 0) &&
     (iVar2 = fn_82FF9B18((unsigned __int64)uStack_38 + 8), iVar2 == 0)) {
    fn_82FFF348(auStack_30,lVar1 + 0x90,auStack_40);
  }
  RtlLeaveCriticalSection(lVar1 + 0x50);
  fn_8302B540();
  return;
}

