extern char **fn_82F64258(void);
extern void fn_82F664B0(char *,int,const char *);
extern void fn_82F6B2A0(const char *,int);
void fn_826BCE08(char *s,int x) {
 char mark=**fn_82F64258();
 char buffer[352]; char *p;
 if(mark!='.') {
  fn_82F664B0(buffer,0x15c,s);
  p=buffer;
  while(*p) { if(*p=='.') { *p=mark; break; } ++p; }
  fn_82F6B2A0(buffer,x);
 } else fn_82F6B2A0(s,x);
}
