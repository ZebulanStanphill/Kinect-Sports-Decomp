extern unsigned int *auStack_3c;
extern int fn_82F63C78();
extern int fn_82F664B0();
extern int fn_82F867A8();
extern int fn_82F88DE8();
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


int * fn_82F86888(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uStack00000010;
  unsigned __int64 uStack_50;
  unsigned short uStack_48;
  short sStack_40;
  char cStack_3e;
  unsigned char auStack_3c [60];
  
  uStack00000010 = param_1;
  fn_82F867A8(&uStack_50,&stack0x00000010);
  iVar1 = fn_82F88DE8(uStack_50,(unsigned __int64)uStack_48 << 0x30,0x11,0,&sStack_40);
  param_2[2] = iVar1;
  param_2[1] = (int)sStack_40;
  *param_2 = (int)cStack_3e;
  iVar1 = fn_82F664B0(param_3,param_4,auStack_3c);
  if (iVar1 == 0) {
    param_2[3] = (int)param_3;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63C78(0,0,0,0,0);
}

