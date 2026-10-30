typedef struct SS_82241630 { int pad4; char buf[156]; } SS_82241630;
typedef struct Tmp_82241630 { int pad[8]; } Tmp_82241630;
extern void fn_8223CFC0(void *ss, int mode, int x);
extern void fn_8223DCC8(void *ss);
extern void *fn_8223B728(void *os, void *v);
extern void *fn_82240158(void *os, const char *s);
extern void fn_822403C8(void *out, void *buf);
extern void fn_82230300(void *t, int a, int b);
extern void *fn_82520AC8(void *os, int c);
extern void *fn_822418A8(void *t, int a, int b, int c);
extern char lbl_82196FAC[];
extern char lbl_82196582[];

void *fn_82241630(void *out, int a, int b, int c)
{
  SS_82241630 ss;
  Tmp_82241630 t;
  void *os;
  void *r;

  fn_8223CFC0(&ss, 2, 1);
  fn_82240158(&ss, "NetDefPackedBitsOneToAll_c<");
  os = fn_82520AC8(&ss, 1);
  fn_82240158(os, lbl_82196FAC);
  os = fn_82520AC8(&ss, 1);
  fn_82240158(os, lbl_82196FAC);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  fn_82240158(&ss, lbl_82196582);
  r = fn_822418A8(&t, a, b, c);
  os = fn_82240158(&ss, "> - {");
  os = fn_8223B728(os, r);
  fn_82240158(os, "}");
  fn_82230300(&t, 1, 0);
  fn_822403C8(out, ss.buf);
  fn_8223DCC8(&ss);
  return out;
}
