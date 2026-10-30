extern char *strncpy(char *,const char *,unsigned int);
void fn_82826980(char *p, char *dst, unsigned int n) { strncpy(dst,*(char **)(p+0xcc),n); dst[n-1]=0; }
