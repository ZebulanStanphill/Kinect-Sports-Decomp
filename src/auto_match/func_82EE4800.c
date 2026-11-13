extern unsigned int *auStack_50;
extern int fn_82E3C590();
extern int fn_82E4FE40();
extern void *fn_82E50BE8(unsigned,int,int,int,int);
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82EE32F8();
extern int fn_82EE3730();
extern int fn_82EE39D8();
extern int fn_82EE3F30();


int fn_82EE4800(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  void *uVar6;unsigned short counter;
  int lVar7;
  unsigned short auStack_50 [1];
  
  if ((unsigned)param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  if (param_2 == (unsigned int *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  uVar1 = param_1[0x10];
  if (uVar1 < 0x2a) {
    uVar3 = 0x2a;
LAB_82ee4858:
    *param_2 = uVar3;
    lVar7=-0x3ff2c94f;goto done;
  }
  else {
    fn_82EE3F30(param_1);
    piVar4 = param_1 + 10;
    fn_82E57620(param_1 + 4,piVar4);
    fn_82E576A8(param_1 + 8,piVar4);
    lVar7 = fn_82E57620(param_1 + 0x5d,piVar4);
    if ((lVar7 >= 0) && (lVar7 = fn_82E57738(auStack_50,piVar4), lVar7 >= 0)) {
      uVar5 = (unsigned int)auStack_50[0];
      uVar3 = (uVar5 + 0x15) * 2;
      if (uVar1 < uVar3) {*param_2=uVar3;lVar7=-0x3ff2c94f;goto done;}
      uVar6 = 0;
      counter = 0;
      if (uVar5 != 0) {
        do {
          iVar2 = (int)fn_82E50BE8(0x104,0,0,0,0);
          if((void*)iVar2 != 0) uVar6=(void*)fn_82EE39D8(iVar2); else uVar6=0;
          if (uVar6 == 0) {
            lVar7 = -0x7ff8fff2;
            goto LAB_82ee49bc;
          }
          lVar7 = fn_82E57738(auStack_50,piVar4);
          if (lVar7 < 0) goto LAB_82ee4994;
          iVar2 = fn_82E3C590(uVar6,auStack_50[0],0);
          if (iVar2 == 0) {
            lVar7 = -0x7ff8fff2;
            goto LAB_82ee4994;
          }
          iVar2 = fn_82EE32F8(param_1 + 0x12,uVar6,0);
          if (iVar2 == 0) {
            lVar7 = -0x7ff8fff2;
            break;
          }
          counter = (unsigned short)(counter + 1);
        } while (counter < uVar5);
      }
      if ((int)lVar7 < 0) {
LAB_82ee4994:
        if (uVar6 != 0) {
          fn_82EE3730(uVar6);
          fn_82E4FE40(uVar6);
        }
      }
    }
    if ((int)lVar7 != -0x3ff2c94f) {
LAB_82ee49bc:
      *param_2 = uVar1 - param_1[0x10];
      if (((int)lVar7 >= 0) && ((*(unsigned __int64 (**)())(*param_1+0x2c))(param_1) != *param_2))
      {
        lVar7 = -0x3ff2c566;
      }
    }
  }
  done: return lVar7;
}

