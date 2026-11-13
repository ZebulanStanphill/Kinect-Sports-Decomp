extern int fn_82813428();


void fn_82813680(__int64 *param_1,unsigned int *param_2)

{
  char cVar1;
  __int64 lVar2;
  __int64 lStack_30;
  unsigned int *puStack_28;
  __int64 *plStack_24;
  
  if (param_2 != (unsigned int *)0x0) {
    do {
      do {
        lVar2 = *param_1;
        lStack_30 = ((((unsigned __int64)(lStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)lVar2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        *param_2 = (((unsigned __int64)(lStack_30) >> 0) & 0xFFFFFFFF);
      } while (lVar2 != *param_1);
      if (param_1[2] == 0) {
        sync(1);
      }
      lStack_30 = lVar2;
      puStack_28 = param_2;
      plStack_24 = param_1;
      cVar1 = fn_82813428(&lStack_30);
    } while (cVar1 == '\0');
  }
  return;
}

