typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8278FD68();
extern int fn_82795EE0();
extern int fn_82796498();


void fn_82796E58(int param_1)

{
  bool bVar1;
  char cVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) - 1;
  if (((__int64)uVar3 < 0) || (bVar1 = false, (int)*(unsigned int *)(param_1 + 0x10) <= (int)uVar3)) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + *(int *)(param_1 + 0xc));
  }
  if ((uVar3 == 0) && (uVar3 = fn_82796498(param_1,0), uVar3 == 0)) {
    return;
  }
  cVar2 = fn_8278FD68(uVar3);
  if (cVar2 == '\0') {
    fn_82795EE0(uVar3,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x1c));
  }
  return;
}

