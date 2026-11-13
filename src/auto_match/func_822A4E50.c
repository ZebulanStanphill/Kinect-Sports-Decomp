extern unsigned int *auStack_60;
extern int fn_82358FD8();
extern int fn_82440810();
extern int fn_82528EE0();


void fn_822A4E50(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_60 [72];
  
  iVar1 = *(int *)(param_2 + 0x4c);
  if (iVar1 == 1) {
    if (param_3 == 0) {
      fn_82440810((unsigned int *)(param_2 + 0x48),param_4,param_1);
    }
    else {
      uVar2 = *(unsigned int *)(param_2 + 0x48);
      fn_82528EE0(param_4,0x20,0xffffffff821b96c0,(int)uVar2 / 100,
                        (unsigned __int64)uVar2 + (__int64)((int)uVar2 / 100) * -100);
      fn_82358FD8(param_1,auStack_60,0x20,0xffffffff821b96d0);
      fn_82528EE0(param_4,0x20,0xffffffff821b96ec,param_4,auStack_60);
    }
  }
  else {
    if (iVar1 == 0) {
      uVar3 = 0xffffffff821a82d4;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      uVar3 = 0xffffffff821a82c0;
    }
    fn_82358FD8(param_1,param_4,0x20,uVar3);
  }
  return;
}

