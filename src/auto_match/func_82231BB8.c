typedef struct {
  int type;
  void (*handler)(void);
  int x8;
  unsigned char xc;
  unsigned char xd;
  const char *name;
  int x14;
  int x18;
} Message_82231BB8;
extern void fn_825150E8(void);
extern void fn_828B02D0(Message_82231BB8 *m);
extern void fn_828BF798(Message_82231BB8 *m);
extern void fn_823B4790(void);

void fn_82231BB8(void)
{
  Message_82231BB8 m;
  fn_825150E8();
  fn_828B02D0(&m);
  m.xd = 0;
  m.handler = fn_823B4790;
  m.name = "Replay Frame message";
  m.x8 = 0;
  m.type = 0x1d;
  fn_828BF798(&m);
}
