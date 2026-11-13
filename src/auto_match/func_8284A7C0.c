extern unsigned int *auStack_34;
extern unsigned int *auStack_40;
extern int fn_822462F0();
extern int fn_8284A410();
extern int fn_8284A658();
extern int fn_82BA02A8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_38;


unsigned int * fn_8284A7C0(unsigned int *param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *puStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  unsigned int auStack_40 [2];
  unsigned int uStack_38;
  unsigned int auStack_34 [3];
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int *puStack_18;
  
  puStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack_28 = fn_8284A658(param_2,param_3);
  fn_8284A410(auStack_40,uStack_28,iStack0000001c);
  uStack_38 = *(unsigned int *)(iStack0000001c + 4);
  uStack_24 = uStack_38;
  fn_82BA02A8(&uStack_38,iStack0000001c);
  if (uStack_38 != auStack_40[0]) {
    uStack_20 = auStack_40[0];
    uVar1 = fn_822462F0(uStack00000024,(unsigned __int64)auStack_40[0] + 0xc);
    if ((int)LZCOUNT(uVar1) != 0) {
      puStack_18 = auStack_40;
      goto LAB_8284a89c;
    }
  }
  auStack_34[0] = *(unsigned int *)(iStack0000001c + 4);
  uStack_1c = auStack_34[0];
  fn_82BA02A8(auStack_34,iStack0000001c);
  puStack_18 = auStack_34;
LAB_8284a89c:
  *puStack00000014 = *puStack_18;
  return puStack00000014;
}

