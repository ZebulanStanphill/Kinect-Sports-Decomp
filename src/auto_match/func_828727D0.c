extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern char lbl_82021E60[];

typedef struct {
  int a;
  char b[156];
} S;

int fn_828727D0(int param_1)
{
  S s;

  fn_8223CFC0(&s, 2, 1);
  fn_82240158(&s, lbl_82021E60);
  fn_822403C8(param_1, s.b);
  fn_8223DCC8(&s);
  return param_1;
}
