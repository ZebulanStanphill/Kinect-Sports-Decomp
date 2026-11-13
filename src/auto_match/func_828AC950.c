extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8265CA20();
extern int fn_828AC8F0();
extern int fn_828E9D28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828EA0D0();
extern unsigned int iStack_28;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


unsigned __int64 fn_828AC950(unsigned __int64 param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char *puStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  uVar3 = 0;
  puStack_30 = auStack_50;
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_2c = 2;
  fn_828E9D28(auStack_40,auStack_50,2);
  fn_828AC8F0(param_1,auStack_40);
  fn_828E9D40(auStack_40);
  iVar1 = fn_828E9DA8(auStack_40);
  iVar2 = fn_828E9D90(auStack_40);
  if (0xb < iVar1 - iVar2) {
    uVar3 = fn_828EA0D0(auStack_40,0xc);
  }
  if (iStack_28 != 0) {
    fn_8265CA20();
  }
  return uVar3;
}

