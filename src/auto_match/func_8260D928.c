extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82A1E968(__int64 *);

typedef struct Rec_8260D928 {
  __int64 sum; int count; int pad0; __int64 min; __int64 max; __int64 start; __int64 last;
  char pad1[0x2c]; int remaining;
} Rec_8260D928;

void fn_8260D928(char *param_1)
{
  int idx;
  Rec_8260D928 *r;
  __int64 t;
  __int64 d;
  fn_82A1BB18();
  idx = fn_8259A230();
  r = (Rec_8260D928 *)(param_1 + idx * 0x60 + 8);
  if (--r->remaining <= 0) {
    fn_82A1E968(&t);
    d = t - r->start - *(__int64 *)0x832767D8 - *(__int64 *)0x832823A8;
    if (d < 0) d = 0;
    r->last = d;
    r->sum = r->sum + d;
    if (d > r->max) r->max = d;
    if (d < r->min || r->min == -1) r->min = d;
    r->count = r->count + 1;
  }
}
