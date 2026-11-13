#define true 1
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_82E3BDF8();
extern int fn_82E3BFD8();
extern int fn_82E3E660();
extern int fn_82E50CB8();
extern int fn_82E50F10();


unsigned __int64 fn_82E3EC48(__int64 param_1)

{
  int iVar1;
  unsigned int *apuStack_50 [2];
  unsigned char auStack_48 [8];
  unsigned char auStack_40 [16];
  
  fn_82E50CB8(param_1 + 8);
  apuStack_50[0] = (unsigned int *)0x0;
  fn_82E3BDF8(param_1 + 0x1ac,auStack_48);
  while( true ) {
    iVar1 = fn_82E3E660(param_1 + 0x1ac,auStack_48,auStack_40,apuStack_50);
    if (iVar1 == 0) break;
    if (apuStack_50[0] != (unsigned int *)0x0) {
      (**(int (***)())*apuStack_50[0])(apuStack_50[0],1);
    }
    apuStack_50[0] = (unsigned int *)0x0;
  }
  fn_82E3BFD8(param_1);
  fn_82E50F10(param_1 + 8);
  return 0;
}

