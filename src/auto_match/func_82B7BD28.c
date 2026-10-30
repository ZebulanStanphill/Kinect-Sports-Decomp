typedef struct {
  int pad0[2];
  unsigned int cur;   /* 8 */
  unsigned int high;  /* c */
  unsigned int limit; /* 10 */
  unsigned int start; /* 14 */
  int pad18;
  unsigned int cnt;   /* 1c */
  int pad20;
  unsigned int total; /* 24 */
  unsigned char track; /* 28 */
} Arena_82B7BD28;
extern int fn_82BA7168(Arena_82B7BD28 *a, unsigned int n);

unsigned int fn_82B7BD28(Arena_82B7BD28 *a, int n)
{
  unsigned int sz = (n + 3U) & 0xfffffffc;
  unsigned int cur, high, take;
  if (a->cur + sz > a->limit)
    fn_82BA7168(a, sz);
  cur = a->cur;
  a->start = cur;
  if (a->track != 0 && cur < a->high) {
    high = a->high;
    a->cnt = a->cnt + 1;
    take = (cur + sz < high) ? sz : high - cur;
    { unsigned int *tp = &a->total; *tp = *tp + take; }
  }
  cur = cur + sz;
  a->cur = cur;
  if (a->high >= cur)
    cur = a->high;
  a->high = cur;
  return a->start;
}
