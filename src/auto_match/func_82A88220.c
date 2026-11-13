extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_82A870A0();
extern int fn_82A87E58();
extern int fn_82A8C620();
extern unsigned int lbl_8201DCB8;


unsigned __int64 fn_82A88220(int *param_1,int *param_2,__int64 param_3)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  unsigned int auStack_c0 [8];
  unsigned char auStack_a0 [32];
  unsigned char auStack_60 [96];
  
  puVar3 = (unsigned int *)*param_1;
  auStack_c0[0] = lbl_8201DCB8;
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = auStack_c0;
  }
  cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_a0,0x37,auStack_c0), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    fn_82A870A0(auStack_60,auStack_a0,0x37);
    fn_82A8C620(auStack_60,0,0x20,param_3);
    fn_82A87E58(puVar3,param_3 + 4,auStack_60,0x20);
    fn_82A8C620(auStack_60,0x172,0x20,param_3 + 0x60);
    fn_82A8C620(auStack_60,0x192,0x20,param_3 + 0x5c);
    uVar1 = 1;
  }
  return uVar1;
}

