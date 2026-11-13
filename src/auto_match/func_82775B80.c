extern int fn_82756F70();
extern int fn_82775520();
extern int fn_827A84D0();


unsigned __int64 fn_82775B80(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  
  if ((param_3 & 0xffffffff) == 0) {
    fn_82756F70(param_1);
  }
  else {
    if (*param_2 < 0) {
      uVar2 = (unsigned __int64)(unsigned int)param_2[2] & 0xffffff;
      if (uVar2 == 0xffffff) {
        uVar2 = 0xffffffffffffffff;
      }
    }
    else {
      uVar2 = (unsigned __int64)(unsigned int)param_2[2];
    }
    iVar4 = (int)param_2 + 0x1e;
    if (*param_2 < 0) {
      uVar3 = (unsigned int)*(unsigned char *)(param_2 + 7);
    }
    else {
      uVar3 = param_2[1];
      iVar4 = (int)param_2 + 0x2a;
    }
    uVar1 = fn_827A84D0(param_2);
    fn_82775520(param_1,iVar4,uVar3,uVar1,param_3,uVar2);
  }
  return param_1;
}

