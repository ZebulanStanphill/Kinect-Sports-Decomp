extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696BC8();
extern int fn_826A1FC8(void *, void *);


void fn_826A2168(int param_1)

{
  unsigned char cVar1;
  __int64 lVar2;
  
  cVar1 = fn_82695468(param_1,7);
  if (cVar1 == '\0') {
    fn_826954C0(param_1,"Array",0,0);
  }
  else {
    char *c = *(char **)(param_1 + 8);
    char *t = c != 0 ? c - 0x10 : 0;
    fn_826A1FC8(t, t);
    fn_82696BC8(*(unsigned int *)(param_1 + 4));
  }
  return;
}

