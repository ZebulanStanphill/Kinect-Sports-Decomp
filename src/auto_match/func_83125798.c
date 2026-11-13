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
extern Message_83125798 lbl_83297018;
extern void fn_828B02D0(Message_83125798 *m);
extern void *fn_8251E768(void);
extern void fn_8251E7D0(void *reg, Message_83125798 *m);
extern void fn_825AEDC8(void);

void fn_83125798(void)
{
  fn_828B02D0(&lbl_83297018);
  lbl_83297018.type = 0x1c;
  lbl_83297018.handler = fn_825AEDC8;
  lbl_83297018.x8 = 0;
  lbl_83297018.xc = 0;
  lbl_83297018.xd = 0;
  lbl_83297018.name = "ActuatorTeleport";
  lbl_83297018.x14 = 0;
  lbl_83297018.x18 = 0;
  fn_8251E7D0(fn_8251E768(), &lbl_83297018);
}
