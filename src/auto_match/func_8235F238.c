typedef unsigned char bool;
#define NAN(x) ((x) != (x))
extern int fn_82547C80();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8235F238(double param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = (double)(float)((double)*(float *)(param_2 + 0x2be0) - param_1);
  dVar7 = (double)ltcg_pool_0_0f;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar8 < dVar7) << 2) | (unsigned int)(NAN(dVar8) || NAN(dVar7)) << 2)) < 0.0)
  {
    dVar8 = dVar7;
  }
  *(float *)(param_2 + 0x2be0) = (float)dVar8;
  if (dVar8 == dVar7) {
    iVar6 = 0;
    piVar5 = (int *)(param_2 + 0x2bc4);
    if (*(int *)(param_2 + 0x2bdc) == 0) {
      do {
        if (*(int *)((*(int *)(param_2 + 0x2b2c) * 0x1a + iVar6 + 0x587) * 4 + param_2) != 0) {
          fn_82547C80((unsigned __int64)*(unsigned int *)(*piVar5 + 0x8c0) + 0xd0,1,0);
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < 4);
      iVar6 = *(int *)(param_2 + 0x2b2c);
      iVar3 = iVar6 * 0x68 + param_2;
      uVar1 = *(unsigned int *)(iVar3 + 0x1630);
    }
    else {
      do {
        if (*(int *)((*(int *)(param_2 + 0x2b2c) * 0x1a + iVar6 + 0x587) * 4 + param_2) != 0) {
          fn_82547C80((unsigned __int64)*(unsigned int *)(*piVar5 + 0x8c0) + 0xd0,1,
                       *(unsigned int *)(param_2 + 0x2bd8) & 0xff);
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar6 < 4);
      iVar6 = *(int *)(param_2 + 0x2b2c);
      iVar3 = iVar6 * 0x68 + param_2;
      uVar1 = *(unsigned int *)(iVar3 + 0x162c);
    }
    *(unsigned int *)(param_2 + 0x2be0) = uVar1;
    bVar2 = *(int *)(param_2 + 0x2bdc) == 0;
    *(unsigned int *)(param_2 + 0x2bdc) = (unsigned int)bVar2;
    if ((!bVar2) && ((double)*(float *)(iVar3 + 0x1630) == dVar7)) {
      *(unsigned int *)(param_2 + 0x2bdc) = 1;
    }
    if (*(int *)(param_2 + 0x2bdc) != 0) {
      iVar3 = 1;
      do {
        iVar4 = *(int *)(param_2 + 0x2bd8) % 3 + iVar3;
        if (*(int *)((iVar6 * 0x1a + iVar4 + 0x583) * 4 + param_2) != 0) {
          *(int *)(param_2 + 0x2bd8) = iVar4;
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
  }
  return;
}

