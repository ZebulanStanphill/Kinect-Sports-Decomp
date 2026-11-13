extern int fn_82AB15D0();
extern int fn_82AB60F0();
extern int fn_82AB63F8();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82AB7198();
extern int fn_82AB7358();
extern int fn_82B7F5B8();
extern int fn_82F68CC0();


unsigned __int64 fn_82B7F730(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar2;
  int *piVar5;
  __int64 lVar6;
  
  uVar1 = fn_82AB7358(param_2);
  iVar3 = fn_82AB60F0();
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (unsigned int *)fn_82AB7198(param_2);
    lVar6 = ((unsigned __int64)*puVar4 + 2 & 0x3fffffff) << 2;
    uVar2 = (*(int (**)())param_1[1])(*param_1,lVar6);
    fn_82F68CC0(uVar2,puVar4,lVar6);
    for (lVar6 = fn_82AB63F8(uVar1); lVar6 != 0; lVar6 = fn_82AB66F8(uVar1,lVar6)) {
      piVar5 = (int *)fn_82AB67A8(lVar6);
      if (*piVar5 == 0) {
        fn_82B7F5B8(piVar5,uVar2,param_3,param_1[3]);
      }
      else {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dbcd0,0xffffffff820dbba0,0x34a);
      }
    }
  }
  return uVar2;
}

