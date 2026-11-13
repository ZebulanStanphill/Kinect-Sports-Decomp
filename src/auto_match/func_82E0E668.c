extern void fn_82CFC050(void *, void *, unsigned int);
extern int fn_82CFD5F0();
extern int fn_82CFFC80();
extern int fn_82CFFD50();
extern void *fn_82CFFD68(void *);
extern int fn_82CFFEF0();


void fn_82E0E668(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char *pcVar4;
  unsigned int uVar1;
  void *uVar2;
  void *uVar3;
  struct { unsigned char c [8]; unsigned char b [8]; unsigned char a [8]; } L;
  
  fn_82CFFC80(L.a,param_1,param_2);
  fn_82CFFC80(L.b,param_3,param_4);
  pcVar4 = (char *)fn_82CFFD50(L.c,L.a);
  if ((*pcVar4 != '\0') && (pcVar4 = (char *)fn_82CFFD50(L.c,L.b), *pcVar4 != '\0'))
  {
    fn_82CFFEF0(L.b);
    uVar1 = fn_82CFD5F0();
    uVar2 = fn_82CFFD68(L.a);
    fn_82CFC050(fn_82CFFD68(L.b),uVar2,uVar1);
  }
  return;
}

