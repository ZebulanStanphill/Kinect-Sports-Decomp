extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8280AD30();
extern int fn_82859550();
extern int fn_8285A808();
extern int fn_8285A830();
extern unsigned int uRam83211314;
extern unsigned int uRam83211318;
extern unsigned int uRam8321131c;


unsigned int fn_82859760(int param_1,unsigned __int64 param_2,unsigned char *param_3,unsigned char *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  uRam83211314 = *(unsigned int *)(param_1 + 0x2c);
  uRam83211318 = *(unsigned int *)(param_1 + 0x30);
  uRam8321131c = 0;
  iVar1 = fn_8285A808();
  puVar2 = (unsigned int *)fn_8285A830(param_1,param_2);
  if (*(int *)(iVar1 + 0x94) != 0) {
    fn_8280AD30(iVar1 + 0x50,param_3,auStack_50);
    fn_8280AD30(iVar1 + 0x10,param_4,auStack_60);
    param_4 = auStack_60;
    param_3 = auStack_50;
  }
  fn_82859550(*puVar2,param_3,param_4,0);
  return uRam8321131c;
}

