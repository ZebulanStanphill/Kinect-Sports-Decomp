typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_8267C498();
extern int fn_8269A590();
extern int fn_8269A5C8();
extern int fn_8269AC18();
extern int fn_8270D8E0();
extern int fn_8270E1B8();
extern int fn_82760648();
extern int fn_82764348();
extern unsigned int lbl_82002AE0;


unsigned __int64 fn_82765FB8(int *param_1,float *param_2,char param_3,int param_4)

{
  bool bVar1;
  float *pfVar3;
  unsigned __int64 uVar2;
  char cVar4;
  unsigned __int64 uVar5;
  double dVar6;
  struct { float first; float second; } stack_pair_d0;

  float fStack_c8;
  float fStack_c4;
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [96];
  
  uVar5 = 0;
  if (((param_4 != 0) && ((*(unsigned char *)(param_4 + 0x66) & 1) != 0)) &&
     (uVar5 = fn_8269AC18((double)lbl_82002AE0,param_4), uVar5 != 0)) {
    fn_8270D8E0(uVar5);
  }
  stack_pair_d0.first = (float)param_1[1];
  stack_pair_d0.second = (float)param_1[2];
  fStack_c8 = (float)param_1[3];
  fStack_c4 = (float)param_1[4];
  if ((*(unsigned char *)(param_1 + 9) & 0x10) == 0) {
    (**(int (***)())(*param_1 + 0x14))(param_1,&stack_pair_d0.first);
  }
  if ((uVar5 & 0xffffffff) != 0) {
    pfVar3 = (float *)fn_8270E1B8(auStack_c0,uVar5,&stack_pair_d0.first);
    fStack_c4 = pfVar3[3];
    fStack_c8 = pfVar3[2];
    stack_pair_d0.second = pfVar3[1];
    stack_pair_d0.first = *pfVar3;
  }
  dVar6 = (double)*param_2;
  if ((((double)fStack_c8 < dVar6) || (dVar6 < (double)stack_pair_d0.first)) ||
     ((fStack_c4 < param_2[1] || (bVar1 = true, param_2[1] < stack_pair_d0.second)))) {
    bVar1 = false;
  }
  if (bVar1) {
    if (param_3 == '\0') {
      if ((uVar5 & 0xffffffff) != 0) {
        fn_8267C498(uVar5);
      }
      uVar2 = 1;
    }
    else if (((param_4 == 0) || ((uVar5 & 0xffffffff) != 0)) ||
            (cVar4 = fn_8269A590(dVar6,(double)param_2[1],param_4), cVar4 == '\0')) {
      fn_82760648(auStack_b0,param_1);
      uVar2 = fn_82764348((double)*param_2,(double)param_2[1],param_1,auStack_b0,uVar5);
      if (param_4 != 0) {
        fn_8269A5C8((double)*param_2,(double)param_2[1],param_4);
      }
      if ((uVar5 & 0xffffffff) != 0) {
        fn_8267C498(uVar5);
      }
    }
    else {
      uVar2 = (unsigned __int64)(*(unsigned char *)(param_4 + 0x66) >> 3) & 1;
    }
  }
  else {
    if ((uVar5 & 0xffffffff) != 0) {
      fn_8267C498(uVar5);
    }
    uVar2 = 0;
  }
  return uVar2;
}

