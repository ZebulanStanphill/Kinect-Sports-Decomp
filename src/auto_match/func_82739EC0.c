extern void fn_82681898(int, double);
extern unsigned char fn_82695468(int, int);
extern void fn_826954C0(int, const char *, int, int);

typedef struct { int pad[0x15]; int year; } Date_82739EC0;

void fn_82739EC0(int param_1)
{
  Date_82739EC0 *d;

  if (fn_82695468(param_1, 0x23) == 0) {
    fn_826954C0(param_1, "Date", 0, 0);
  }
  else {
    d = (Date_82739EC0 *)(*(char **)(param_1 + 8));
    d = d ? (Date_82739EC0 *)((char *)d - 0x10) : 0;
    fn_82681898(*(int *)(param_1 + 4), (double)(d->year - 0x76c));
  }
}
