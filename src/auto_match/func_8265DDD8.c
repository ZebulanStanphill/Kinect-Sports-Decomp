extern int fn_822300F8();
extern int fn_8265DAB8();
extern int fn_8265DDA0();
extern int fn_82663F28();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


int fn_8265DDD8(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
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
    uVar4 = (unsigned __int64)uStack0000001c;
    uVar5 = (unsigned __int64)uStack00000024;
    lVar2 = fn_8265DDA0(iStack00000014);
    uVar7 = (unsigned __int64)uStack0000001c;
    uVar6 = (unsigned __int64)uStack00000024;
    lVar3 = fn_8265DDA0(iStack00000014);
    fn_822300F8(lVar3 + (unsigned __int64)uStack0000001c,lVar2 + uVar7 + uVar6,(uVar1 - uVar4) - uVar5);
    fn_8265DAB8(iStack00000014,*(int *)(iStack00000014 + 0x10) - uStack00000024);
  }
  return iStack00000014;
}

