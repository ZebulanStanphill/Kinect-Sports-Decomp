extern int toupper(int);
int fn_82C10A40(char *a, char *b)
{
  int r = 0;
  int u;
  char i = 0;
  do {
    if (b[i] == 0 || a[i] == 0) goto done;
    u = toupper(*a);
    if (u != toupper(*b)) goto done;
    i = i + 1;
  } while (i < 3);
  if (b[3] == 0 && a[3] == 0) r = 1;
done:
  return r;
}
