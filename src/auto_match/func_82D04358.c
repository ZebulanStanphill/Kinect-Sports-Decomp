unsigned char fn_82D04358(char **p, char *b)
{
  int i = 0;
  while ((*p)[i] != 0 && b[i] != 0) {
    if ((*p)[i] != b[i]) return 0;
    i++;
  }
  return b[i] == 0;
}
