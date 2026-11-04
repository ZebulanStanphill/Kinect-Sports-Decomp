extern unsigned strlen(const char *);
extern void fn_82230360(void *, const char *, unsigned int);
__int64 fn_830B41A0(char *p, const char *s) { __int64 result; if (!s) result=0xffffffff80004003; else {  fn_82230360(p+12,s,strlen(s)); result=0; } return result; }
