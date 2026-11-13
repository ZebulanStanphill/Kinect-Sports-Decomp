void fn_82C65F98(signed char *p, int k)
{
  int c = p[0];
  if (c < -k) {
    p[0] = c + k * 2;
  } else if (c >= k) {
    p[0] = c - k * 2;
  }
  c = p[1];
  if (c < -k) {
    p[1] = c + k * 2;
    return;
  }
  if (c < k) {
    return;
  }
  p[1] = c - k * 2;
}
