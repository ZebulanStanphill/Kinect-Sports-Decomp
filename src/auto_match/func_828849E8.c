extern int fn_82880428(void *);
extern int fn_82880BD8(void);
extern int fn_82881A08(void);
extern int fn_828846A0(void *, int);
extern int socket(int, int, int);
extern int ioctlsocket(int, unsigned, int *);
extern int setsockopt(int, int, int, int *, int);
extern int bind(int, void *, int);
extern int WSAGetLastError(void);
extern int lbl_831599F4;
extern unsigned lbl_832129F4;
extern unsigned lbl_83212A00[];

int fn_828849E8(void)
{
  int r;
  int opt1;
  int opt2;
  struct { short family; short port; int addr; int pad[2]; } sa;
  char buf[72];

  if (lbl_831599F4 == -1) {
    lbl_831599F4 = socket(2, 2, 0x11);
    if (lbl_831599F4 == -1) {
      WSAGetLastError();
    }
    opt1 = 1;
    if (ioctlsocket(lbl_831599F4, 0x8004667e, &opt1) == -1) {
      WSAGetLastError();
    }
    opt2 = 1;
    if (setsockopt(lbl_831599F4, 0xffff, 0x20, &opt2, 4) == -1) {
      WSAGetLastError();
    }
    sa.family = 2;
    sa.addr = 0;
    sa.port = 0x3e9;
    if (bind(lbl_831599F4, &sa, 0x10) == -1) {
      WSAGetLastError();
    }
  }
  r = fn_82880BD8();
  if (r < 0 && lbl_83212A00[2] < lbl_832129F4) {
    r = fn_82881A08();
    if (r >= 0) {
      fn_82880428(buf);
      fn_828846A0(buf, r);
    }
  }
  return r;
}
