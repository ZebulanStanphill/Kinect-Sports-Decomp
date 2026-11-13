typedef struct {
  char *data;
  int pad[2];
  unsigned flags;
} Str_82693B08;

extern unsigned fn_826BD078(int *);

unsigned fn_82693B08(Str_82693B08 **p, int n)
{
  Str_82693B08 *s = *p;
  char *data = s->data;
  if (s->flags & 0x8000000) {
    return data[n];
  } else {
    int it[4];
    unsigned r;
    int i = n;
    it[0] = (int)data;
    do {
      r = fn_826BD078(it);
      i--;
      if (r == 0)
        return 0;
    } while (i >= 0);
    return r;
  }
}
