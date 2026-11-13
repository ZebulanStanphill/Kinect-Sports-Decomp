typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_83037648();
extern int fn_83037D58();
extern unsigned int uStack_4e;
extern unsigned int uStack_50;


unsigned __int64 fn_830132A0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  unsigned short uStack_50;
  unsigned short uStack_4e;
  
  bVar2 = false;
  RtlEnterCriticalSection(param_1 + 4);
  if (((*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x38)) ||
      (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x3c))) ||
     (bVar1 = true, *(char *)(param_1 + 0x40) != '\0')) {
    bVar1 = false;
  }
  if (!bVar1) {
    uStack_4e = 0;
    uStack_50 = 4;
    iVar3 = fn_83037D58(param_1 + 0x20,&uStack_50,4);
    if (iVar3 == 0) {
      *(unsigned char *)(param_1 + 0x44) = 1;
    }
    bVar2 = true;
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  RtlLeaveCriticalSection(param_1 + 4);
  if (bVar2) {
    fn_83037648(param_1 + 0x9c);
  }
  return 1;
}

