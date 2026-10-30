typedef struct GA_825268A8 {
  char pad0[0x10];
  void (*cb)(unsigned);
  char pad1[0x1c];
  unsigned arg;
} GA_825268A8;
typedef struct GB_825268A8 {
  char pad0[0x10];
  void (*cb)(void);
} GB_825268A8;
extern GA_825268A8 lbl_8327F644;
extern GB_825268A8 lbl_83276774;
extern void fn_825269D0(int a, int b);
extern void fn_825523D0(void);

void fn_825268A8(int param_1)
{
  if (param_1 == 0) {
    if (lbl_8327F644.cb != 0) {
      lbl_8327F644.cb(lbl_8327F644.arg);
    }
    fn_825269D0(0x1a, 0);
    fn_825523D0();
    if (lbl_83276774.cb != 0) {
      lbl_83276774.cb();
    }
    fn_825269D0(0x1b, 0);
  }
}
