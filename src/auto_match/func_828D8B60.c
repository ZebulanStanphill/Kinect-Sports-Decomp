extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289EEE0();
extern int fn_828ACD00();
extern int fn_828BDDA0();
extern int fn_828BE158();
extern unsigned int lbl_820255D0;
extern unsigned int lbl_820255D8;


void fn_828D8B60(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  char cVar3;
  unsigned int *puVar2;
  
  uVar1 = fn_8289EEE0();
  cVar3 = fn_828ACD00(param_1);
  if (cVar3 == '\0') {
    puVar2 = (unsigned int *)fn_8265C9E0(0x88);
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      fn_828BDDA0();
      puVar2[0x20] = param_2;
      puVar2[0x21] = param_3;
      *puVar2 = &lbl_820255D8;
      puVar2[0x14] = &lbl_820255D0;
    }
    fn_82886518(puVar2,0xffffffffffffffff,0xffffffffffffffff);
    uVar1 = fn_82897BD0(uVar1);
    fn_828BE158(param_1,puVar2,uVar1,0);
  }
  return;
}

