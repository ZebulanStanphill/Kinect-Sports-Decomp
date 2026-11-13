typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_82230110();
extern int fn_823AA2A8();
extern int fn_82610EF0();
extern int fn_8265CA20();
extern int fn_828A0B28();
extern int fn_828AC488();
extern int fn_828AC838();
extern int fn_828ACC40();
extern int fn_828ACDB8();
extern int fn_828AD840();
extern int fn_828ADBE0();
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


__int64 fn_828AD270(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  __int64 lVar5;
  unsigned char in_stack_00000057;
  unsigned char in_stack_0000005f;
  unsigned char in_stack_00000067;
  unsigned int in_stack_0000007c;
  unsigned int in_stack_00000084;
  unsigned char auStack_c0 [4];
  char cStack_bc;
  unsigned int auStack_a0 [4];
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int auStack_80 [4];
  unsigned int uStack_70;
  unsigned int uStack_6c;
  
  fn_828AC838(auStack_c0,in_stack_0000007c,in_stack_00000084);
  *(unsigned char *)(param_1 + 0x9c) = in_stack_0000005f;
  if ((*(int *)(param_1 + 0xa0) != 2) || (bVar3 = true, *(int *)(param_1 + 0x8c) == 0)) {
    bVar3 = false;
  }
  if (bVar3) {
    cVar4 = fn_828A0B28(param_1);
    bVar3 = true;
    if (cVar4 != '\x01') goto LAB_828ad2fc;
  }
  else {
LAB_828ad2fc:
    bVar3 = false;
  }
  if (bVar3) {
    cVar4 = fn_828ACC40(param_1);
    bVar3 = true;
    if (cVar4 != '\0') goto LAB_828ad328;
  }
  bVar3 = false;
LAB_828ad328:
  if ((!bVar3) || (lVar5 = 1, cStack_bc != '\x01')) {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    fn_82230110(auStack_a0,0xffffffff820245b8);
    fn_828AD840(auStack_80,param_1,auStack_a0);
    if (0xf < uStack_8c) {
      fn_8265CA20(auStack_a0[0]);
    }
    uStack_90 = 0;
    uStack_8c = 0xf;
    auStack_a0[0] = auStack_a0[0] & 0xffffff;
    if (0xf < uStack_6c) {
      fn_8265CA20(auStack_80[0]);
    }
    uStack_6c = 0xf;
    uStack_70 = 0;
    auStack_80[0] = auStack_80[0] & 0xffffff;
    fn_828AC488(auStack_c0);
  }
  else {
    fn_828ADBE0(param_1,param_4,param_5,1,param_3,param_3,auStack_c0,0);
    piVar1 = *(int **)(param_1 + 0x8c);
    iVar2 = *piVar1;
    fn_82610EF0(param_1 + 0x60);
    fn_823AA2A8(param_1 + 0x60);
    (**(int (***)())(iVar2 + 8))
              (piVar1,param_2,param_6,param_7,param_8,in_stack_00000057,in_stack_0000005f,
               in_stack_00000067);
    fn_828ACDB8(param_1,1);
    fn_828AC488(auStack_c0);
  }
  return lVar5;
}

