extern int fn_82F64068(char *, int, int, const char *, ...);
extern int fn_82E21200(void *, char *);
void fn_82E21700(void *p, float x) { char buf[16]; int n = fn_82F64068(buf, 16, 15, "%1.7G", x); if (n > 0) buf[n] = 0; else buf[15] = 0; fn_82E21200(p, buf); }
