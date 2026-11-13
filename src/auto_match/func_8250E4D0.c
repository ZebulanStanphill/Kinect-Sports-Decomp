extern int fn_823116D8();
extern int fn_8250ED28();
extern int fn_8250F558();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_60;


int * fn_8250E4D0(int *param_1,unsigned int *param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 *puVar3;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned char uStack_60;
  unsigned __int64 uStack_50;
  unsigned __int64 uStack_48;
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar4 = ltcg_pool_0_0f;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = iVar4;
  param_1[0xc] = iVar4;
  param_1[0xd] = param_3;
  param_1[0xe] = param_4;
  uVar1 = param_2[1];
  for (uVar6 = (unsigned __int64)*param_2; (uVar6 & 0xffffffff) != (unsigned __int64)uVar1; uVar6 = uVar6 + 8) {
    fn_8250ED28(param_1,uVar6);
  }
  piVar2 = (int *)param_1[1];
  if ((int *)*param_1 != piVar2) {
    piVar7 = (int *)*param_1 + 4;
    do {
      fn_8250F558(*piVar7,piVar7[1],piVar7[1] - *piVar7 >> 5,uStack_60);
      puVar3 = (unsigned __int64 *)*piVar7;
      if ((piVar7[1] - (int)puVar3 & 0xffffffe0U) == 0x20) {
        uStack_50 = *puVar3;
        uStack_48 = puVar3[1];
        uStack_40 = puVar3[2];
        uStack_38 = puVar3[3];
        fn_823116D8(piVar7,&uStack_50);
      }
      piVar5 = piVar7 + 4;
      piVar7 = piVar7 + 8;
    } while (piVar5 != piVar2);
  }
  return param_1;
}

