extern unsigned int *auStack_21e;
extern unsigned int *auStack_2c8;
extern unsigned int *auStack_2d0;
extern int memset();
extern unsigned int uStack_220;
extern unsigned int uStack_2cc;


unsigned __int64 XapiPAL50Incompatible(void)

{
  int iVar1;
  unsigned char auStack_2d0 [4];
  unsigned int uStack_2cc;
  unsigned int auStack_2c8 [42];
  unsigned short uStack_220;
  unsigned char auStack_21e [518];
  
  iVar1 = XexCheckExecutablePrivilege(10);
  if (((((iVar1 != 0) && (iVar1 = XGetAVPack(), iVar1 != 3)) && (iVar1 != 6)) &&
      ((iVar1 != 8 && (iVar1 != 4)))) &&
     ((iVar1 = ExGetXConfigSetting(2,2,&uStack_2cc,4,auStack_2d0), iVar1 == 0 &&
      ((uStack_2cc & 0xff00) == 0x300)))) {
    iVar1 = ExGetXConfigSetting(3,10,auStack_2c8,4,auStack_2d0);
    if (iVar1 == 0) {
      if (((auStack_2c8[0] & 0x800000) != 0) || ((auStack_2c8[0] & 0x400000) == 0)) {
        XGetLanguage();
        uStack_220 = 0;
                    /* WARNING: Subroutine does not return */
        memset(auStack_21e,0,0x1fe);
      }
    }
  }
  return 0;
}

