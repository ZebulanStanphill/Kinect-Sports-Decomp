extern int fn_826B4AD8(int,int,void *,void *,int,int);
extern void fn_8267C498(void *);
int fn_826C7870(char *p,int a,int b,int c,int d) {
 void *q; int result;
 if(p) { q=p+0x68; ++*(int *)(p+4); } else q=0;
 result=fn_826B4AD8(a,b,q,p+0xd0,c,d);
 if(p)fn_8267C498(p);
 return result;
}
