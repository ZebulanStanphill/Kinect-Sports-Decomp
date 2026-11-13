extern int fn_82511350();
extern int fn_8251F720();
extern int fn_82554260();
extern int fn_827F2DD0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_824C7738;


unsigned int *
fn_824C73C0(unsigned int *param_1,int *param_2,unsigned __int64 param_3,int param_4,unsigned int param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  
  uVar2 = (**(int (***)())(*param_2 + 0x4c))(param_2);
  *param_1 = (int)uVar2;
  fn_82554260(param_1 + 1,uVar2,1);
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(unsigned char *)(param_1 + 0x6d) = 0;
  *(unsigned char *)((int)param_1 + 0x1b5) = 0;
  *(unsigned char *)((int)param_1 + 0x1b6) = 0;
  fn_82511350(param_1 + 0x6e);
  uVar3 = fn_8251F720(param_3,0);
  param_1[0x72] = uVar3;
  param_1[0x73] = param_2;
  puVar4 = param_1 + 0x74;
  if (*(int *)(param_4 + 0x10) == 0) {
    param_1[0x78] = 0;
  }
  else {
    if (*(int *)(param_4 + 0x10) != param_4) {
      puVar4 = (unsigned int *)0x0;
    }
    uVar3 = (**(int (***)())**(unsigned int **)(param_4 + 0x10))(*(unsigned int **)(param_4 + 0x10),puVar4);
    param_1[0x78] = uVar3;
  }
  param_1[0x7a] = param_5;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0xffffffff;
  fn_827F2DD0((double)ltcg_pool_0_0f,*param_1,param_1 + 1);
  uVar6 = 0;
  if (param_1[100] != 0) {
    iVar5 = 0;
    do {
      uVar6 = uVar6 + 1;
      iVar1 = *(int *)(iVar5 + param_1[0x65]);
      iVar5 = iVar5 + 4;
      *(unsigned char **)(iVar1 + 0x170) = &lbl_824C7738;
      *(unsigned int *)(iVar1 + 0x174) = 0;
      *(unsigned int **)(iVar1 + 0x178) = param_1;
    } while (uVar6 < (unsigned int)param_1[100]);
  }
  return param_1;
}

