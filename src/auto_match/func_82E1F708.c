extern unsigned strlen(const char *);

int fn_82E1F708(char *s)
{
  unsigned len;
  unsigned start;
  unsigned end;
  unsigned n;
  if (s == 0) {
    return 0;
  }
  len = strlen(s);
  if (len == 0) {
    return 0;
  }
  start = 0;
  end = len - 1;
  while (start < len && (s[start] == ' ' || s[start] == '\t')) {
    start++;
  }
  while (end != 0 && (s[end] == ' ' || s[end] == '\t')) {
    end--;
  }
  if (start > end) {
    s[0] = 0;
    return 0;
  }
  n = end - start + 1;
  if (start != 0) {
    unsigned i;
    for (i = 0; i < n; i++) {
      s[i] = s[i + start];
    }
  }
  s[n] = 0;
  return n;
}
