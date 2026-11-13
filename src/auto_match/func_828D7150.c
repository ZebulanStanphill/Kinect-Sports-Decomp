extern unsigned int *auStack_40;
extern int fn_828D4E10();
extern int fn_828D6BD0();
extern int fn_828D6CB8();
extern int fn_828D6F48();
extern int fn_828E1FD8();
extern unsigned int iStack_48;
extern unsigned int iStack_58;
extern unsigned int iStack_68;
extern unsigned int uStack_4c;
extern unsigned int uStack_5c;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_828D7150(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  int iStack_68;
  int *piStack_60;
  unsigned int uStack_5c;
  int iStack_58;
  int *piStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  unsigned char auStack_40 [64];
  
  uVar1 = param_1[4];
  uVar6 = *(int *)(param_2 + 8) - param_1[3];
  if (*(int *)(param_3 + 8) != *(int *)(param_4 + 8)) {
    if (uVar1 >> 1 < uVar6) {
      do {
        uVar2 = fn_828D4E10(param_3);
        fn_828E1FD8(param_1,uVar2);
        iVar4 = *(int *)(param_3 + 8) + 1;
        *(int *)(param_3 + 8) = iVar4;
      } while (iVar4 != *(int *)(param_4 + 8));
      piStack_50 = (int *)*param_1;
      iStack_68 = param_1[3];
      uStack_4c = 0;
      piVar5 = (int *)0x0;
      iStack_48 = iStack_68 + param_1[4];
      if ((piStack_50 != (int *)0x0) && ((unsigned int *)*piStack_50 != (unsigned int *)0x0)) {
        piVar5 = *(int **)*piStack_50;
      }
      iStack_58 = iStack_68 + uVar1;
      piStack_60 = (int *)0x0;
      uStack_5c = 0;
      if ((piVar5 != (int *)0x0) && ((unsigned int *)*piVar5 != (unsigned int *)0x0)) {
        piStack_60 = *(int **)*piVar5;
      }
      piVar5 = (int *)0x0;
      if ((piStack_50 != (int *)0x0) && ((unsigned int *)*piStack_50 != (unsigned int *)0x0)) {
        piVar5 = *(int **)*piStack_50;
      }
      iStack_68 = iStack_68 + uVar6;
      uStack_70 = 0;
      uStack_6c = 0;
      if ((piVar5 != (int *)0x0) && ((unsigned int *)*piVar5 != (unsigned int *)0x0)) {
        uStack_70 = *(unsigned int *)*piVar5;
      }
      fn_828D6F48(auStack_40,&uStack_70,&piStack_60,&piStack_50);
    }
    else {
      do {
        uVar2 = fn_828D4E10(param_3);
        fn_828D6BD0(param_1,uVar2);
        iVar4 = *(int *)(param_3 + 8) + 1;
        *(int *)(param_3 + 8) = iVar4;
      } while (iVar4 != *(int *)(param_4 + 8));
      piStack_60 = (int *)*param_1;
      iStack_58 = param_1[3];
      piVar5 = (int *)0x0;
      iVar4 = param_1[4] - uVar1;
      if ((piStack_60 != (int *)0x0) && ((unsigned int *)*piStack_60 != (unsigned int *)0x0)) {
        piVar5 = *(int **)*piStack_60;
      }
      iStack_68 = iStack_58 + iVar4;
      uStack_70 = 0;
      uStack_6c = 0;
      if ((piVar5 != (int *)0x0) && ((unsigned int *)*piVar5 != (unsigned int *)0x0)) {
        uStack_70 = *(unsigned int *)*piVar5;
      }
      uStack_5c = 0;
      fn_828D6CB8(&piStack_60,&uStack_70);
      piStack_50 = (int *)*param_1;
      iStack_48 = param_1[3];
      piVar5 = (int *)0x0;
      if ((piStack_50 != (int *)0x0) && ((unsigned int *)*piStack_50 != (unsigned int *)0x0)) {
        piVar5 = *(int **)*piStack_50;
      }
      piVar3 = (int *)0x0;
      if ((piVar5 != (int *)0x0) && ((unsigned int *)*piVar5 != (unsigned int *)0x0)) {
        piVar3 = *(int **)*piVar5;
      }
      piVar5 = (int *)0x0;
      if ((piVar3 != (int *)0x0) && ((unsigned int *)*piVar3 != (unsigned int *)0x0)) {
        piVar5 = *(int **)*piVar3;
      }
      iStack_68 = iStack_48 + iVar4 + uVar6;
      uStack_70 = 0;
      uStack_6c = 0;
      if ((piVar5 != (int *)0x0) && ((unsigned int *)*piVar5 != (unsigned int *)0x0)) {
        uStack_70 = *(unsigned int *)*piVar5;
      }
      piVar5 = (int *)0x0;
      if ((piStack_50 != (int *)0x0) && ((unsigned int *)*piStack_50 != (unsigned int *)0x0)) {
        piVar5 = *(int **)*piStack_50;
      }
      iStack_58 = iStack_48 + iVar4;
      piStack_60 = (int *)0x0;
      uStack_5c = 0;
      if ((piVar5 != (int *)0x0) && ((unsigned int *)*piVar5 != (unsigned int *)0x0)) {
        piStack_60 = *(int **)*piVar5;
      }
      uStack_4c = 0;
      fn_828D6F48(auStack_40,&piStack_50,&piStack_60,&uStack_70);
    }
  }
  return;
}

