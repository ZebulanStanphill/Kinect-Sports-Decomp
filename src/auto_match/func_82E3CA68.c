extern unsigned int *auStack_48;
extern int fn_82E3BF28();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int memset();
extern unsigned int uStack_4c;


unsigned __int64
fn_82E3CA68(__int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned int *param_5
             )

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uStack_4c;
  unsigned char auStack_48 [1];
  
  lVar2 = param_1 + 8;
  fn_82E50CB8(lVar2);
  if ((((param_2 & 0xffffffff) == 0) || (param_3 == (unsigned int *)0x0)) || (param_5 == (unsigned int *)0x0))
  {
    fn_82E50F10(lVar2);
    uVar3 = 0xffffffff80070057;
  }
  else {
    if ((*param_5 == 0) || ((param_4 & 0xffffffff) != 0)) {
      *param_3 = 0;
      uStack_4c = 0;
      iVar1 = fn_82E3BF28(param_1 + 0x1ac,param_2,&uStack_4c,auStack_48);
      if (iVar1 == 0) {
        *param_3 = 0;
        uVar3 = 0;
        *param_5 = 0;
      }
      else {
        *param_3 = 1;
        if (0x5b < *param_5) {
                    /* WARNING: Subroutine does not return */
          memset(param_4,0);
        }
        *param_5 = 0x5c;
        uVar3 = 0xffffffffc00d36b1;
      }
    }
    else {
      uVar3 = 0xffffffff80070057;
    }
    fn_82E50F10(lVar2);
  }
  return uVar3;
}

