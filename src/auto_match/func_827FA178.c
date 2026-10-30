extern int fn_82F6DCE0(char *,int,const char *,...); extern void fn_82800838(void *,int,char *,void *);
void fn_827FA178(void *p, const char *a,const char *b,void *q) { char buf[100]; fn_82F6DCE0(buf,100,"%s.%s",a,b); buf[99]=0; fn_82800838(p,2,buf,q); }
