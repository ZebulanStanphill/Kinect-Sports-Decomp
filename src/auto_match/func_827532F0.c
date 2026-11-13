typedef unsigned char bool;
extern unsigned int *auStack_30;
extern int fn_8267BE38();
extern int fn_8268B1F0();
extern int fn_8268C510();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_827532F0(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  int iVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int auStack_30 [12];
  
  if (param_1 != (int *)0x0) {
    fn_8268C510(auStack_30,0xffffffff82014024);
    iVar5 = 0;
    if (0 < *param_1) {
      do {
        fn_8268B1F0(param_1 + 1,(unsigned int *)(auStack_30[0] & 0xfffffffc) + 2,
                          *(unsigned int *)(auStack_30[0] & 0xfffffffc) & 0x7fffffff);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *param_1);
    }
    fn_8268B1F0(param_1 + 1,param_2,0xffffffffffffffff);
    fn_8268B1F0(param_1 + 1,0xffffffff821cc86c,0xffffffffffffffff);
    lVar2 = ((unsigned __int64)auStack_30[0] & 0xfffffffc) + 4;
    do {
      puVar3 = (unsigned int *)lVar2;
      uVar4 = (unsigned __int64)*puVar3;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar2);
        *puVar3 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar4 == 1) {
      fn_8267BE38();
    }
  }
  return;
}

