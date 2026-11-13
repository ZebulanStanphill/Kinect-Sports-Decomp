typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_826A1A28();
extern int fn_826C0568();


unsigned __int64 fn_826A24D8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char *pcVar1;
  bool bVar2;
  int iVar4;
  unsigned __int64 uVar3;
  
  iVar4 = fn_826A1A28(param_3);
  if (iVar4 < 0) {
    uVar3 = fn_826C0568(param_1,param_2,param_3,param_4);
  }
  else {
    if ((iVar4 < *(int *)(param_1 + 0x28)) &&
       (pcVar1 = *(char **)(iVar4 * 4 + *(int *)(param_1 + 0x24)), pcVar1 != (char *)0x0)) {
      if ((*pcVar1 == '\0') || (bVar2 = false, *pcVar1 == '\n')) {
        bVar2 = true;
      }
      if ((!bVar2) && (*pcVar1 != '\x01')) {
        return 1;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

