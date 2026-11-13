extern unsigned int *auStack_50;
extern int fn_8267C0B8();
extern int memcpy();
extern unsigned int lbl_831E7E60;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_38;


unsigned int fn_8267C378(unsigned __int64 param_1)

{
  __int64 lVar1;
  unsigned char auStack_50 [24];
  unsigned int uStack_38;
  
  if ((unsigned __int64)lbl_831E7E60 != 0) {
    lVar1 = (unsigned __int64)lbl_831E7E60 + 0x2c4;
    RtlEnterCriticalSection(lVar1);
    if (lbl_831E7E64 == 0) {
      memcpy(auStack_50,param_1,0x20);
      uStack_38 = 1;
      lbl_831E7E64 = fn_8267C0B8(lbl_831E7E60,0xffffffff821c2764,0,auStack_50);
      RtlLeaveCriticalSection(lVar1);
      return lbl_831E7E64;
    }
    RtlLeaveCriticalSection(lVar1);
  }
  return 0;
}

