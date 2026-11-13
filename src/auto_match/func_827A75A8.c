typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_78;
extern unsigned int *auStack_88;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d8;
extern int fn_827A5498();
extern int fn_827A6F48();
extern int fn_827A6FC0();
extern unsigned int iStack_100;
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int iStack_fc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;


bool fn_827A75A8(unsigned int *param_1,int param_2,int param_3,int *param_4,unsigned __int64 param_5)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  struct { int first; int second; } stack_pair_110;

  int iStack_108;
  struct { int first; int second; } stack_pair_100;

  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned char auStack_d8 [16];
  unsigned char auStack_c8 [16];
  unsigned char auStack_b8 [16];
  unsigned char auStack_a8 [16];
  unsigned char auStack_98 [16];
  unsigned char auStack_88 [16];
  unsigned char auStack_78 [56];

  iVar6 = 0xb;
  uStack_f4 = 0;
  stack_pair_100.second = param_3 * 2 + param_2;
  uStack_f8 = 0xb;
  uStack_f0 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  iVar4 = 0;
  iVar5 = 0;
  uStack_ec = 1;
  bVar2 = false;
  uStack_e8 = 1;
  uVar7 = 0;
  stack_pair_110.first = 0xb;
  bVar1 = false;
  stack_pair_110.second = 0;
  iStack_108 = 0;
  stack_pair_100.first = param_2;
  do {
    if (uVar7 == 4) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      piVar3 = (int *)fn_827A5498(auStack_a8,&stack_pair_100.first);
      iVar6 = *piVar3;
      iVar4 = piVar3[1];
      iVar5 = piVar3[2];
      stack_pair_110.first = iVar6;
      stack_pair_110.second = iVar4;
      iStack_108 = iVar5;
    }
    if (iVar6 == 10) {
      uVar7 = 3;
    }
    if (uVar7 == 0) {
      if (iVar6 == 0) {
        if (*(char *)(param_1 + 9) == '\0') {
          *param_1 = 0;
          param_1[1] = iVar4;
          param_1[2] = iVar5;
          piVar3 = (int *)fn_827A5498(auStack_c8,&stack_pair_100.first);
          iVar6 = *piVar3;
          iVar4 = piVar3[1];
          iVar5 = piVar3[2];
          stack_pair_110.first = iVar6;
          stack_pair_110.second = iVar4;
          iStack_108 = iVar5;
          if (iVar6 == 9) {
            *(unsigned char *)(param_1 + 9) = 1;
            param_1[2] = param_1[2] + iVar5;
            goto LAB_827a7934;
          }
          bVar1 = true;
        }
        else {
          param_1[2] = param_1[2] + iVar5;
        }
        (**(int (***)())(*param_4 + 4))(param_4,param_1,param_5);
        if (bVar1) {
          bVar1 = false;
        }
        else {
          piVar3 = (int *)fn_827A5498(auStack_b8,&stack_pair_100.first);
          iVar6 = *piVar3;
          iVar4 = piVar3[1];
          iVar5 = piVar3[2];
          stack_pair_110.first = iVar6;
          stack_pair_110.second = iVar4;
          iStack_108 = iVar5;
        }
        if (iVar6 == 2) {
          piVar3 = (int *)fn_827A5498(auStack_98,&stack_pair_100.first);
          iVar6 = *piVar3;
          iVar4 = piVar3[1];
          iVar5 = piVar3[2];
          stack_pair_110.first = iVar6;
          stack_pair_110.second = iVar4;
          iStack_108 = iVar5;
        }
        if (iVar6 == 5) {
          *(unsigned char *)(param_1 + 9) = 0;
LAB_827a7930:
          uVar7 = 0;
        }
        else {
          if (iVar6 != 6) goto LAB_827a7918;
          uVar7 = 1;
          *(unsigned char *)(param_1 + 9) = 0;
        }
      }
      else if ((iVar6 != 2) || (*(char *)(param_1 + 9) != '\0')) goto LAB_827a7918;
    }
    else if (uVar7 == 1) {
      if (iVar6 == 0) {
        param_1[3] = 0;
        param_1[4] = iVar4;
        param_1[5] = iVar5;
        piVar3 = (int *)fn_827A5498(auStack_88,&stack_pair_100.first);
        iVar6 = *piVar3;
        iVar4 = piVar3[1];
        iVar5 = piVar3[2];
        if (iVar6 == 2) {
          stack_pair_110.first = iVar6;
          stack_pair_110.second = iVar4;
          iStack_108 = iVar5;
          piVar3 = (int *)fn_827A5498(auStack_d8,&stack_pair_100.first);
          iVar6 = *piVar3;
          iVar4 = piVar3[1];
          iVar5 = piVar3[2];
        }
        stack_pair_110.first = iVar6;
        stack_pair_110.second = iVar4;
        iStack_108 = iVar5;
        if (iVar6 != 9) goto LAB_827a7918;
        uVar7 = 2;
      }
      else if (iVar6 != 2) {
        if (iVar6 == 7) {
          (**(int (***)())(*param_4 + 8))(param_4,param_5);
          goto LAB_827a7930;
        }
LAB_827a7918:
        uVar7 = 4;
      }
    }
    else if (uVar7 < 3) {
      if (iVar6 == 7) {
        (**(int (***)())(*param_4 + 0xc))(param_4,param_1 + 3,param_1 + 6,param_5);
        (**(int (***)())(*param_4 + 8))(param_4,param_5);
        *(unsigned char *)((int)param_1 + 0x25) = 0;
        goto LAB_827a7930;
      }
      if (iVar6 == 8) {
        (**(int (***)())(*param_4 + 0xc))(param_4,param_1 + 3,param_1 + 6,param_5);
        uVar7 = 1;
        *(unsigned char *)((int)param_1 + 0x25) = 0;
      }
      else {
        if (*(char *)((int)param_1 + 0x25) == '\0') {
          fn_827A6F48(param_1 + 6,0);
          *(unsigned char *)((int)param_1 + 0x25) = 1;
          if (iVar6 == 2) {
            piVar3 = (int *)fn_827A5498(auStack_78,&stack_pair_100.first);
            iVar6 = *piVar3;
            iVar4 = piVar3[1];
            iVar5 = piVar3[2];
            stack_pair_110.first = iVar6;
            stack_pair_110.second = iVar4;
            iStack_108 = iVar5;
          }
          param_1[10] = uStack_ec;
          param_1[0xb] = uStack_e8;
        }
        fn_827A6FC0(param_1 + 6,&stack_pair_110.first);
      }
    }
    else {
      bVar2 = true;
    }
LAB_827a7934:;} while (!bVar2);
  return uVar7 == 3;
}
