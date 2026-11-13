extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_80;
extern int fn_82E2E920();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E59440();
extern int fn_82E5A018();
extern int fn_82E5A4E0();
extern int fn_82E5B290();
extern int fn_82E764B0();
extern int fn_82E772F0();
extern int fn_82E77398();
extern int fn_82E783C0();
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_74;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82E78738(__int64 param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned short uVar7;
  unsigned short auStack_80 [2];
  int *piStack_7c;
  int *piStack_78;
  unsigned int uStack_74;
  int *piStack_70;
  unsigned int auStack_6c [3];
  unsigned char auStack_60 [4];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned short auStack_50 [40];
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    piStack_70 = (int *)0x0;
    piStack_78 = (int *)0x0;
    piStack_7c = (int *)0x0;
    uVar5 = 0;
    uVar2 = fn_82E59440(param_2,0xffffffff820ed018,0xffffffff82154c58,&piStack_70);
    piVar4 = piStack_7c;
    if ((-1 < (__int64)uVar2) &&
       (uVar2 = (**(int (***)())*piStack_70)(piStack_70,0xffffffff82154c18,&piStack_78),
       piVar4 = piStack_7c, -1 < (__int64)uVar2)) {
      uStack_74 = 0;
      uVar2 = (**(int (***)())(*piStack_78 + 0xc))(piStack_78,0xffffffff820f8f08,&uStack_74);
      piVar4 = piStack_7c;
      if (-1 < (__int64)uVar2) {
        fn_82E783C0(param_1 + 0x18,uStack_74);
        uVar2 = 0;
        uVar6 = 0;
        piVar4 = piStack_7c;
        if (uStack_74 != 0) {
          do {
            uVar5 = 0;
            uVar2 = (**(int (***)())(*piStack_78 + 0x10))
                              (piStack_78,0xffffffff820f8f08,uVar6,&piStack_7c);
            piVar1 = piStack_7c;
            piVar4 = piStack_7c;
            if ((__int64)uVar2 < 0) break;
            if (piStack_7c == (int *)0x0) {
              uVar2 = 0xffffffff8000ffff;
              piVar4 = (int *)0x0;
              break;
            }
            auStack_80[1] = 0;
            uVar2 = fn_82E5A018(piStack_7c,auStack_80 + 1);
            auStack_6c[0] = (unsigned int)uVar2;
            piVar4 = piStack_7c;
            if ((__int64)uVar2 < 0) break;
            auStack_80[0] = 0;
            fn_82E5A4E0(piVar1,auStack_80);
            uVar5 = fn_82E50BE8(8,0,0,0,0);
            if ((uVar5 & 0xffffffff) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = fn_82E772F0(uVar5,auStack_80[0],auStack_6c);
              uVar2 = (unsigned __int64)auStack_6c[0];
            }
            auStack_6c[0] = (unsigned int)uVar5;
            piVar4 = piStack_7c;
            if ((int)uVar2 < 0) break;
            if ((uVar5 & 0xffffffff) == 0) {
              uVar2 = 0xffffffff8007000e;
              break;
            }
            uVar7 = 0;
            if (auStack_80[0] != 0) {
              do {
                uStack_5c = 0;
                uStack_58 = 0;
                uStack_54 = 0;
                auStack_50[0] = 0;
                uVar2 = fn_82E5B290(piVar1,uVar7,auStack_60,auStack_50,0,0);
                piVar4 = piStack_7c;
                if (((__int64)uVar2 < 0) ||
                   (uVar2 = fn_82E764B0(uVar5,uVar7,auStack_60), piVar4 = piStack_7c,
                   (__int64)uVar2 < 0)) goto LAB_82e789a4;
                uVar7 = uVar7 + 1;
              } while (uVar7 < auStack_80[0]);
            }
            iVar3 = fn_82E2E920(param_1 + 8,auStack_80 + 1,auStack_6c);
            if (iVar3 == 0) {
              uVar2 = 0xffffffff8007000e;
              piVar4 = piStack_7c;
              break;
            }
            if (piStack_7c != (int *)0x0) {
              (**(int (***)())(*piStack_7c + 8))();
              piStack_7c = (int *)0x0;
            }
            uVar6 = uVar6 + 1;
            uVar5 = 0;
            piVar4 = piStack_7c;
          } while ((uVar6 & 0xffffffff) < (unsigned __int64)uStack_74);
        }
      }
    }
LAB_82e789a4:
    if (piStack_70 != (int *)0x0) {
      (**(int (***)())(*piStack_70 + 8))(piStack_70);
      piStack_70 = (int *)0x0;
      piVar4 = piStack_7c;
    }
    if (piStack_78 != (int *)0x0) {
      (**(int (***)())(*piStack_78 + 8))(piStack_78);
      piStack_78 = (int *)0x0;
      piVar4 = piStack_7c;
    }
    if (piVar4 != (int *)0x0) {
      (**(int (***)())(*piVar4 + 8))();
      piStack_7c = (int *)0x0;
    }
    if ((uVar5 & 0xffffffff) != 0) {
      fn_82E77398(uVar5);
      fn_82E4FE40(uVar5);
    }
  }
  return uVar2;
}

