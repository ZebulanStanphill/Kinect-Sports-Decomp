extern void fn_82459C60(int p);
extern double fn_82522FF0(void);
extern int ioctlsocket(int s, int cmd, unsigned int *out);
extern int recv(int s, int buf, int len, int flags);
extern int WSAGetLastError(void);

typedef void (*cb_8245A260)(int buf, int n, int a, int b);

void fn_8245A260(int param_1)
{
  int n;
  int len;
  int status;
  unsigned int avail;
  cb_8245A260 cb;

  avail = 0;
  if (ioctlsocket(*(int *)(param_1 + 0x20), 0x4004667f, &avail) == 0 && avail != 0) {
    len = *(int *)(param_1 + 0x4f8);
    if (len >= 0x400) {
      len = 0x400;
    }
    n = recv(*(int *)(param_1 + 0x20), param_1 + 0xf0, len, 0);
    if (n != -1) {
      *(int *)(param_1 + 0x4f8) = *(int *)(param_1 + 0x4f8) - n;
      cb = *(cb_8245A260 *)(param_1 + 0x518);
      if (cb != 0) {
        cb(param_1 + 0xf0, n, *(int *)(param_1 + 0x4f4), *(int *)(param_1 + 0x51c));
      }
      if (*(int *)(param_1 + 0x4f8) != 0) goto done;
      status = 10;
    }
    else {
      if (WSAGetLastError() == 0x2733) goto done;
      status = 0x10;
    }
    *(int *)(param_1 + 0x84) = status;
  }
done:
  if (fn_82522FF0() - *(double *)(param_1 + 0xe8) > *(double *)(param_1 + 0xe0)) {
    *(int *)(param_1 + 0x8c) = 0;
    fn_82459C60(param_1);
    *(int *)(param_1 + 0x84) = 0x11;
  }
}
