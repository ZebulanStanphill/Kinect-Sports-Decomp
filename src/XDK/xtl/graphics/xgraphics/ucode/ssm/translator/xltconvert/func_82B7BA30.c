extern int fn_82AB15D0();
extern int fn_82B7B6A0();
extern int fn_82B7FA90();


unsigned __int64 fn_82B7BA30(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned char *puVar5;
  __int64 lVar6;
  
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dae48,0xffffffff820da3b8,0x3fbb);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d771c,0xffffffff820da3b8,0x3fbc);
  }
  puVar3 = (unsigned int *)(*(int (**)())param_1[1])(*param_1,0x6e0);
  puVar5 = (unsigned char *)((int)puVar3 + -1);
  lVar6 = 0x6e0;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar5 = (unsigned char *)((int)puVar3 + 0x1f);
  lVar6 = 0x640;
  do {
    puVar5 = puVar5 + 1;
    *puVar5 = 0xff;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *puVar3 = *param_1;
  puVar3[1] = param_1[1];
  puVar3[2] = param_1[2];
  puVar3[3] = param_1[3];
  puVar3[5] = param_2;
  puVar3[4] = (int)param_3;
  puVar3[0x19e] = 1;
  puVar3[0x19d] = 0;
  puVar3[0x1a1] = 2;
  puVar3[0x1a7] = 0;
  puVar3[0x1a2] = 0xffff;
  puVar3[0x1a3] = 0;
  uVar4 = (*(int (**)())param_1[1])(*param_1,0x5b54);
  puVar3[7] = uVar4;
  uVar1 = (*(int (**)())param_1[1])(*param_1,12000);
  uVar2 = fn_82B7B6A0(puVar3,param_4,uVar1);
  fn_82B7FA90(param_3,(uVar2 & 0xffffffff) >> 2,uVar1);
  (*(int (**)())param_1[2])(*param_1,uVar1);
  (*(int (**)())param_1[2])(*param_1,puVar3[7]);
  (*(int (**)())param_1[2])(*param_1,puVar3);
  return 0;
}

