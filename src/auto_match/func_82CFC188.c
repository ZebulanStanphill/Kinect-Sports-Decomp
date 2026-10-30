extern char *strrchr(const char *, int);
int fn_82CFC188(char *s, signed char c) { char *p = strrchr(s,c); return p ? p-s : -1; }
