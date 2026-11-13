extern unsigned int *auStack_50;
extern int fn_829D47B0();
extern int fn_829D5F60();
extern int fn_82A28E60();
extern int fn_82A2B130();
extern int fn_82A2B218();
extern unsigned int lbl_832179FC;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64
fn_829D6198(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned char auStack_50 [8];
  __int64 alStack_48;
  
  iVar2 = XamUserGetIndexFromXUID(param_1,1,&uStack_58);
  if ((iVar2 < 0) || (iVar2 = XamUserNuiGetEnrollmentIndex(uStack_58,auStack_50), iVar2 < 0)) {
    fn_829D47B0(&uStack_54,0x64000);
    uVar3 = (unsigned __int64)uStack_54;
    if (uVar3 != 0) {
      alStack_48 = 0;
      uStack_60 = 0x32000;
      uStack_5c = 0x32000;
      iVar2 = fn_82A2B218(param_1,&alStack_48,uVar3,&uStack_60,0);
      if (((-1 < iVar2) && (alStack_48 != 0x80000000)) && (uStack_60 < 0x32001)) {
        *(char *)(param_3 + 0x21) = *(char *)(param_3 + 0x21) + '\x01';
        iVar2 = fn_82A2B130(1,0x10001,uVar3,uStack_60,0,&uStack_5c);
        if ((-1 < iVar2) &&
           (iVar2 = fn_82A2B130(1,0x10001,uVar3,uStack_60,uVar3 + 0x32000,&uStack_5c),
           -1 < iVar2)) {
          uVar1 = fn_829D5F60(uVar3 + 0x32000,uStack_5c,param_2,param_4,param_5);
          fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,uVar3);
          return uVar1;
        }
      }
      fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,uVar3);
    }
  }
  return 0;
}

