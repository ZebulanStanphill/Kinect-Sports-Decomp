typedef struct {
  int type;
  void (*handler)(void);
  int x8;
  unsigned char xc;
  unsigned char xd;
  const char *name;
  int x14;
  int x18;
} Message_83125798;
extern Message_83125798 lbl_83282DF0;
extern void fn_828B02D0(Message_83125798 *m);
extern void *fn_8251E768(void);
extern void fn_8251E7D0(void *reg, Message_83125798 *m);
extern void fn_82246278(void);

void fn_83108A08(void)
{
  fn_828B02D0(&lbl_83282DF0);
  lbl_83282DF0.type = 0x1b;
  lbl_83282DF0.handler = fn_82246278;
  lbl_83282DF0.x8 = 9;
  lbl_83282DF0.xc = 1;
  lbl_83282DF0.xd = 0;
  lbl_83282DF0.name = "Function Call Message";
  lbl_83282DF0.x14 = 0;
  lbl_83282DF0.x18 = 0;
  fn_8251E7D0(fn_8251E768(), &lbl_83282DF0);
}
