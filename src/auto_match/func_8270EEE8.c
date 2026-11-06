typedef struct Args_8270EEE8 { int f0[6]; int heap; int count; } Args_8270EEE8;
typedef union Bits_8270EEE8 { double d; unsigned __int64 u; } Bits_8270EEE8;
extern int fn_826957D0(Args_8270EEE8 *, int);
extern float fn_826972E0(int, int);
extern int fn_826A7398(int);
extern void fn_826F77A0(int, int);

void fn_8270EEE8(Args_8270EEE8 *a)
{
  int h;
  int x;
  Bits_8270EEE8 b;
  unsigned char isnan;

  if (a->count >= 1) {
    h = fn_826A7398(a->heap);
    x = a->heap;
    b.d = fn_826972E0(fn_826957D0(a, 0), x);
    if ((b.u & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL && (b.u & 0xfffffffffffffULL) != 0)
      isnan = 1;
    else
      isnan = 0;
    if (!isnan) {
      fn_826F77A0(h, (int)b.d);
    }
  }
}
