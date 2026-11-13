extern unsigned int *auStack_a0;
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99CF8();
extern int fn_82A99D88();
extern int fn_82A9A810();
extern int fn_82A9A860();
extern int sprintf();
extern unsigned int lbl_820D2920;


void fn_82A9ACD0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char auStack_a0 [112];
  
  fn_82A99BC8(param_2);
  fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2940);
  fn_82A9A860(param_2);
  uVar1 = *param_3;
  if (uVar1 < param_3[1] * 0x10 + uVar1) {
    puVar4 = (unsigned int *)(uVar1 + 0xc);
    do {
      if ((*puVar4 & 0xfe00) != 0x6000) {
        fn_82A99BC8(param_2);
        fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2910);
        fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d2918,puVar4[-3]);
        fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff8200128c,puVar4[-2]);
        uVar2 = 0xffffffff82196f18;
        if ((*puVar4 & 0x80000000) == 0) {
          uVar2 = 0xffffffff82196f10;
        }
        fn_82A99D88(param_2,0xffffffff821a894c,uVar2);
        sprintf(auStack_a0,0xffffffff820d2930,*puVar4 >> 9 & 0x7f,puVar4[-1] >> 2,
                          *(unsigned int *)(&lbl_820D2920 + (puVar4[-1] & 3) * 4));
        fn_82A99D88(param_2,0xffffffff820d2938,auStack_a0);
        uVar2 = 0xffffffff82196f18;
        if ((*puVar4 & 0x40000000) == 0) {
          uVar2 = 0xffffffff82196f10;
        }
        fn_82A99D88(param_2,0xffffffff820d293c,uVar2);
        fn_82A99CF8(param_2,0xffffffff820d28e8,param_4,*puVar4 >> 0x1d & 1,
                      *puVar4 >> 0x10 & 0x1fff);
        fn_82A9A810(param_2);
      }
      puVar3 = puVar4 + 1;
      puVar4 = puVar4 + 4;
    } while (puVar3 < (unsigned int *)(param_3[1] * 0x10 + *param_3));
  }
  fn_82A99C28(param_2,0xffffffff820d2940);
  return;
}

