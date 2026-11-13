typedef struct { int v; char a; char b; short c; } DN_82F73558;
extern void fn_82F728D0(void *, int);
extern void fn_82F72F40(void *, const char *);
extern unsigned char *lbl_832635C0;

DN_82F73558 *fn_82F73558(DN_82F73558 *param_1)
{
  switch (*lbl_832635C0) {
  case 0:
    fn_82F728D0(param_1, 1);
    break;
  case 'A':
    lbl_832635C0++;
    fn_82F72F40(param_1, "{flat}");
    break;
  default:
    param_1->b = 0;
    param_1->a = 2;
    param_1->v = 0;
    return param_1;
  }
  return param_1;
}
