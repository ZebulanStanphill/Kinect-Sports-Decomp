#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_830;
extern int fn_8229F910();
extern int fn_8229FDA0();
extern int fn_822A02D8();
extern int fn_82358FD8();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int iStack_834;
extern unsigned int iStack_838;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_840;


void fn_8238D478(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  double dVar6;
  unsigned __int64 uStack_840;
  int iStack_838;
  int iStack_834;
  unsigned char auStack_830 [2032];
  
  dVar6 = (double)(**(int (***)())(*param_1 + 0x84))();
  uVar4 = (**(int (***)())(*param_1 + 0x88))(param_1);
  if ((uVar4 & 0xffffffff) != 0) {
    uVar1 = param_1[5];
    param_1[5] = (int)(uVar1 + uVar4);
    uVar4 = (uVar1 + uVar4) - (unsigned __int64)(unsigned int)param_1[3];
    uVar4 = fn_8229FDA0(*(unsigned int *)(*(int *)(param_1[2] + 0xd4) + 0xc),
                              ((uVar4 & 0xffffffff) >> 0x1f) - (unsigned __int64)(uVar4 != 0) & uVar4);
  }
  if ((double)ltcg_pool_0_0f < dVar6) {
    param_1[6] = (int)(float)(dVar6 + (double)(float)param_1[6]);
    uStack_840 = uStack_840 & 0xffffffff;
    iVar2 = *(int *)(param_1[2] + 0xd4);
    iStack_834 = 0;
    iStack_838 = 0;
    fn_822A02D8(dVar6,uVar4,&uStack_840,&iStack_834,&iStack_838);
    fn_82358FD8(*(unsigned int *)(iVar2 + 0x1c),auStack_830,0x400,0xffffffff821aae34);
    uStack_840 = (unsigned __int64)iStack_838;
    fn_8229F910((double)(__int64)iStack_834,(double)(__int64)uStack_840,
                      *(unsigned int *)(iVar2 + 0xc),auStack_830);
    iVar3 = param_1[2];
    iVar2 = param_1[6];
    *(int *)(iVar3 + 200) = iVar2;
    *(unsigned int *)(iVar3 + 0xbc) = 1;
    *(int *)(iVar3 + 0xc4) = iVar2;
    *(unsigned int *)(iVar3 + 0xc0) = 0xffffffff;
  }
  uStack_840 = CONCAT44(*(unsigned int *)(param_1[2] + 0x2fc),(((unsigned __int64)(uStack_840) >> 32) & 0xFFFFFFFF));
  uVar5 = fn_82535298(&uStack_840,**(unsigned int **)(param_1[2] + 0x9b8),0xffffffff83296bc0,
                            0xffffffff83296bd0);
  uStack_840 = CONCAT44(uVar5,(((unsigned __int64)(uStack_840) >> 32) & 0xFFFFFFFF));
  fn_82536288(&uStack_840);
  return;
}

