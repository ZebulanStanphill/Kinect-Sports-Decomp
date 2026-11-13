extern int fn_82554260();
extern int fn_827EFC90();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern int fn_82D93670();
extern unsigned int ltcg_pool_0_0f;


void fn_825B46F0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  double dVar7;
  
  uVar6 = *param_1;
  uVar1 = param_1[1];
  if (uVar6 < uVar1) {
    dVar7 = (double)ltcg_pool_0_0f;
    uVar5 = uVar6;
    do {
      if (*(int *)(uVar6 + 0xd4) != 0) {
        fn_82D93670(*(int *)(uVar6 + 0xd4),0x201f,uVar5);
      }
      if (*(int *)(uVar6 + 0xec) == 0) {
        puVar2 = *(unsigned int **)(uVar6 + 0xe4);
        if (puVar2[0x50] == 0) {
          uVar4 = (**(int (***)())(*(int *)*puVar2 + 0x4c))();
          puVar2[0x50] = uVar4;
          uVar3 = fn_827F04B0(0x1a0);
          if ((uVar3 & 0xffffffff) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = fn_82554260(uVar3,puVar2[0x50],1);
          }
          puVar2[0x51] = uVar4;
          fn_827F2DD0(dVar7,puVar2[0x50]);
        }
        fn_827EFC90(puVar2[0x50],*(unsigned int *)(uVar6 + 0xf4) & 0xffff,0xffffffff831d4550,uVar6);
      }
      uVar6 = uVar6 + 0x3f0;
      uVar5 = uVar5 + 0x3f0;
    } while (uVar6 < uVar1);
  }
  return;
}

