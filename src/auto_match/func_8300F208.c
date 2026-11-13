extern int fn_82A1E650();
extern int fn_83037648();
extern int fn_83037D58();


int fn_8300F208(int param_1,unsigned short *param_2,int param_3)

{
  int uVar1;
  int iVar2;
  
  *param_2 = (short)param_3;
  iVar2 = param_1 + 4;
  RtlEnterCriticalSection(iVar2);
  uVar1 = fn_83037D58(param_1 + 0x20,param_2,param_3);
  RtlLeaveCriticalSection(iVar2);
  if (uVar1 == 0x34) {
    do {
      *(unsigned char *)(param_1 + 0x44) = 1;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      fn_83037648(param_1 + 0x9c);
      fn_82A1E650(*(unsigned int *)(param_1 + 0xb0),0xffffffff);
      RtlEnterCriticalSection(iVar2);
      uVar1 = fn_83037D58(param_1 + 0x20,param_2,param_3);
      RtlLeaveCriticalSection(iVar2);
    } while (uVar1 == 0x34);
  }
  return uVar1;
}

