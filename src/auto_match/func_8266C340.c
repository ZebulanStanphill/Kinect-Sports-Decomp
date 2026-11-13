extern unsigned int *auStack_820;
extern int fn_8265CF50();
extern int fn_82A29A38();
extern int fn_82F66D08();
extern int fn_82F69290();
extern int fn_82F96710();
extern unsigned int iStack00000014;
extern unsigned int iStack_18;
extern unsigned int iStack_20;
extern unsigned int stack0x00000018;
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_8266C340(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int *piVar1;
  int iStack00000014;
  unsigned __int64 uStack00000018;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned char auStack_820 [2048];
  int iStack_20;
  char *pcStack_1c;
  int iStack_18;
  
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  iStack00000014 = param_1;
  if (param_1 == 0) {
    fn_82F96710(0xffffffff82002a2c);
  }
  else {
    iStack_20 = fn_82F66D08(auStack_820,0x400,param_1,&stack0x00000018);
    if (iStack_20 < 1) {
      fn_82F96710(iStack00000014);
    }
    else {
      fn_82F96710(auStack_820);
    }
  }
  piVar1 = (int *)fn_8265CF50(0xffffffff831e7a1c,0);
  iStack_18 = *piVar1;
  if (iStack_18 == 1) {
    fn_82A29A38();
  }
  else if (iStack_18 == 3) {
    pcStack_1c = "XLipAssert hit!";
                    /* WARNING: Subroutine does not return */
    fn_82F69290(&pcStack_1c,0xffffffff821ddad0);
  }
  return;
}

