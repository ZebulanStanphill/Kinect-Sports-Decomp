typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_190;
extern int fn_82F664B0();
extern int fn_82F691F0();
extern int fn_82F69A80();
extern unsigned int lbl_83214FFC;
extern unsigned int uRam8315c424;


unsigned __int64 fn_829CF1C0(unsigned int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  bool bVar1;
  int iVar2;
  unsigned char auStack_190 [400];
  
  if ((param_1 & 0x33ffe704) == 0) {
    if (((param_1 & 9) != 0) || (bVar1 = false, (param_1 & 0x80000000) == 0)) {
      bVar1 = true;
    }
    if (((param_1 != 0) && ((param_2 == 0xffffffff || (param_2 < 6)))) &&
       ((!bVar1 ||
        ((iVar2 = fn_82F664B0(auStack_190,0x104,param_4), iVar2 == 0 &&
         (iVar2 = fn_82F69A80(auStack_190,0x104,uRam8315c424), iVar2 == 0)))))) {
      RtlEnterCriticalSection(0xffffffff8315c3ec);
      if (lbl_83214FFC != 0) {
        RtlLeaveCriticalSection(0xffffffff8315c3ec);
        return 0xffffffff800704df;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(0xffffffff83215000,0,0x28e0);
    }
  }
  return 0xffffffff80070057;
}

