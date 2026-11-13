struct Iface_82A1E658 {
  void *slot0;
  int (*fn4)(void);
};

extern void fn_82A2B760(void);
extern struct Iface_82A1E658 *lbl_8315D3D0;

unsigned char fn_82A1E658(void)
{
  if (lbl_8315D3D0->fn4() >= 0) {
    return 1;
  }
  fn_82A2B760();
  return 0;
}
