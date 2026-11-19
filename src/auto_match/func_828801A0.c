typedef struct { short family; short port; unsigned int addr; char zero[8]; } Addr_828801A0;
extern int socket(int, int, int);
extern int ioctlsocket(int, int, int *);
extern int bind(int, Addr_828801A0 *, int);
extern void WSAGetLastError(void);
extern int lbl_831599F0;
extern unsigned char lbl_832129FC;

void fn_828801A0(void)
{
  int one;
  Addr_828801A0 a;
  if (lbl_831599F0 == -1) {
    lbl_831599F0 = socket(2, 2, 0xfe);
    if (lbl_831599F0 == -1) {
      WSAGetLastError();
      return;
    }
    one = 1;
    if (ioctlsocket(lbl_831599F0, 0x8004667e, &one) == -1) {
      WSAGetLastError();
    }
    a.family = 2;
    a.addr = 0;
    a.port = 1000;
    if (bind(lbl_831599F0, &a, 0x10) == -1) {
      WSAGetLastError();
    }
  }
  lbl_832129FC = 1;
}
