extern void fn_82C75FE0(int, int, int, int, int, int, int);
extern int fn_830BA448(int, int, int, int, int, int);
extern int fn_830BC7C0(int, int, int, int, int, int);
extern void fn_830BD1B0(int, int);
extern void fn_830C0798(int, int);
extern void fn_830C0AE0(int, char *);
extern int lbl_8329F084;

int fn_830BD320(int param_1)
{
  int r;
  int iVar3;
  char buf[1536];

  iVar3 = param_1 + 0x3e70;
  fn_830BD1B0(param_1, iVar3);
  fn_830C0798(lbl_8329F084, param_1 + 0x57a0);
  r = fn_830BA448(param_1, iVar3, param_1 + 0x43f0, 0, 0, *(unsigned short *)(param_1 + 0x3ea4) >> 1);
  if (r == 0) {
    r = fn_830BC7C0(param_1, iVar3, param_1 + 0x43f0, 0, 0, *(unsigned short *)(param_1 + 0x3ea4) >> 1);
    if (r == 0) {
      if (*(int *)(param_1 + 0xf6c) != 0) {
        int t = (*(int *)(param_1 + 0xd0) >> 1) * *(int *)(param_1 + 0x43c8);
        fn_82C75FE0(param_1, iVar3,
                    (*(int *)(param_1 + 0xcc) >> 1) * *(int *)(param_1 + 0x43c8) + *(unsigned *)(param_1 + 0xec0) +
                        *(unsigned *)(param_1 + 0xdc),
                    *(unsigned *)(param_1 + 0xec4) + *(unsigned *)(param_1 + 0xe0) + t,
                    *(unsigned *)(param_1 + 0xec8) + *(unsigned *)(param_1 + 0xe0) + t, 0,
                    *(int *)(param_1 + 0x8c));
      }
      fn_830C0AE0(param_1 + 0x57a0, buf);
      r = 0;
      *(int *)(param_1 + 0x3d0c) = 0;
    }
  }
  return r;
}
