extern void fn_8223C7F0(void *p);
extern unsigned char fn_8223CC88(void *p, int c);
extern void fn_82240070(void *p, int state, unsigned char reraise);
extern void fn_82F62EC0(void *p);

typedef struct {
  unsigned char pad0[0xc];
  int state;
  unsigned char pad10[0x28];
  void *sb;
  void *tie;
  unsigned char fill;
} Ios;

static void Ios_clear(Ios *p, int state, unsigned char reraise)
{
  fn_82240070(p, p->sb == 0 ? state | 4 : state, reraise);
}

static void Ios_setstate(Ios *p, int state)
{
  if (state != 0)
    Ios_clear(p, p->state | state, 0);
}

void fn_8223CD08(Ios *p, void *sb, unsigned char isstd)
{
  fn_8223C7F0(p);
  p->sb = sb;
  p->tie = 0;
  p->fill = fn_8223CC88(p, 0x20);
  if (p->sb == 0)
    Ios_setstate(p, 4);
  if (isstd)
    fn_82F62EC0(p);
}
