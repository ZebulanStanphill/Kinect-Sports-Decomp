typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F68B70();


void fn_82DAB8F8(unsigned __int64 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  if ((*(unsigned char *)(param_2 + 0x27) & 8) != 0) {
    return;
  }
  cVar1 = *(char *)(*(int *)(param_2 + 0xc) + 0xe8);
  if ((cVar1 == '\x05') || (bVar2 = false, cVar1 == '\x04')) {
    bVar2 = true;
  }
  if (bVar2) {
    cVar1 = *(char *)(*(int *)(param_2 + 0x10) + 0xe8);
    if ((cVar1 == '\x05') || (bVar2 = false, cVar1 == '\x04')) {
      bVar2 = true;
    }
    if (bVar2) {
      return;
    }
  }
  fn_82F68B70(*(unsigned int *)(*(int *)(param_2 + 0xc) + 8));
  return;
}

