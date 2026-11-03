int fn_82F6AEA8(const unsigned char *s, const unsigned char *set)
{
  unsigned char map[32];
  const unsigned char *p = set;
  unsigned c;
  int n;
  int i;
  for (i = 0; i < 32; i++) {
    map[i] = 0;
  }
  c = *set;
  while (c != 0) {
    p++;
    map[c >> 3] = (unsigned char)(1 << (c & 7)) | map[c >> 3];
    c = *p;
  }
  c = *s;
  if (c != 0) {
    n = 0;
    while ((1 << (c & 7)) & map[c >> 3]) {
      n++;
      c = s[n];
    }
    return n;
  }
  return 0;
}
