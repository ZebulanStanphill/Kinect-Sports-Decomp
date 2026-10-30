typedef struct { short family; short port; unsigned int addr; char zero[8]; } Addr_828801A0;
extern int fn_82CE08B8(int, int, int);
extern int fn_82CE08F0(int, int, int *);
extern int fn_82CE0978(int, Addr_828801A0 *, int);
extern void fn_82CE0BB0(void);
extern int lbl_831599F0;
extern unsigned char lbl_832129FC;

void fn_828801A0(void)
{
  int one;
  Addr_828801A0 a;
  if (lbl_831599F0 == -1) {
    lbl_831599F0 = fn_82CE08B8(2, 2, 0xfe);
    if (lbl_831599F0 == -1) {
      fn_82CE0BB0();
      return;
    }
    one = 1;
    if (fn_82CE08F0(lbl_831599F0, 0x8004667e, &one) == -1) {
      fn_82CE0BB0();
    }
    a.family = 2;
    a.addr = 0;
    a.port = 1000;
    if (fn_82CE0978(lbl_831599F0, &a, 0x10) == -1) {
      fn_82CE0BB0();
    }
  }
  lbl_832129FC = 1;
}
