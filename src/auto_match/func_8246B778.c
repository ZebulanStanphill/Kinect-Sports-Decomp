extern int fn_82469FF0();
extern int fn_8246B2A8();
extern int fn_8246B5D8();
extern int fn_825200A8();
extern int fn_8265C9E0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C6D70;


void fn_8246B778(int param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  float fVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  double dVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  if ((param_3 != (unsigned int *)0x0) &&
     (uVar4 = (unsigned __int64)*param_3, uVar4 != (uVar4 - 1) + (unsigned __int64)(uVar4 == 0))) {
    iVar5 = param_2 * 0x40 + param_1;
    if (((unsigned __int64)*(unsigned int *)(iVar5 + 0x34) == 0) ||
       (iVar3 = fn_825200A8(param_3,(unsigned __int64)*(unsigned int *)(iVar5 + 0x34) + 0xc), iVar3 == 0)) {
      if (*(int *)(iVar5 + 0x38) != 0) {
        fn_8246B5D8();
      }
      fVar2 = ltcg_pool_0_0f;
      iVar3 = *(int *)(iVar5 + 0x34);
      dVar6 = (double)ltcg_pool_0_0f;
      *(int *)(iVar5 + 0x38) = iVar3;
      if (iVar3 != 0) {
        puVar1 = (unsigned int *)(iVar5 + 0x10U & 0xfffffff0);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        *(unsigned int *)(iVar3 + 0x30) = 0;
        *(float *)(iVar3 + 0x20) = fVar2;
        puVar1 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
      }
      uVar4 = fn_8265C9E0(0xd0);
      if ((uVar4 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82469FF0((double)*(float *)(iVar5 + 0x30),uVar4,
                                  *(unsigned int *)(param_1 + 0x80),param_1 + 0x88,param_2,param_3,
                                  param_4,0x20,(__int64)*(float *)(param_1 + 0xd8) & 0xffffffff);
      }
      *(int *)(iVar5 + 0x34) = iVar3;
      iVar5 = param_1 + 0x94;
      if (param_2 != 0) {
        iVar5 = param_1 + 0x90;
      }
      *(float *)(iVar3 + 0x90) = (float)dVar6;
      *(unsigned int *)(iVar3 + 0x8c) = lbl_831C6D70;
      fn_8246B2A8(iVar3,iVar5);
    }
  }
  return;
}

