extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_8265CA20();
extern int fn_8288B788();
extern int fn_8288DF40();
extern int fn_8288EC98();
extern int fn_8288F180();
extern int fn_82897620();
extern int fn_8289A470();
extern int fn_8289F2E0();
extern int fn_82A4AAA8();
extern int fn_82F622E0();
extern unsigned int uStack_4c;


void fn_82890C30(int *param_1,char param_2,unsigned __int64 param_3,unsigned int param_4,int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_70 [1];
  unsigned int auStack_60 [5];
  unsigned int uStack_4c;
  
  piVar4 = (int *)fn_8289F2E0(param_1[4],param_3);
  if (*(char *)(*(int *)(param_1[0xd] + 0x38) + 0x26) != '\0') {
    if (param_2 == '\0') {
      uVar3 = fn_8240D928();
      puVar5 = (unsigned int *)fn_8288DF40(auStack_70,param_1 + 0xf,uVar3);
      if ((1 << (puVar5[1] & 0x3f) & *(unsigned int *)*puVar5) == 0) {
        uVar3 = (**(int (***)())(*piVar4 + 0xc))(piVar4);
        iVar6 = fn_82A4AAA8();
        if (iVar6 == 1) {
          fn_8288B788(param_1,uVar3);
          fn_8288EC98(param_1,uVar3);
        }
      }
    }
    else if (*(unsigned char *)(param_1 + 0x17) == param_4) {
      uVar3 = fn_8240D928(piVar4);
      puVar5 = (unsigned int *)fn_8288DF40(auStack_70,param_1 + 0xf,uVar3);
      if ((1 << (puVar5[1] & 0x3f) & *(unsigned int *)*puVar5) == 0) {
        (**(int (***)())(*param_1 + 8))(param_1);
        uVar7 = 0;
        uVar2 = param_5[1] - *param_5 >> 2;
        if (uVar2 != 0) {
          iVar6 = 0;
          do {
            if ((unsigned __int64)(unsigned int)(param_5[1] - *param_5 >> 2) <= (uVar7 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
              fn_82F622E0(0xffffffff821ae698);
            }
            iVar1 = *(int *)(iVar6 + *param_5);
            if (iVar1 != 0) {
              uVar3 = (**(int (***)())(*param_1 + 8))(param_1);
              uVar3 = fn_82897620(uVar3,uVar7);
              fn_8289A470(uVar3,piVar4,iVar1);
            }
            uVar7 = uVar7 + 1;
            iVar6 = iVar6 + 4;
          } while ((uVar7 & 0xffffffff) < (unsigned __int64)uVar2);
        }
        fn_82230110(auStack_60,0xffffffff820237e0);
        uVar3 = fn_823AA970(piVar4);
        fn_8288F180(param_1,uVar3,auStack_60);
        if (0xf < uStack_4c) {
          fn_8265CA20(auStack_60[0]);
        }
      }
    }
  }
  return;
}

