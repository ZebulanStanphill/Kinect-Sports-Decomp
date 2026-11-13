typedef struct { unsigned __int64 q[8]; } S64B_8255E320;
typedef struct { int a, b, c; } R12_8255E320;
extern void fn_8255E428(S64B_8255E320 *out, int a, int b);
extern R12_8255E320 fn_8255AA78(S64B_8255E320);

void fn_8255E320(int a, int b, R12_8255E320 *out)
{
  S64B_8255E320 s;
  R12_8255E320 r;
  fn_8255E428(&s, a, b);
  r = fn_8255AA78(s);
  *out = r;
}
