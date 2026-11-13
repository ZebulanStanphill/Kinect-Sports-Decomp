typedef unsigned char bool;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82A1E0C0();
extern int RaiseException();


bool fn_82D005F8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [16];
  
  iVar1 = fn_82A1E0C0(0,param_5,param_2,param_3,0,auStack_40);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(unsigned __int64 *)(param_1 + 2) = (unsigned __int64)auStack_40[0];
    RaiseException(0x406d1388,0,4,auStack_30);
  }
  return iVar1 == 0;
}

