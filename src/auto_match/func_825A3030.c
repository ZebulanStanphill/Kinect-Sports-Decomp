typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82D85148();


void fn_825A3030(unsigned __int64 param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(*(int *)(*param_2 + 0x14) + 0xe8);
  if ((cVar1 == '\x05') || (bVar2 = false, cVar1 == '\x04')) {
    bVar2 = true;
  }
  if (!bVar2) {
    *(unsigned int *)(*(int *)(*param_2 + 0x14) + 0x2c) = 2;
    fn_82D85148(*(unsigned int *)(*(int *)(*param_2 + 0x14) + 8),*(int *)(*param_2 + 0x14),0,1);
  }
  cVar1 = *(char *)(*(int *)(*param_2 + 0x18) + 0xe8);
  if ((cVar1 == '\x05') || (bVar2 = false, cVar1 == '\x04')) {
    bVar2 = true;
  }
  if (!bVar2) {
    *(unsigned int *)(*(int *)(*param_2 + 0x18) + 0x2c) = 2;
    fn_82D85148(*(unsigned int *)(*(int *)(*param_2 + 0x18) + 8),*(int *)(*param_2 + 0x18),0,1);
  }
  return;
}

