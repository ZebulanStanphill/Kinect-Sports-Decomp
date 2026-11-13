extern unsigned int fn_82CFBE40(char *);
extern int fn_82CFBC20(char *, char *, unsigned int);
extern char *lbl_83187004[];
int fn_82E09E40(char *s)
{
  int i = 0;
  char **tbl = lbl_83187004;
  while (tbl[i] != 0) {
    char *p = tbl[i];
    if (fn_82CFBC20(s, p, fn_82CFBE40(p)) == 0) return 1;
    i++;
  }
  return 0;
}
