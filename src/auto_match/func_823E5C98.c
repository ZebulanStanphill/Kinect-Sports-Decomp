#define true 1
extern unsigned int *auStack_120;
extern int fn_823E5F38();
extern int fn_823E6118();
extern int fn_823E6438();
extern int fn_8265BF48();
extern unsigned int uStack_100;
extern unsigned int uStack_104;
extern unsigned int uStack_108;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_823E5C98(int param_1,int *param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int auStack_120 [6];
  unsigned int uStack_108;
  unsigned int uStack_104;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  
  auStack_120[0] = fn_8265BF48(0xffffffff821b6a90,0);
  auStack_120[1] = 0;
  auStack_120[2] = 1;
  auStack_120[3] = 3;
  auStack_120[4] = 0xffffffff;
  auStack_120[5] = fn_8265BF48(0xffffffff821b6aac,0);
  uStack_108 = 0;
  uStack_104 = 1;
  uStack_100 = 2;
  uStack_fc = 0xffffffff;
  uStack_f8 = fn_8265BF48(0xffffffff821b6acc,0);
  uStack_f4 = 0;
  uStack_f0 = 3;
  uStack_ec = 2;
  uStack_e8 = 0xffffffff;
  uStack_e4 = fn_8265BF48(0xffffffff821b6ae8,0);
  uStack_e0 = 1;
  uStack_d4 = 0xffffffff;
  uStack_dc = 4;
  uStack_d8 = 6;
  uStack_d0 = fn_8265BF48(0xffffffff821b6b08,0);
  uStack_cc = 3;
  uStack_c8 = 4;
  uStack_c4 = 5;
  uStack_c0 = 6;
  uStack_bc = fn_8265BF48(0xffffffff821b6b28,0);
  uStack_b8 = 2;
  uStack_b4 = 6;
  uStack_b0 = 5;
  uStack_ac = 0xffffffff;
  uStack_a8 = fn_8265BF48(0xffffffff821b6b48,0);
  uStack_a4 = 6;
  uStack_a0 = 1;
  uStack_9c = 2;
  uStack_98 = 0xffffffff;
  uStack_94 = fn_8265BF48(0xffffffff821b6b64,0);
  uStack_84 = 0xffffffff;
  uStack_90 = 6;
  uStack_8c = 1;
  uStack_88 = 2;
  uStack_80 = fn_8265BF48(0xffffffff821b6b80,0);
  uStack_70 = 0xffffffff;
  uStack_7c = 6;
  uStack_78 = 1;
  uStack_74 = 2;
  uVar1 = fn_8265BF48((unsigned __int64)*(unsigned int *)(*(int *)(param_2[4] * 4 + *param_2) + 0x48) + 0xc,0
                           );
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0xffffffff;
  uVar7 = 0xffffffff;
  do {
    uVar2 = 0;
    do {
      uVar6 = uVar2;
      uVar8 = uVar3;
      if (uVar1 == auStack_120[(uVar4 + uVar2) * 5]) break;
      uVar2 = uVar2 + 1;
      uVar6 = uVar5;
      uVar8 = uVar7;
    } while (uVar2 < 3);
    uVar4 = uVar4 + 3;
    uVar3 = uVar3 + 1;
    uVar5 = uVar6;
    uVar7 = uVar8;
    if (8 < uVar4) {
      if (uVar8 == 0) {
        fn_823E5F38(param_1,param_2,param_3,auStack_120 + uVar6 * 5 + 2);
      }
      else if (uVar8 == 1) {
        fn_823E6118(param_1,param_2,param_3,auStack_120[(uVar6 + 3) * 5 + 1],
                          auStack_120 + (uVar6 + 3) * 5 + 2);
      }
      else if (uVar8 < 3) {
        fn_823E6438(param_1,param_2,param_3,auStack_120[(uVar6 + 6) * 5 + 1],
                          auStack_120 + (uVar6 + 6) * 5 + 2);
      }
      *(unsigned int *)(param_1 + 0xea4) = uVar8;
      *param_4 = auStack_120[(uVar8 * 3 + uVar6) * 5 + 1];
      return;
    }
  } while( true );
}

