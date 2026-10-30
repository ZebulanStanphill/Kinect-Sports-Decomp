extern int fn_82F64068(char *, int, int, const char *, ...);
extern int fn_82E21200(void *, char *);
void fn_82E21620(void *p,int x) { char buf[12]; int n=fn_82F64068(buf,12,11,"%d",x); if(n>0) buf[n]=0; else buf[11]=0; fn_82E21200(p,buf); }
