typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_40;
extern int fn_822C4DB0();
extern int fn_822C72E0();
extern int fn_8230C220();
extern int fn_823691B0();
extern int fn_825113E0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8230C5F8(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char auStack_40 [16];
  
  fn_823691B0(*(unsigned int *)(param_2 + 0x10),*(unsigned int *)(param_2 + 0xc),auStack_40,
                    &uStack_50);
  fn_822C4DB0(*(unsigned int *)(param_2 + 0xc));
  if (*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0xd4) + 0x18) + 0xc) == 0) {
    piVar2 = *(int **)(*(int *)(param_2 + 0x10) + 0x84);
    if (piVar2 == (int *)0x0) {
      bVar6 = true;
    }
    else {
      iVar4 = (**(int (***)())(*piVar2 + 8))();
      cVar5 = (**(int (***)())(*(int *)(iVar4 + 0x9c) + 0x3c))();
      bVar6 = cVar5 != '\0';
    }
    if (bVar6) {
      fVar1 = (float)((double)*(float *)(param_2 + 0x38) - param_1);
      *(float *)(param_2 + 0x38) = fVar1;
      if (((*(int *)(param_2 + 0x3c) != 0) && (fVar1 <= ltcg_pool_0_0f)) &&
         (iVar4 = fn_822C72E0(*(unsigned int *)
                                     (*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20),
                                    0xffffffff821af36c), iVar4 != 0)) {
        iVar4 = *(int *)(param_2 + 0xc);
        iVar3 = *(int *)(param_2 + 0x10);
        *(unsigned int *)(param_2 + 0x3c) = 0;
        fn_825113E0((unsigned __int64)*(unsigned int *)(iVar4 + 0x118) + 0x14,0x14,param_2 + 0x18);
        *(unsigned int *)(iVar3 + 0x14c0) = *(unsigned int *)(iVar4 + 0x2c);
        *(unsigned int *)(iVar3 + 0x14c4) = *(unsigned int *)(iVar4 + 0x28);
      }
    }
  }
  uStack_50 = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x28);
  uStack_4c = *(unsigned int *)(*(int *)(param_2 + 0xc) + 0x2c);
  fn_8230C220((unsigned __int64)*(unsigned int *)(param_2 + 0x10) + 0xa18,&uStack_50);
  return;
}

