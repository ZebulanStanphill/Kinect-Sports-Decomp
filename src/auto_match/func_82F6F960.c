extern int fn_82A1BB18();
extern int free();
extern int fn_82F6E1C8();
extern unsigned int lbl_8216A9E0;
extern unsigned int lbl_831BB900;


unsigned int * _getptd_noexit(void)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  uVar1 = thunk_FUN_82a2b798();
  uVar2 = KeTlsGetValue(lbl_831BB900);
  if (uVar2 == 0) {
    iVar3 = KeTlsSetValue(lbl_831BB900,1);
    puVar4 = (unsigned int *)0x0;
    if (iVar3 != 0) {
      puVar4 = (unsigned int *)fn_82F6E1C8(1,0xc4);
      if (puVar4 == (unsigned int *)0x0) {
        KeTlsSetValue(lbl_831BB900,0);
      }
      else {
        iVar3 = KeTlsSetValue(lbl_831BB900,puVar4);
        if (iVar3 == 0) {
          free(puVar4);
          puVar4 = (unsigned int *)0x0;
        }
        else {
          puVar4[2] = 0;
          puVar4[0x17] = &lbl_8216A9E0;
          puVar4[5] = 1;
          uVar5 = fn_82A1BB18();
          *puVar4 = uVar5;
          puVar4[1] = 0xffffffff;
        }
      }
    }
  }
  else {
    puVar4 = (unsigned int *)(-(unsigned int)(uVar2 != 1) & uVar2);
  }
  thunk_FUN_82a2b748(uVar1);
  return puVar4;
}

