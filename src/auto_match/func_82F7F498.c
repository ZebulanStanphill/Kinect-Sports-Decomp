extern void fn_82F864F8(unsigned __int64 *, int, int);
extern void fn_82F865A0(unsigned *, int, int);

void fn_82F7F498(int flag, void *out, int a, int b)
{
  unsigned __int64 t8;
  if (flag != 0) {
    fn_82F864F8(&t8, a, b);
    *(unsigned __int64 *)out = t8;
  } else {
    unsigned t4;
    fn_82F865A0(&t4, a, b);
    *(unsigned *)out = t4;
  }
}
