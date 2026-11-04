extern unsigned strlen(const char *);
extern char *strchr(const char *,int);
extern int fn_82F6B0C0(const char *,const char *,int);
int fn_82E1D068(int o,char *s,char *list) {
 if (*(unsigned char *)(o+0x18)) {
  int a=(int)strlen(s),b=(int)strlen(list);int i;
  if (b>a) {
   i=0;
   while(i<b) {
    char *cur=list+i;
    char *end=strchr(cur,'.');
    int off=end-list;
    if(off-i==a && fn_82F6B0C0(cur,s,a)==0) return 1;
    i=off+1;
   }
  }
 }
 return 0;
}