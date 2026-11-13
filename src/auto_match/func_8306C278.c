extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;

typedef struct { unsigned char a[16]; unsigned __int64 v[7]; } Loc_8306C278;

int fn_8306C278(int param_1, unsigned __int64 *param_2, unsigned __int64 *param_3, unsigned __int64 *param_4)
{
  int iVar2;
  Loc_8306C278 l;

  iVar2 = (*(int (**)(int, void *, void *, int, int))(lbl_8315D3D0 + 0x20))(param_1, l.a, l.v, 0x38, 0x22);
  if (iVar2 >= 0) {
    if (param_2 != 0) {
      *param_2 = l.v[0];
    }
    if (param_3 != 0) {
      *param_3 = l.v[1];
    }
    if (param_4 != 0) {
      *param_4 = l.v[2];
    }
    return 1;
  }
  fn_82A2B760();
  return 0;
}
