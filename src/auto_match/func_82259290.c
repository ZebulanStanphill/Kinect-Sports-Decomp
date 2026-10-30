typedef struct SS_82259290 { int pad4; char buf[156]; } SS_82259290;
typedef struct Tmp_82259290 { int pad[8]; } Tmp_82259290;
extern void fn_8223CFC0(void *ss, int mode, int x);
extern void fn_8223DCC8(void *ss);
extern void *fn_8223B728(void *os, void *v);
extern void *fn_82240158(void *os, const char *s);
extern void fn_822403C8(void *out, void *buf);
extern void fn_82230300(void *t, int a, int b);
extern void *fn_82520AC8(void *os, int c);
extern void *fn_822595F0(void *t, int a, int b, int c);
extern char lbl_82196FAC[];
extern char lbl_82196582[];

void *fn_82259290(void *out, int a, int b, int c)
{
  SS_82259290 ss;
  Tmp_82259290 t;
  void *os;
  void *r;

  fn_8223CFC0(&ss, 2, 1);
  fn_82240158(&ss, "NetDefPackedBitsOneToAll_c<");
  os = fn_82520AC8(&ss, 1);
  fn_82240158(os, lbl_82196FAC);
  os = fn_82520AC8(&ss, 0x20);
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
  r = fn_822595F0(&t, a, b, c);
  os = fn_82240158(&ss, "> - {");
  os = fn_8223B728(os, r);
  fn_82240158(os, "}");
  fn_82230300(&t, 1, 0);
  fn_822403C8(out, ss.buf);
  fn_8223DCC8(&ss);
  return out;
}
