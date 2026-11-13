#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_822315A0();
extern int fn_8229FE70();
extern int fn_8229FF28();
extern int fn_823807F0();
extern int fn_8238D478();
extern int fn_824BD858();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int lbl_831D1C34;


void fn_8238CAC8(int *param_1,int *param_2)

{
  int iVar1;
  int (**pcVar2)();
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  __int64 alStack_30;
  
  iVar1 = param_1[2];
  *(unsigned int *)(*param_2 + 0x174) = 0;
  uVar5 = lbl_831D1C34;
  iVar4 = *param_2;
  *(unsigned int *)(iVar4 + 0xd4) = 1;
  *(unsigned int *)(iVar4 + 0xe0) = uVar5;
  *(unsigned int *)(iVar4 + 0xe4) = uVar5;
  iVar4 = (**(int (***)())(*param_1 + 0x78))();
  if (iVar4 == 0) {
    pcVar2 = *(int (***)())(*param_1 + 0x38);
    piVar3 = *(int **)**(unsigned int **)(iVar1 + 8);
    uVar7 = (unsigned __int64)(unsigned int)(int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20) + 1;
    alStack_30 = (__int64)(int)uVar7;
    *(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20) = (float)alStack_30;
    (*pcVar2)(param_1,uVar7);
    iVar4 = *(int *)(*(int *)(iVar1 + 0xd4) + 0xc);
    if (*(int *)(iVar4 + 0x58) == 0) {
      fn_8229FE70();
    }
    else {
      fn_8229FF28(iVar4,uVar7);
    }
    alStack_30 = CONCAT44(*(unsigned int *)(iVar1 + 0x2f4),((unsigned int)(alStack_30)));
    uVar5 = fn_82535298(&alStack_30,**(unsigned int **)(iVar1 + 0x9b8),0xffffffff83296bc0,
                              0xffffffff83296bd0);
    alStack_30 = CONCAT44(uVar5,((unsigned int)(alStack_30)));
    fn_82536288(&alStack_30);
    uVar6 = (**(int (***)())(*param_1 + 0x80))(param_1);
    if ((uVar6 != 0) &&
       (uVar7 == (__int64)(int)((uVar7 & 0xffffffff) / (unsigned __int64)uVar6) * (__int64)(int)uVar6)) {
      fn_8238D478(param_1);
    }
  }
  fn_824BD858((double)*(float *)(iVar1 + 0x6d4),(double)*(float *)(iVar1 + 0x6d8));
  fn_823807F0(*(unsigned int *)(param_1[2] + 0x664),0x19);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

