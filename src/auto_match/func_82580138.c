extern int fn_82631578();
extern int fn_82631920();
extern int fn_82639EA8();
extern int fn_82838650();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8327F8B8;
extern unsigned int lbl_8327F94C;
extern unsigned int lbl_832810F0;
extern unsigned int lbl_832810F4;
extern unsigned int lbl_832810F8;
extern unsigned int lbl_83296E10;
extern unsigned int lbl_83296E14;
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


void fn_82580138(void)

{
  unsigned int uStack_6c;
  unsigned int uStack_64;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  if (lbl_832810F0 != 0) {
    fn_82838650(*(unsigned int *)(lbl_832810F0 + 0x14),0);
    uStack_50 = lbl_821CA460;
    uStack_4c = lbl_821CA460;
    uStack_6c = (unsigned int)(__int64)lbl_83296E14;
    uStack_54 = uStack_6c;
    uStack_64 = (unsigned int)(__int64)lbl_832810F4;
    stack_pair_60.first = uStack_64;
    uStack_64 = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3218);
    uStack_40 = uStack_64;
    uStack_64 = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3220);
    uStack_38 = uStack_64;
    uStack_6c = (unsigned int)(__int64)lbl_83296E10;
    uStack_58 = uStack_6c;
    uStack_64 = (unsigned int)(__int64)lbl_832810F8;
    uStack_6c = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x321c);
    uStack_3c = uStack_6c;
    uStack_6c = (unsigned int)(__int64)*(float *)(lbl_8320A898 + 0x3224);
    uStack_30 = *(unsigned int *)(lbl_8320A898 + 0x3228);
    uStack_2c = *(unsigned int *)(lbl_8320A898 + 0x322c);
    stack_pair_60.second = uStack_64;
    uStack_34 = uStack_6c;
    fn_82639EA8(lbl_8320A898,&stack_pair_60.first);
    fn_82631920(lbl_8320A898,lbl_8327F8B8);
                    /* WARNING: Subroutine does not return */
    fn_82631578(lbl_8320A898,lbl_8327F94C);
  }
  return;
}

