extern int fn_822300F0();
extern int fn_8265DAB8();
extern int fn_8265DC30();
extern int fn_8265DDA0();
extern int fn_8265DED8();
extern int fn_8265E080();
extern int fn_82663F28();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


int fn_82666808(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar3;
  int iVar4;
  char cVar5;
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar6;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uVar3 = fn_8265DED8(param_2);
  if (uVar3 < uStack00000024) {
    fn_82663F28(iStack00000014);
  }
  iVar4 = fn_8265DED8(uStack0000001c);
  if (iVar4 - uStack00000024 < uStack0000002c) {
    uStack0000002c = iVar4 - uStack00000024;
  }
  if (0xffffffffU - *(int *)(iStack00000014 + 0x10) <= uStack0000002c) {
    fn_8265E080(iStack00000014);
  }
  if (uStack0000002c != 0) {
    iVar4 = *(int *)(iStack00000014 + 0x10) + uStack0000002c;
    cVar5 = fn_8265DC30(iStack00000014,iVar4,0);
    uVar3 = uStack0000002c;
    if (cVar5 != '\0') {
      lVar1 = fn_8265DDA0(uStack0000001c);
      uVar6 = (unsigned __int64)uStack00000024;
      lVar2 = fn_8265DDA0(iStack00000014);
      fn_822300F0(lVar2 + (unsigned __int64)*(unsigned int *)(iStack00000014 + 0x10),lVar1 + uVar6,uVar3);
      fn_8265DAB8(iStack00000014,iVar4);
    }
  }
  return iStack00000014;
}

