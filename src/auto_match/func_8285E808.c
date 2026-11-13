extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern int fn_82810360();
extern int fn_828105C8();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285AAF0();
extern int fn_8285E398();
extern int fn_828602F8();
extern int fn_82860750();
extern int fn_82861370();
extern unsigned int lbl_832115A4;


void fn_8285E808(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned char auStack_110 [16];
  unsigned char auStack_100 [256];
  
  puVar1 = (unsigned int *)fn_8285A830();
  iVar2 = fn_8285A808(param_1,param_2);
  lbl_832115A4 = 0;
  if (*(int *)(iVar2 + 0x94) == 0) {
    fn_82861370(param_6,param_4,auStack_100);
  }
  fn_828105C8((double)*(float *)(param_4 + 0x30),(double)*(float *)(param_4 + 0x34),
               (double)*(float *)(param_4 + 0x38),auStack_110);
  if (puVar1[4] == 0) {
    fn_82810360(auStack_110,puVar1 + 5);
    fn_8285AAF0(param_1,param_2,auStack_110);
    iVar2 = fn_82860750(param_1,param_2,puVar1 + 5);
    if (iVar2 != 0) {
      puVar1[4] = 1;
      fn_8285E398(param_1,param_2,*puVar1,param_3,param_4,param_5,param_7,param_6);
    }
  }
  else if (puVar1[4] == 1) {
    puVar3 = puVar1 + 5;
    fn_82810360(puVar3,puVar1 + 8);
    fn_82810360(auStack_110,puVar3);
    fn_828602F8(param_1,param_2,puVar1 + 8,puVar3);
    fn_8285E398(param_1,param_2,*puVar1,param_3,param_4,param_5,param_7,param_6);
  }
  return;
}

