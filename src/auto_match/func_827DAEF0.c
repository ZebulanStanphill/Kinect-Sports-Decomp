#define true 1
extern int fn_827DA480();


unsigned __int64 fn_827DAEF0(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  
  RtlEnterCriticalSection(param_1 + 0xbfc);
  puVar3 = *(unsigned int **)(param_1 + 0xb60);
  puVar1 = (unsigned int *)*puVar3;
  do {
    if (puVar1 == puVar3) {
      uVar4 = 0;
LAB_827daf48:
      RtlLeaveCriticalSection(param_1 + 0xbfc);
      return uVar4;
    }
    iVar2 = fn_827DA480(param_1,puVar1[3]);
    if (iVar2 != 0) {
      uVar4 = 1;
      goto LAB_827daf48;
    }
    puVar1 = (unsigned int *)*puVar1;
    puVar3 = *(unsigned int **)(param_1 + 0xb60);
  } while( true );
}

