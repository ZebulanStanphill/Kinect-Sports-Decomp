#define true 1
extern int fn_82AB15D0();
extern int fn_82AB5FE0();
extern int fn_82AB6498();
extern int fn_82AB6770();
extern int fn_82AB67A8();
extern int fn_82B6B0C8();
extern int fn_82B6E6D0();
extern int fn_82B6E9E0();


__int64 fn_82B6D938(unsigned int *param_1)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  puVar6 = param_1 + 0xe;
  puVar5 = param_1 + 0x17;
  lVar4 = 8;
  do {
    while( true ) {
      lVar1 = fn_82AB6498(puVar6[1]);
      if (lVar1 == 0) break;
      iVar3 = fn_82AB67A8(lVar1);
      if (*(int *)(iVar3 + 0x14) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da0e0,0xffffffff820d9f48,0x153);
      }
      (*(int (**)())param_1[4])(*param_1,iVar3 + 4);
      *(unsigned int *)(iVar3 + 4) = 0;
      *(unsigned int *)(iVar3 + 8) = 0;
      *(unsigned int *)(iVar3 + 0xc) = 0;
      *(unsigned int *)(iVar3 + 0x10) = 0;
      *(unsigned int *)(iVar3 + 0x14) = 0;
      fn_82AB6770(lVar1);
    }
    if (puVar6[0x31] != 0) {
      puVar6[0x31] = 0;
      (*(int (**)())param_1[4])(*param_1,puVar5);
    }
    while( true ) {
      iVar3 = fn_82B6E9E0(puVar6[-7]);
      if (iVar3 == 0) break;
      if ((*(int *)(iVar3 + 0x20) != 0) && (iVar2 = (*(int (**)())param_1[2])(*param_1), iVar2 != 0)) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x180);
      }
      iVar3 = (*(int (**)())param_1[2])(*param_1,iVar3);
      if (iVar3 != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x185);
      }
    }
    fn_82B6E6D0(puVar6[-7]);
    puVar6[-7] = 0;
    fn_82AB5FE0(puVar6[1]);
    lVar4 = lVar4 + -1;
    puVar6 = puVar6 + 1;
    *puVar6 = 0;
    puVar5 = puVar5 + 5;
  } while (lVar4 != 0);
  fn_82B6B0C8(param_1[0x4f]);
  lVar4 = (*(int (**)())param_1[2])(*param_1,param_1);
  if (lVar4 != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9fac,0xffffffff820d9f48,0x198);
  }
  return lVar4;
}

