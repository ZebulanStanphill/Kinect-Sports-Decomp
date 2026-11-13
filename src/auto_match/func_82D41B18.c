extern int fn_82D41A70();
extern unsigned int lbl_82134508;


void fn_82D41B18(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned short *puVar9;
  unsigned char *pbVar10;
  __int64 lVar11;
  int iVar12;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  *param_3 = lbl_82134508;
  puVar2 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
  *puVar2 = in_register_000100d0;
  puVar2[1] = in_register_000100d4;
  puVar2[2] = in_register_000100d8;
  puVar2[3] = in_vr13;
  iVar12 = 0;
  puVar2 = (unsigned int *)((unsigned int)(param_3 + 4) & 0xfffffff0);
  *puVar2 = in_register_000100c0;
  puVar2[1] = in_register_000100c4;
  puVar2[2] = in_register_000100c8;
  puVar2[3] = in_vr12;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      if (*(char *)(param_1 + 0x48) == '\x01') {
        uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
        pbVar10 = (unsigned char *)(*(int *)(param_1 + 0x44) * iVar12 + *(int *)(param_1 + 0x40));
        uVar6 = (unsigned int)*pbVar10;
        uVar5 = (unsigned int)pbVar10[1];
        uVar3 = (unsigned int)pbVar10[2];
LAB_82d41bfc:
        iVar1 = *(int *)(param_1 + 0x1c);
        lVar7 = (__int64)(int)uVar5 * (__int64)iVar1;
        lVar11 = (__int64)(int)uVar3 * (__int64)iVar1 + uVar8;
        lVar4 = (__int64)(int)uVar6 * (__int64)iVar1 + uVar8;
      }
      else {
        uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
        puVar9 = (unsigned short *)(*(int *)(param_1 + 0x44) * iVar12 + *(int *)(param_1 + 0x40));
        if (*(char *)(param_1 + 0x48) == '\x02') {
          uVar6 = (unsigned int)*puVar9;
          uVar5 = (unsigned int)puVar9[1];
          uVar3 = (unsigned int)puVar9[2];
          goto LAB_82d41bfc;
        }
        iVar1 = *(int *)(param_1 + 0x1c);
        lVar7 = (__int64)*(int *)(puVar9 + 2) * (__int64)iVar1;
        lVar4 = (__int64)iVar1 * (__int64)*(int *)puVar9 + uVar8;
        lVar11 = (__int64)*(int *)(puVar9 + 4) * (__int64)iVar1 + uVar8;
      }
      fn_82D41A70(param_3,0xffffffff8323b1d0,lVar4,param_2);
      fn_82D41A70(param_3,0xffffffff8323b1d0,lVar7 + uVar8,param_2);
      fn_82D41A70(param_3,0xffffffff8323b1d0,lVar11,param_2);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0x14));
  }
  return;
}

