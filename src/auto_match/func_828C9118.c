extern void *memmove(void *, const void *, unsigned);

void fn_828C9118(unsigned __int64 *first, unsigned __int64 *last)
{
  unsigned __int64 *next;
  unsigned __int64 *next1;
  unsigned __int64 *first1;
  unsigned __int64 val;
  int cnt;
  if (first != last) {
    next = first + 1;
    if (next != last) {
      do {
        next1 = next;
        val = *next;
        if (val < *first) {
          cnt = (int)(next1 - first);
          memmove(next1 + 1 - cnt, first, cnt * 8);
          *first = val;
        } else {
          first1 = next1;
          while (val < *--first1) {
            *next1 = *first1;
            next1 = first1;
          }
          *next1 = val;
        }
        next++;
      } while (next != last);
    }
  }
}
