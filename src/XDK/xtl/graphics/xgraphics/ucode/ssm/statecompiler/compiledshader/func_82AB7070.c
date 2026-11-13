extern int fn_82AB15D0();
extern int fn_82F68CC0();


unsigned __int64 fn_82AB7070(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  __int64 lVar3;
  
  lVar3 = ((unsigned __int64)param_2 & 0x3fffffff) * 4;
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d683c,0xffffffff820d6be8,0x226);
  }
  puVar2 = (unsigned int *)(*(int (**)())param_1[1])(*param_1,lVar3 + 8);
  param_1[0xb] = puVar2;
  if (puVar2 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6cd8,0xffffffff820d6be8,0x22d);
    uVar1 = 0x10;
  }
  else {
    *puVar2 = param_2;
    ((unsigned int *)param_1[0xb])[1] = *(unsigned int *)param_1[0xb];
    if ((unsigned __int64)*(unsigned int *)param_1[0xb] != ((unsigned __int64)*(unsigned int *)param_1[0xb] / 3) * 3) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6cac,0xffffffff820d6be8,0x233);
    }
    if (0x3fff < *(unsigned int *)param_1[0xb]) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6c84,0xffffffff820d6be8,0x234);
    }
    fn_82F68CC0((unsigned __int64)(unsigned int)param_1[0xb] + 8,param_3,lVar3);
    uVar1 = 0;
  }
  return uVar1;
}

