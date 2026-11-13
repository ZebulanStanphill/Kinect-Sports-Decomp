extern int fn_82F63EC8();
extern unsigned int lbl_8200C93C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F134C;
extern unsigned int lbl_831F1350;
extern unsigned int lbl_831F1354;
extern unsigned int lbl_831F1358;
extern unsigned int lbl_831F135C;
extern unsigned int lbl_831F1360;
extern unsigned int lbl_831F1364;
extern unsigned int lbl_831F1368;
extern unsigned int lbl_831F1374;


__int64 fn_8276A0F0(int param_1,__int64 param_2)

{
  __int64 lVar1;
  
  if ((unsigned int)param_2 < *(unsigned int *)(param_1 + 0x1c)) {
    lVar1 = param_2 * 0x28 + (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
  }
  else {
    lVar1 = -0x7ce0ecb4;
    if ((lbl_831F1374 & 1) == 0) {
      lbl_831F1374 = lbl_831F1374 | 1;
      lbl_831F134C = &lbl_8200C93C;
      lbl_831F135C = lbl_821AAD20;
      lbl_831F1354 = 0;
      lbl_831F1350 = 1;
      lbl_831F1360 = lbl_821AAD20;
      lbl_831F1364 = lbl_821AAD20;
      lbl_831F1358 = 0;
      lbl_831F1368 = lbl_821AAD20;
      fn_82F63EC8(0xffffffff8313ff58);
    }
  }
  return lVar1;
}

