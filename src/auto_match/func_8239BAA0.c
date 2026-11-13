extern int fn_822ABA88();
extern int fn_824BD858();
extern int fn_8288B760();
extern unsigned int ltcg_pool_0_0f;


void fn_8239BAA0(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  double dVar4;
  double dVar5;
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_3 * 4);
  iVar2 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),param_4);
  if (*(int *)(iVar2 + 0x24) != 0) {
    if (*(int *)(iVar2 + 0x168) == 0) {
      uVar3 = *(unsigned int *)(iVar2 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760();
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 != 0) {
      if (*(int *)(param_2 + 0x188) == 0) {
        if (*(int *)(param_2 + 0x184) == 0) {
          if (*(float *)(param_2 + 0x268) <= ltcg_pool_0_0f) {
            if (ltcg_pool_0_0f <= *(float *)(param_2 + 0x268)) {
              dVar5 = (double)*(float *)(param_1 + 0x3a8);
              dVar4 = (double)*(float *)(param_1 + 0x3a4);
            }
            else {
              dVar5 = (double)*(float *)(param_1 + 0x338);
              dVar4 = (double)*(float *)(param_1 + 0x334);
            }
          }
          else {
            dVar5 = (double)*(float *)(param_1 + 0x328);
            dVar4 = (double)*(float *)(param_1 + 0x324);
          }
        }
        else {
          dVar5 = (double)*(float *)(param_1 + 0x398);
          dVar4 = (double)*(float *)(param_1 + 0x394);
        }
      }
      else {
        dVar5 = (double)*(float *)(param_1 + 0x378);
        dVar4 = (double)*(float *)(param_1 + 0x374);
      }
      fn_824BD858(dVar4,dVar5);
    }
  }
  return;
}

