extern int fn_822300F0();
extern int fn_8265DAB8();
extern int fn_8265DC30();
extern int fn_8265DD28();
extern int fn_8265DDA0();
extern int fn_8265E080();
extern int fn_82666808();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


int fn_82666928(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar4;
  __int64 lVar3;
  int iVar5;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  cVar4 = fn_8265DD28(param_1,param_2);
  uVar1 = uStack00000024;
  if (cVar4 == '\0') {
    if (0xffffffffU - *(int *)(iStack00000014 + 0x10) <= uStack00000024) {
      fn_8265E080(iStack00000014);
    }
    if (uStack00000024 != 0) {
      iVar5 = *(int *)(iStack00000014 + 0x10) + uStack00000024;
      cVar4 = fn_8265DC30(iStack00000014,iVar5,0);
      uVar2 = uStack00000024;
      uVar1 = uStack0000001c;
      if (cVar4 != '\0') {
        lVar3 = fn_8265DDA0(iStack00000014);
        fn_822300F0(lVar3 + (unsigned __int64)*(unsigned int *)(iStack00000014 + 0x10),uVar1,uVar2);
        fn_8265DAB8(iStack00000014,iVar5);
      }
    }
  }
  else {
    lVar3 = fn_8265DDA0(iStack00000014);
    iStack00000014 =
         fn_82666808(iStack00000014,iStack00000014,(unsigned __int64)uStack0000001c - lVar3,uVar1);
  }
  return iStack00000014;
}

