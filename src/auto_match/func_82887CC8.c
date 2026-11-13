typedef unsigned char bool;
#define true 1
extern int fn_82887B28();
extern int fn_82887BE8();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


bool fn_82887CC8(int param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  char *pcVar2;
  bool bVar3;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  uVar1 = fn_82887BE8();
  pcVar2 = (char *)fn_82887B28(uVar1,&stack0x0000001c);
  if (*pcVar2 == '\0') {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(*(int *)(param_2 * 4 + param_1) + 0x18) + 1 == param_3;
  }
  return bVar3;
}

