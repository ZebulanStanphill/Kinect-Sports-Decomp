extern int fn_82417F58();
extern int fn_82419C70();
extern int fn_82508078();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_8235FBC8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  double dVar7;
  
  uVar5 = (unsigned __int64)*(unsigned int *)(param_2 + 0x2b20);
  iVar2 = fn_82417F58(uVar5);
  dVar7 = (double)ltcg_pool_0_0f;
  if ((dVar7 < (double)*(float *)(param_2 + 0x2c04)) && (*(int *)(iVar2 + 0x24) != 0)) {
    iVar3 = fn_82419C70(uVar5);
    if (((iVar3 != 0) || ((*(int *)(iVar2 + 0x1a0) != 0 || (*(int *)(iVar2 + 0x1e0) != 0)))) &&
       (fVar1 = (float)((double)*(float *)(param_2 + 0x2c04) - param_1),
       *(float *)(param_2 + 0x2c04) = fVar1, (double)fVar1 <= dVar7)) {
      (**(int (***)())(**(int **)(*(int *)(param_2 + 0x2b20) + 4) + 0x48))();
    }
  }
  if ((*(int *)(iVar2 + 0x24) == 0) && (*(unsigned int *)(iVar2 + 0x29c) != *(unsigned int *)(param_2 + 0x2c08))) {
    if (*(unsigned int *)(iVar2 + 0x29c) < 2) {
      lVar6 = (__int64)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      lbl_83265A28 = (int)lVar6;
      if (lVar6 < 1) {
        uVar4 = 0xffffffff821b26e8;
      }
      else {
        uVar4 = 0xffffffff821b26d8;
      }
      fn_82508078(*(unsigned int *)(param_2 + 0xa4),uVar4,0);
    }
    *(unsigned int *)(param_2 + 0x2c08) = *(unsigned int *)(iVar2 + 0x29c);
  }
  return;
}

