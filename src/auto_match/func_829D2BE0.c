extern unsigned int __imp__ExEventObjectType;
extern int fn_82F691F0();
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215A40;


/* WARNING: Removing unreachable block (ram,0x829d2cf8) */

unsigned __int64 fn_829D2BE0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if ((lbl_83215000 & 8) == 0) {
    uVar1 = 0xffffffff83010005;
  }
  else if ((param_2 & 0xfffffffc) == 0) {
    RtlEnterCriticalSection(0xffffffff8315c454);
    if (lbl_83215A40 == 0) {
      if (((param_1 & 0xffffffff) == 0) ||
         (iVar2 = ObReferenceObjectByHandle(param_1,__imp__ExEventObjectType,0xffffffff83215a54),
         -1 < iVar2)) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(0xffffffff83217030,0,0xb0);
      }
      uVar1 = 0xffffffff80070057;
    }
    else {
      uVar1 = 0xffffffff800704df;
    }
    RtlLeaveCriticalSection(0xffffffff8315c454);
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

