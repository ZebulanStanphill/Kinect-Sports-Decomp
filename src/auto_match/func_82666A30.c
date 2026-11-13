#define true 1
extern int fn_8223D428();
extern int fn_822462B0();
extern int fn_8265DDA0();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_82666A30(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  int iVar3;
  char cVar5;
  __int64 lVar2;
  unsigned int uVar4;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  if (param_4 == 0) {
    uStack_1c = param_3;
    if (*(unsigned int *)(param_1 + 0x10) <= param_3) {
      uStack_1c = *(unsigned int *)(param_1 + 0x10);
    }
    uVar1 = (unsigned __int64)uStack_1c;
  }
  else {
    if (param_4 <= *(unsigned int *)(param_1 + 0x10)) {
      uStack_18 = param_3;
      if (*(int *)(param_1 + 0x10) - param_4 <= param_3) {
        uStack_18 = *(int *)(param_1 + 0x10) - param_4;
      }
      iStack00000014 = param_1;
      uStack0000001c = param_2;
      uStack00000024 = param_3;
      uStack0000002c = param_4;
      iVar3 = fn_8265DDA0(param_1);
      uStack_20 = iVar3 + uStack_18;
      while( true ) {
        cVar5 = fn_8223D428(uStack_20,uStack0000001c);
        if ((cVar5 != '\0') &&
           (iVar3 = fn_822462B0(uStack_20,uStack0000001c,uStack0000002c), iVar3 == 0)) {
          lVar2 = fn_8265DDA0(iStack00000014);
          return (unsigned __int64)uStack_20 - lVar2;
        }
        uVar4 = fn_8265DDA0(iStack00000014);
        if (uStack_20 == uVar4) break;
        uStack_20 = uStack_20 - 1;
      }
    }
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

