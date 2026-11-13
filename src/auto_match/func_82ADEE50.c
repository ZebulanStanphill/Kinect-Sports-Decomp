extern int fn_82ADE018();
extern unsigned char fn_82ADF598();


void fn_82ADEE50(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned char cVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  if ((*(unsigned int *)(param_2 + 0xc0) & 7) != 0) {
    do {
      cVar1 = fn_82ADF598(param_1,param_2,param_3,param_4,uVar2);
      if (cVar1 != '\0') break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(unsigned int *)(param_2 + 0xc0) & 7));
  }
  fn_82ADE018(param_1,param_2,param_3,param_4,uVar2,param_5);
  return;
}

