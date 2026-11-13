extern int fn_82888720();
extern int fn_828887B0();
extern int fn_82888C30();
extern int fn_82889350();


unsigned int * fn_82889518(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int *piVar4;
  unsigned int *puVar5;
  int * apiStack_50;
  
  if (*(int *)(param_2 + 8) == 0) {
    fn_82888C30(param_1,param_2,1,*(unsigned int *)(param_2 + 4),param_4);
    return param_1;
  }
  piVar4 = *(int **)(param_2 + 4);
  if (param_3 == (int *)*piVar4) {
    if (*(unsigned short *)(param_4 + 0x10) < *(unsigned short *)(param_3 + 4)) {
      fn_82888C30(param_1,param_2,1,param_3,param_4);
      return param_1;
    }
  }
  else {
    if (param_3 != piVar4) {
      uVar2 = *(unsigned short *)(param_3 + 4);
      uVar3 = *(unsigned short *)(param_4 + 0x10);
      if ((uVar3 < uVar2) &&
         (apiStack_50 = param_3, fn_828887B0(&apiStack_50),
         *(unsigned short *)(apiStack_50 + 4) < uVar3)) {
        cVar1 = *(char *)(apiStack_50[2] + 0x61);
        piVar4 = param_3;
        param_3 = apiStack_50;
      }
      else {
        if ((uVar3 <= uVar2) ||
           ((apiStack_50 = param_3, fn_82888720(&apiStack_50), apiStack_50 != piVar4 &&
            (*(unsigned short *)(apiStack_50 + 4) <= uVar3)))) goto LAB_8288969c;
        cVar1 = *(char *)(param_3[2] + 0x61);
        piVar4 = apiStack_50;
      }
      if (cVar1 == '\0') {
        fn_82888C30(param_1,param_2,1,piVar4,param_4);
        return param_1;
      }
      fn_82888C30(param_1,param_2,0,param_3,param_4);
      return param_1;
    }
    if (*(unsigned short *)(piVar4[2] + 0x10) < *(unsigned short *)(param_4 + 0x10)) {
      fn_82888C30(param_1,param_2,0,piVar4[2],param_4);
      return param_1;
    }
  }
LAB_8288969c:
  puVar5 = (unsigned int *)fn_82889350(&apiStack_50,param_2,param_4,0);
  *param_1 = *puVar5;
  return param_1;
}

