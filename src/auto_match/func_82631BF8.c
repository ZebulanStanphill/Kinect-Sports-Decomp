typedef struct Entry { unsigned short kind; char pad[10]; } Entry;
extern void *fn_8265C940(unsigned, int);
extern void fn_82631B08(Entry *, void *);

void *fn_82631BF8(Entry *entries)
{
  Entry *p;
  unsigned n;
  void *result;

  p = entries;
  n = 0;
  while (p->kind != 255) {
    ++p;
    ++n;
  }
  result = fn_8265C940(n * 12 + 56, 0x24800000);
  if (result == 0)
    return 0;
  fn_82631B08(entries, result);
  return result;
}
