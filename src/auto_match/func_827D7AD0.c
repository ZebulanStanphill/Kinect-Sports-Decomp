#define true 1
extern unsigned int *auStack_58;
extern unsigned int *auStack_5c;
extern int fn_82517978();
extern int fn_827D8DE0();
extern int fn_827D9900();
extern int fn_827D9928();
extern int fn_827D9930();


/* WARNING: Removing unreachable block (ram,0x827d7b80) */

__int64 fn_827D7AD0(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned char auStack_5c [4];
  unsigned char auStack_58 [88];
  
  lVar3 = 0;
  RtlEnterCriticalSection(param_1 + 0xf4);
  puVar2 = *(unsigned int **)(param_1 + 0xcc);
LAB_827d7b84:
  do {
    if (puVar2 == *(unsigned int **)(param_1 + 0xd0)) {
      RtlLeaveCriticalSection(param_1 + 0xf4);
      return lVar3;
    }
    fn_82517978(auStack_58,*puVar2,puVar2[1],0);
    iVar1 = fn_827D9900(0);
    if (iVar1 == 0) {
      iVar1 = fn_827D9928(0);
      if (iVar1 == 5) {
        puVar2 = (unsigned int *)fn_827D8DE0(auStack_5c,param_1 + 0xcc,puVar2);
        puVar2 = (unsigned int *)*puVar2;
        goto LAB_827d7b84;
      }
      fn_827D9930(0);
    }
    else {
      lVar3 = lVar3 + 1;
    }
    puVar2 = puVar2 + 2;
  } while( true );
}

