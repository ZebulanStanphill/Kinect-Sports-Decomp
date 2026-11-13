extern unsigned int *auStack_7c;
extern int fn_829C89A8();
extern int fn_829C8A38();
extern int fn_82F691F0();
extern unsigned int lbl_83217148;
extern unsigned int lbl_8321715C;
extern unsigned int lbl_83217160;
extern unsigned int lbl_83217164;


unsigned __int64
fn_829CAE90(unsigned __int64 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  unsigned char auStack_7c [124];
  
  if ((((param_2 == 0) || (param_3 == 0)) || (param_5 == 0)) || ((param_4 == 0 || (param_6 == 0))))
  {
    uVar1 = 0xffffffff80070057;
  }
  else {
    if (lbl_83217148 != 0) {
      RtlEnterCriticalSection(0xffffffff8315c428);
      lbl_83217164 = 1;
      lbl_8321715C = 0x80004005;
      lbl_83217160 = 0x8321714c;
      sync(0);
      RtlLeaveCriticalSection(0xffffffff8315c428);
      fn_829C8A38(1,param_7);
      fn_829C89A8(0,1);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_7c,0,0x2c);
    }
    uVar1 = 0xffffffff83010005;
  }
  return uVar1;
}

