typedef struct Rec_827F03F0 {
  int a[4];
  int f10;
} Rec_827F03F0;

extern char lbl_8320A3E0[];
extern void fn_82811080(char *, int, Rec_827F03F0 *);
extern void fn_82811438(Rec_827F03F0 *, int *, int);

void fn_827F03F0(int param_1, int param_2, int param_3)
{
  int zero[4];
  Rec_827F03F0 rec;

  zero[0] = 0;
  fn_82811438(&rec, zero, 0x10);
  rec.f10 = param_3;
  fn_82811080(lbl_8320A3E0, param_2, &rec);
}
