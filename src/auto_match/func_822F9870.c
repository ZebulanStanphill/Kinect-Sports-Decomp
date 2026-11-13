extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_822F9BD8();
extern int fn_822F9F88();
extern int fn_822FA048();
extern int fn_822FA108();
extern int fn_822FA1C8();
extern int fn_822FA288();
extern int fn_822FA348();
extern int fn_822FA420();
extern int fn_8265C9E0();
extern int iRam831ccac4;
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;


void fn_822F9870(unsigned __int64 param_1,int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  int *piVar6;
  unsigned __int64 uVar4;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_58 [4];
  int iStack_54;
  unsigned char auStack_50 [4];
  int iStack_4c;
  unsigned char auStack_48 [4];
  int iStack_44;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  uVar1 = *(unsigned int *)(*param_2 + 0x54);
  if (((uVar1 != 0) && (3 < uVar1)) && ((uVar1 < 6 || ((0x10 < uVar1 && (uVar1 == 0x11)))))) {
    iVar5 = param_2[5];
    if ((iRam831ccac4 == 0) && (*(int *)(*param_2 + 0x178) != 1)) {
      iVar5 = fn_822F9BD8(param_1,param_2);
    }
    if (iVar5 != param_2[5]) {
      param_2[5] = iVar5;
      if (iVar5 == 0) {
        piVar6 = (int *)fn_822FA048(auStack_38,*param_2,param_2[1],param_2[2],param_2 + 3);
        iVar5 = piVar6[1];
        iVar2 = *piVar6;
        *piVar6 = 0;
        piVar6[1] = 0;
        iVar3 = param_2[7];
        param_2[7] = iVar5;
        param_2[6] = iVar2;
        if (iVar3 != 0) {
          fn_822315A0();
        }
      }
      else if (iVar5 == 1) {
        piVar6 = (int *)fn_822FA108(auStack_40,*param_2,param_2[1],param_2[2],param_2 + 3);
        iVar5 = piVar6[1];
        iVar2 = *piVar6;
        *piVar6 = 0;
        piVar6[1] = 0;
        iVar3 = param_2[7];
        param_2[7] = iVar5;
        param_2[6] = iVar2;
        iStack_34 = iStack_3c;
        if (iVar3 != 0) {
          fn_822315A0();
          iStack_34 = iStack_3c;
        }
      }
      else if (iVar5 == 3) {
        piVar6 = (int *)fn_822FA1C8(auStack_48,*param_2,param_2[1],param_2[2],param_2 + 3);
        iVar5 = piVar6[1];
        iVar2 = *piVar6;
        *piVar6 = 0;
        piVar6[1] = 0;
        iVar3 = param_2[7];
        param_2[7] = iVar5;
        param_2[6] = iVar2;
        iStack_34 = iStack_44;
        if (iVar3 != 0) {
          fn_822315A0();
          iStack_34 = iStack_44;
        }
      }
      else if (iVar5 == 4) {
        piVar6 = (int *)fn_822FA288(auStack_50,*param_2,param_2[1],param_2[2],param_2 + 3);
        iVar5 = piVar6[1];
        iVar2 = *piVar6;
        piVar6[1] = 0;
        *piVar6 = 0;
        iVar3 = param_2[7];
        param_2[7] = iVar5;
        param_2[6] = iVar2;
        iStack_34 = iStack_4c;
        if (iVar3 != 0) {
          fn_822315A0();
          iStack_34 = iStack_4c;
        }
      }
      else if (iVar5 == 5) {
        iVar5 = param_2[2];
        iVar2 = param_2[1];
        iVar3 = *param_2;
        uVar4 = fn_8265C9E0(0x2c);
        if ((uVar4 & 0xffffffff) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = fn_822FA420(uVar4,iVar3,iVar2,iVar5,param_2 + 3);
        }
        iStack_34 = param_2[7];
        param_2[7] = iVar5;
        param_2[6] = iVar5 + 0xc;
      }
      else if (iVar5 == 6) {
        piVar6 = (int *)fn_822FA348(auStack_58,*param_2,param_2[1],param_2[2],param_2 + 3);
        iVar5 = piVar6[1];
        iVar2 = *piVar6;
        *piVar6 = 0;
        piVar6[1] = 0;
        iVar3 = param_2[7];
        param_2[7] = iVar5;
        param_2[6] = iVar2;
        iStack_34 = iStack_54;
        if (iVar3 != 0) {
          fn_822315A0();
          iStack_34 = iStack_54;
        }
      }
      else {
        piVar6 = (int *)fn_822F9F88(auStack_60);
        iVar5 = piVar6[1];
        iVar2 = *piVar6;
        *piVar6 = 0;
        piVar6[1] = 0;
        iVar3 = param_2[7];
        param_2[7] = iVar5;
        param_2[6] = iVar2;
        iStack_34 = iStack_5c;
        if (iVar3 != 0) {
          fn_822315A0();
          iStack_34 = iStack_5c;
        }
      }
      if (iStack_34 != 0) {
        fn_822315A0();
      }
    }
    (**(int (***)())(*(int *)param_2[6] + 8))(param_1);
  }
  return;
}

