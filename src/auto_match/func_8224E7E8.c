extern void fn_828A9C98(void);
extern void fn_82230110(void *, const char *);
extern void fn_82230300(void *, int, int);
typedef struct Btn_82897DF8 { char pad[0xc]; unsigned char f; char pad2[0x4b]; } Btn_82897DF8;
extern void fn_82897DF8(Btn_82897DF8 *, void *, void *);
void fn_8224E7E8(char *p)
{
  char s0[32]; char s1[32]; char s2[40];
  Btn_82897DF8 *b;
  fn_828A9C98();
  fn_82230110(s0, "Play Again");
  b = (Btn_82897DF8 *)(p + 0x2fc);
  b->f = 0;
  fn_82897DF8(b, p, s0);
  fn_82230300(s0, 1, 0);
  fn_82230110(s1, "Uploading Video");
  b = (Btn_82897DF8 *)(p + 0x354);
  b->f = 0;
  fn_82897DF8(b, p, s1);
  fn_82230300(s1, 1, 0);
  fn_82230110(s2, "Return to menu");
  b = (Btn_82897DF8 *)(p + 0x3ac);
  b->f = 0;
  fn_82897DF8(b, p, s2);
  fn_82230300(s2, 1, 0);
}
