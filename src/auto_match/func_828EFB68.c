extern int fn_828EEB10();
extern int fn_828EF580();
extern int memcpy();


unsigned __int64 fn_828EFB68(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  
  lVar1 = fn_828EEB10(param_2);
  if (lVar1 != -0xc) {
    puVar3 = (unsigned char *)(param_4 + -1);
    lVar2 = lVar1 + 0xb;
    lVar4 = 8;
    do {
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + 1;
      *(unsigned char *)lVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    memcpy(lVar1 + 0x14,param_4 + 8,0x35);
  }
  fn_828EF580(param_1,param_2,param_3,lVar1);
  return param_1;
}

