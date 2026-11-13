#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_82A870A0();
extern int fn_82A87E58();
extern int fn_82A8C620();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_cc;
extern unsigned int uStack_ce;
extern unsigned int uStack_d0;


unsigned __int64 fn_82A88398(int *param_1,int *param_2,__int64 param_3)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned __int64 *puVar3;
  unsigned short uStack_d0;
  unsigned short uStack_ce;
  unsigned int uStack_cc;
  unsigned __int64 auStack_c0 [4];
  unsigned char auStack_a0 [32];
  unsigned char auStack_60 [96];
  
  puVar3 = (unsigned __int64 *)*param_1;
  uStack_d0 = (unsigned short)((unsigned int)lbl_8201DCB8 >> 0x10);
  uStack_ce = (unsigned short)lbl_8201DCB8;
  auStack_c0[0] = CONCAT44(lbl_8201DCB8,uStack_cc);
  if (puVar3 == (unsigned __int64 *)0x0) {
    puVar3 = auStack_c0;
  }
  cVar2 = (**(int (***)())(*param_2 + 4))(param_2);
  if ((cVar2 == '\0') ||
     (cVar2 = (**(int (***)())(*param_2 + 0x10))(param_2,auStack_a0,0x37,&uStack_d0), cVar2 == '\0')) {
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

