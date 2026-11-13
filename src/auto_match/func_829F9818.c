typedef struct { __int64 start; double scale; __int64 now; __int64 off; char pad[0x1c]; int flag; } Timer_829F9818;
extern void fn_82A1E968(__int64 *);

double fn_829F9818(Timer_829F9818 *p, int n)
{
  __int64 t;
  if (p->flag == 0) {
    fn_82A1E968(&t);
    return (double)((t - p->off) - p->start) * p->scale * (double)(__int64)n;
  }
  return (double)((p->now - p->off) - p->start) * p->scale * (double)(__int64)n;
}
