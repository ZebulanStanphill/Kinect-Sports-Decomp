extern char **fn_8265B6B0(int i);
extern int stricmp(const char *a, const char *b);

int fn_8265BB28(const char *name)
{
  int i;

  for (i = 0; i < 0x7a; i++) {
    if (stricmp(*fn_8265B6B0(i), name) == 0) {
      return i;
    }
  }
  return 0x7a;
}
