typedef unsigned char bool;
#define false 0
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_822775F8();
extern int fn_8227D498();
extern int fn_8227D6A8();
extern int fn_82672C20();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_822773C8(unsigned int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  bool bVar5;
  bool bVar6;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned char uStack_58;
  
  bVar6 = false;
  uVar3 = fn_8227D498();
  lVar4 = fn_8227D6A8(uVar3,param_2,*param_1,1);
  bVar5 = lVar4 != 0;
  if (bVar5) {
    fVar1 = (float)(__int64)lbl_8326B430 * lbl_821917D4;
    fVar2 = (float)(__int64)lbl_8326B434 * lbl_821917D4;
    if ((((*param_2 + (float)param_1[0xb] < -fVar1) ||
         ((float)(__int64)lbl_8326B430 + fVar1 <= *param_2 + (float)param_1[0xb])) ||
        ((float)param_1[0xc] + param_2[1] < -fVar2)) ||
       ((float)(__int64)lbl_8326B434 + fVar2 <= (float)param_1[0xc] + param_2[1])) {
      bVar5 = false;
    }
  }
  if (!bVar5) {
    lVar4 = fn_8227D6A8(uVar3,param_2,*param_1,0);
    bVar6 = lVar4 != 0;
    if (bVar6) {
      fVar1 = (float)(__int64)lbl_8326B430 * lbl_821917D4;
      fVar2 = (float)(__int64)lbl_8326B434 * lbl_821917D4;
      if (((*param_2 + (float)param_1[0xb] < -fVar1) ||
          ((float)(__int64)lbl_8326B430 + fVar1 <= *param_2 + (float)param_1[0xb])) ||
         (((float)param_1[0xc] + param_2[1] < -fVar2 ||
          ((float)(__int64)lbl_8326B434 + fVar2 <= (float)param_1[0xc] + param_2[1])))) {
        bVar6 = false;
      }
    }
  }
  if ((lbl_83265A58 == 1) || (lbl_83265A5C != 0)) {
    bVar5 = false;
    bVar6 = false;
  }
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  fn_82273CD8(&stack_pair_60.first,2);
  uStack_58 = !bVar6;
  fn_82672C20(param_1[1],0xffffffff821a8140,&stack_pair_60.first,1);
  if (!bVar6) {
    uVar3 = 0;
    if (!bVar5) goto LAB_822775bc;
  }
  uVar3 = 1;
LAB_822775bc:
  fn_822775F8(param_1,uVar3,param_2);
  if ((bVar6) || (uVar3 = 0, bVar5)) {
    uVar3 = 1;
  }
  fn_82273C88(&stack_pair_60.first);
  return uVar3;
}

