typedef struct { int hdr; char buf[0x94]; } SS_82245E18;
typedef struct { int a[8]; } Str_82245E18;

extern void fn_82230300(void *, int, int);
extern void *fn_8223B728(void *, void *);
extern void fn_8223CFC0(void *, int, int);
extern void fn_8223DCC8(void *);
extern void fn_8223FBB0(void *, unsigned int);
extern void *fn_82240158(void *, const void *);
extern void fn_822403C8(void *, void *);
extern void *fn_82F644D8(void *, void *);
extern char lbl_831D70C4[];
extern char lbl_8326338C[];

void *fn_82245E18(void *param_1, void *param_2, void *param_3, int *param_4)
{
  SS_82245E18 ss1;
  SS_82245E18 ss2;
  Str_82245E18 str;
  unsigned int *puVar3;
  void *name;
  void *t;

  fn_8223CFC0(&ss1, 2, 1);
  if ((unsigned int)param_4[3] <= 4) {
    puVar3 = (unsigned int *)(param_4 + 2);
  }
  else {
    puVar3 = (unsigned int *)param_4[2];
  }
  fn_8223CFC0(&ss2, 2, 1);
  fn_8223FBB0(&ss2, *puVar3);
  fn_822403C8(&str, ss2.buf);
  fn_8223DCC8(&ss2);
  name = fn_82F644D8(lbl_831D70C4, lbl_8326338C);
  t = fn_82240158(&ss1, "NetDefTyped_c< ");
  t = fn_82240158(t, name);
  t = fn_82240158(t, " > - {");
  t = fn_8223B728(t, &str);
  fn_82240158(t, "}");
  fn_82230300(&str, 1, 0);
  fn_822403C8(param_1, ss1.buf);
  fn_8223DCC8(&ss1);
  return param_1;
}
