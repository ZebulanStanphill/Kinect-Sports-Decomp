typedef unsigned char bool;
extern int fn_825315E0();
extern int fn_825467B8();
extern int fn_825611A8();
extern int fn_82639EA8();
extern int fn_8263DE70();
extern int iRam8326b47c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_8326B478;
extern unsigned int lbl_83296BB8;
extern unsigned int uRam8326b46c;
extern unsigned int uRam8326b480;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;


void fn_82546930(void)

{
  bool bVar1;
  unsigned int uStack_6c;
  unsigned int uStack_64;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;

  if (uRam8326b480 != 0) {
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    uStack_6c = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3220);
    uStack_38 = uStack_6c;
    uStack_58 = lbl_8326B430;
    uStack_64 = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3224);
    uStack_34 = uStack_64;
    uStack_6c = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3218);
    uStack_50 = *(unsigned int *)(lbl_8320A898 + 0x3228);
    uStack_64 = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x321c);
    uStack_4c = *(unsigned int *)(lbl_8320A898 + 0x322c);
    uStack_54 = lbl_8326B434;
    stack_pair_40.first = uStack_6c;
    stack_pair_40.second = uStack_64;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    fn_82639EA8(lbl_8320A898,&stack_pair_60.first);
    fn_8263DE70((double)lbl_821CA460,lbl_8320A898,0,0,0xf,0);
    fn_82639EA8(lbl_8320A898,&stack_pair_40.first);
  }
  fn_825467B8();
  bVar1 = iRam8326b47c != lbl_8326B478;
  lbl_8326B478 = iRam8326b47c;
  uRam8326b480 = (unsigned int)bVar1;
  if (bVar1) {
    fn_825611A8();
  }
  lbl_83296BB8 = 1;
  fn_825315E0(lbl_8320A898);
  uRam8326b46c = 0;
  return;
}
