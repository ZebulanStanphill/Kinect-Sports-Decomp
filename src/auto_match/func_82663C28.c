extern int fn_822974E8();
extern int fn_82663848();
extern int fn_82663B70();
extern int fn_82663F28();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


int fn_82663C28(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  if (*(unsigned int *)(param_1 + 0x10) < param_2) {
    fn_82663F28(param_1);
  }
  if (*(int *)(iStack00000014 + 0x10) - uStack0000001c < uStack00000024) {
    uStack00000024 = *(int *)(iStack00000014 + 0x10) - uStack0000001c;
  }
  if (uStack00000024 != 0) {
    uVar1 = *(unsigned int *)(iStack00000014 + 0x10);
    uVar6 = (unsigned __int64)uStack0000001c;
    uVar7 = (unsigned __int64)uStack00000024;
    lVar4 = fn_82663B70(iStack00000014);
    uVar2 = (unsigned __int64)uStack0000001c;
    uVar3 = (unsigned __int64)uStack00000024;
    lVar5 = fn_82663B70(iStack00000014);
    fn_822974E8(lVar5 + ((unsigned __int64)uStack0000001c & 0x7fffffff) * 2,
                 lVar4 + (uVar2 & 0x7fffffff) * 2 + (uVar3 & 0x7fffffff) * 2,(uVar1 - uVar6) - uVar7
                );
    fn_82663848(iStack00000014,*(int *)(iStack00000014 + 0x10) - uStack00000024);
  }
  return iStack00000014;
}

