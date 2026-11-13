extern unsigned int lbl_821CAB38;
extern unsigned int ltcg_pool_0_0f;


void fn_825BC5E0(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,__int64 param_9,
                  int param_10)

{
  int (**pcVar1)();
  unsigned char bVar2;
  unsigned int uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar3 = (unsigned int)*(unsigned short *)(param_5 + 0xc);
  if (uVar3 != 0) {
    dVar7 = (double)ltcg_pool_0_0f;
    do {
      if (param_10 == 0) {
        dVar6 = (double)*(float *)(param_5 + 8);
        dVar5 = (double)*(float *)(param_5 + 4);
        iVar4 = (int)param_9;
        if (dVar6 == dVar7) {
          if ((dVar5 < param_2) || ((param_1 <= dVar5 && (iVar4 == 0)))) goto LAB_825bc714;
LAB_825bc670:
          bVar2 = -(param_9 != 0) & 3;
        }
        else {
          if ((param_2 <= dVar5) && ((dVar5 < param_1 || (iVar4 != 0)))) goto LAB_825bc670;
          if ((dVar6 < param_2) || ((param_1 <= dVar6 && (iVar4 == 0)))) {
            if ((param_1 <= dVar5) || ((dVar6 <= param_1 && (iVar4 == 0)))) goto LAB_825bc714;
            bVar2 = (iVar4 != 0) + 2;
          }
          else {
            bVar2 = (-(param_9 != 0) & 2U) + 1;
          }
        }
        pcVar1 = *(int (***)())(uVar3 * 8 + -0x7ce3fc18);
        if (pcVar1 != (int (**)())0x0) {
          (*pcVar1)(param_3,param_4,param_5,param_6,bVar2);
        }
      }
LAB_825bc714:
      param_5 = *(int *)(&lbl_821CAB38 + (unsigned int)*(unsigned short *)(param_5 + 0xc) * 4) + param_5;
      uVar3 = (unsigned int)*(unsigned short *)(param_5 + 0xc);
    } while (uVar3 != 0);
  }
  return;
}

