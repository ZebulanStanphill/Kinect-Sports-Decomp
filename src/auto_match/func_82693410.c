extern int fn_82A1E968();
extern int fn_82A1F160();
extern unsigned int lbl_831F12A0;
extern unsigned int lbl_831F12A8;
extern unsigned int uStack_20;


__int64 fn_82693410(void)

{
  unsigned __int64 uStack_20;
  
  if (lbl_831F12A8 == '\0') {
    fn_82A1F160(0xffffffff831f12a0);
    lbl_831F12A8 = '\x01';
    lbl_831F12A0 = (__int64)lbl_831F12A0 / 0x1e84;
    if (lbl_831F12A0 == 0) {
      lbl_831F12A0 = 1;
    }
  }
  fn_82A1E968(&uStack_20);
  trapDoubleWordImmediate(6,lbl_831F12A0,0);
  trapDoubleWordImmediate
            (5,lbl_831F12A0 & ~((uStack_20 << 8 | (uStack_20 & 0x1ffffffffffffff) >> 0x38) - 1),
             0xffff);
  return (__int64)(uStack_20 << 7) / (__int64)lbl_831F12A0;
}

