typedef unsigned char bool;
#define true 1
extern int fn_82887B28();
extern int fn_82887BE8();
extern unsigned int iStack0000001c;
extern unsigned int lbl_83212A1C;
extern unsigned int stack0x0000001c;


bool fn_82887D30(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  char *pcVar3;
  bool bVar4;
  unsigned int uVar5;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  uVar2 = fn_82887BE8();
  pcVar3 = (char *)fn_82887B28(uVar2,&stack0x0000001c);
  if (*pcVar3 == '\0') {
    bVar4 = true;
  }
  else {
    uVar5 = *(int *)(*(int *)(param_2 * 4 + param_1) + 0x10) + 1;
    uVar1 = 1 << (*(unsigned int *)(param_2 * 4 + lbl_83212A1C) & 0x3f);
    bVar4 = uVar5 - (uVar5 / uVar1) * uVar1 == param_3;
  }
  return bVar4;
}

