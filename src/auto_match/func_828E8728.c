typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8289DD28();
extern int fn_828E5F60();
extern int fn_828E7D48();
extern int fn_828E8548();


unsigned int * fn_828E8728(unsigned int *param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  bool bVar5;
  unsigned int *puVar6;
  int * apiStack_40;
  
  if (*(int *)(param_2 + 8) == 0) {
    fn_828E7D48(param_1,param_2,1,*(unsigned int *)(param_2 + 4),param_4);
    return param_1;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_3 == (int *)*piVar2) {
    if ((*(unsigned int *)(param_4 + 0xc) < (unsigned int)param_3[3]) ||
       ((*(unsigned int *)(param_4 + 0xc) <= (unsigned int)param_3[3] &&
        (*(unsigned int *)(param_4 + 0x10) < (unsigned int)param_3[4])))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      fn_828E7D48(param_1,param_2,1,param_3,param_4);
      return param_1;
    }
  }
  else {
    if (param_3 == piVar2) {
      iVar3 = piVar2[2];
      if ((*(unsigned int *)(iVar3 + 0xc) < *(unsigned int *)(param_4 + 0xc)) ||
         ((*(unsigned int *)(iVar3 + 0xc) <= *(unsigned int *)(param_4 + 0xc) &&
          (*(unsigned int *)(iVar3 + 0x10) < *(unsigned int *)(param_4 + 0x10))))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        fn_828E7D48(param_1,param_2,0,iVar3,param_4);
        return param_1;
      }
      goto LAB_828e89b8;
    }
    uVar4 = *(unsigned int *)(param_4 + 0xc);
    if ((uVar4 < (unsigned int)param_3[3]) ||
       ((uVar4 <= (unsigned int)param_3[3] && (*(unsigned int *)(param_4 + 0x10) < (unsigned int)param_3[4])))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      apiStack_40 = param_3;
      fn_8289DD28(&apiStack_40);
      if (((unsigned int)apiStack_40[3] < uVar4) ||
         (((unsigned int)apiStack_40[3] <= uVar4 && ((unsigned int)apiStack_40[4] < *(unsigned int *)(param_4 + 0x10))
          ))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        cVar1 = *(char *)(apiStack_40[2] + 0x1d);
        piVar2 = apiStack_40;
        goto joined_r0x828e899c;
      }
    }
    if (((unsigned int)param_3[3] < uVar4) ||
       (((unsigned int)param_3[3] <= uVar4 && ((unsigned int)param_3[4] < *(unsigned int *)(param_4 + 0x10))))) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      apiStack_40 = param_3;
      fn_828E5F60(&apiStack_40);
      if (apiStack_40 != piVar2) {
        if ((uVar4 < (unsigned int)apiStack_40[3]) ||
           ((uVar4 <= (unsigned int)apiStack_40[3] &&
            (*(unsigned int *)(param_4 + 0x10) < (unsigned int)apiStack_40[4])))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) goto LAB_828e89b8;
      }
      cVar1 = *(char *)(param_3[2] + 0x1d);
      piVar2 = param_3;
      param_3 = apiStack_40;
joined_r0x828e899c:
      if (cVar1 == '\0') {
        fn_828E7D48(param_1,param_2,1,param_3,param_4);
        return param_1;
      }
      fn_828E7D48(param_1,param_2,0,piVar2,param_4);
      return param_1;
    }
  }
LAB_828e89b8:
  puVar6 = (unsigned int *)fn_828E8548(&apiStack_40,param_2,param_4,0);
  *param_1 = *puVar6;
  return param_1;
}

