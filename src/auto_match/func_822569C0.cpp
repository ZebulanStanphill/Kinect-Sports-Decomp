extern "C" {
void fn_82239CB0(void *);
void fn_82253938(void *, void *);
void fn_8223A4D8(void *, void *);
void fn_82F565A0(void *, void *);
void fn_82365BD8(void *, void *);
extern char lbl_821968A4[];
extern char lbl_82196C58[];
extern char lbl_821980B4[];
extern char lbl_821980BC[];
extern char lbl_821981B8[];
}
namespace v2 { extern "C" char lbl_821980B4[]; extern "C" char lbl_821980BC[]; }

extern "C" void *fn_822569C0(void *param_1, void *param_2)
{
  char *p = (char *)param_1;
  char *src = (char *)param_2;
  char *sub;
  char *ssub;

  fn_82239CB0(param_1);
  *(char **)p = lbl_821980B4;
  *(char **)(p + 0x28) = lbl_821968A4;
  fn_82253938(p + 0x30, src + 0x30);
  sub = p + 0xa8;
  ssub = src + 0xa8;
  fn_8223A4D8(sub, ssub);
  *(char **)(p + 0xa8) = lbl_82196C58;
  fn_82F565A0(sub + 0x38, ssub + 0x38);
  fn_82F565A0(sub + 0x50, ssub + 0x50);
  *(char **)(p + 0xa8) = lbl_821980BC;
  fn_82365BD8(sub + 0x68, ssub + 0x68);
  *(char **)(p + 0xa8) = v2::lbl_821980BC;
  *(char **)p = v2::lbl_821980B4;
  *(char **)(p + 0x28) = lbl_821981B8;
  return param_1;
}
