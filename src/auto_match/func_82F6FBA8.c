extern unsigned int DAT_832633fc;
extern unsigned int fn_82F84350;
extern unsigned int lbl_8216A9E0;
extern unsigned int lbl_831BB900;

unsigned __int64 _mtinit(void)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int uVar4;
  
  fn_82F6CB70();
  iVar2 = fn_82F71B08();
  if (iVar2 != 0) {
    uVar1 = KeTlsAlloc();
    lbl_831BB900 = (unsigned int)uVar1;
    if (((lbl_831BB900 != 0xffffffff) &&
        (puVar3 = (unsigned int *)fn_82F6E1C8(1,0xc4), puVar3 != (unsigned int *)0x0)) &&
       (iVar2 = KeTlsSetValue(uVar1,puVar3), iVar2 != 0)) {
      puVar3[2] = 0;
      puVar3[0x17] = &lbl_8216A9E0;
      puVar3[5] = 1;
      uVar4 = fn_82A1BB18();
      *puVar3 = uVar4;
      puVar3[1] = 0xffffffff;
      DAT_832633fc = fn_82F84350;
      fn_82A1EA08(0xffffffff832633f4,1);
      return 1;
    }
  }
  fn_82F6F8F8();
  return 0;
}
