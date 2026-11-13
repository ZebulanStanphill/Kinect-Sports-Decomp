extern int fn_828516B8();
extern int fn_82851730();
extern int fn_82851870();
extern int fn_82F65390();
extern int fn_82F65B18();
extern unsigned int uStack_40;


__int64 fn_82860A68(unsigned __int64 param_1)

{
  __int64 lVar1;
  int iVar3;
  char *pcVar4;
  __int64 lVar2;
  __int64 lVar5;
  __int64 lVar6;
  unsigned int uStack_40;
  int aiStack_3c [15];
  
  lVar5 = 0;
  uStack_40 = 0;
  lVar6 = -1;
  lVar1 = fn_828516B8();
  if (0 < lVar1) {
    do {
      fn_82851730(param_1,lVar5,&uStack_40);
      fn_82851870(uStack_40,aiStack_3c);
      iVar3 = fn_82F65390(aiStack_3c[0],0xffffffff8201f940,4);
      if (iVar3 == 0) {
        pcVar4 = strstr((char *)(aiStack_3c[0] + 4),";");
        lVar2 = fn_82F65B18((__int64)(int)pcVar4 + 1);
        if ((int)lVar6 < (int)lVar2) {
          lVar6 = lVar2;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < (int)lVar1);
  }
  return lVar6 + 1;
}

