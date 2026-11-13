#define true 1
extern int fn_825BBD78();
extern int fn_825BBFA8();
extern int fn_825BC0E0();
extern unsigned int lbl_82195530;
extern unsigned int ltcg_pool_0_0f;


unsigned short * fn_8255C730(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  int iVar3;
  unsigned short *puVar4;
  unsigned short *puVar5;
  double dVar6;
  double dVar7;
  float afStack_40 [16];
  
  puVar5 = *(unsigned short **)(param_1 + 4);
  puVar2 = *(unsigned short **)(param_1 + 8);
  puVar4 = (unsigned short *)0x0;
  dVar6 = (double)ltcg_pool_0_0f;
  dVar7 = (double)lbl_82195530;
  afStack_40[0] = ltcg_pool_0_0f;
  do {
    if (puVar2 <= puVar5) {
      return puVar4;
    }
    if ((param_3 == 0) || ((*(unsigned int *)(puVar5 + 2) & param_3) != 0)) {
      uVar1 = *puVar5;
      if (uVar1 == 0) {
        iVar3 = fn_825BBFA8(puVar5,param_2,afStack_40);
LAB_8255c7d4:
        if (iVar3 != 0) {
          return puVar5;
        }
        dVar6 = (double)afStack_40[0];
      }
      else {
        if (uVar1 == 1) {
          iVar3 = fn_825BC0E0(puVar5,param_2,afStack_40);
          goto LAB_8255c7d4;
        }
        if (uVar1 < 3) {
          iVar3 = fn_825BBD78(puVar5,param_2,1);
          goto LAB_8255c7d4;
        }
      }
      if ((puVar4 == (unsigned short *)0x0) || (dVar6 < dVar7)) {
        dVar7 = dVar6;
        puVar4 = puVar5;
      }
    }
    puVar5 = puVar5 + 0x28;
  } while( true );
}

