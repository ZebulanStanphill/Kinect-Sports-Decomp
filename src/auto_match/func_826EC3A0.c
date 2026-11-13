#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_50 ((*(unsigned __int64*)&uStack_50))
extern int fn_826EBDE8();
extern int fn_826EBE48();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_826EC3A0(double param_1,int *param_2,int param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  
  uVar3 = param_2[2];
  piVar1 = (int *)(*(int *)(((unsigned int)((param_4 & 0xffffffff) >> 4) & 0xffffffc) +
                           *(int *)(param_3 + 0x24)) + ((unsigned int)param_4 & 0x3f) * 0x18);
  if ((unsigned __int64)uVar3 == 0) {
    *param_2 = piVar1[5];
  }
  uVar7 = (unsigned __int64)(unsigned int)piVar1[1];
  piVar8 = param_2 + 1;
  lVar6 = ((unsigned __int64)(unsigned int)piVar1[1] & 0x7fffffff) * 2;
  fn_826EBDE8(piVar8,lVar6 + (unsigned __int64)uVar3);
  iVar5 = 0;
  if (uVar7 != 0) {
    iVar4 = uVar3 << 1;
    do {
      uStack_4c = ((((unsigned __int64)(uStack_4c)) & (~(((unsigned __int64)0xFFFF) << 16))) | ((((unsigned __int64)((unsigned short)
           (int)((double)*(float *)(*(int *)(((unsigned int)(piVar1[2] + iVar5) >> 6 & 0x3fffffc) +
                                            *(int *)(*piVar1 + 0x14)) +
                                   ((piVar1[2] + iVar5) * 8 & 0x7f8U)) * param_1))) & ((unsigned __int64)0xFFFF)) << 16));
      *(unsigned short *)(iVar4 + *piVar8) = (((unsigned __int64)(uStack_4c) >> 16) & 0xFFFF);
      uVar3 = piVar1[2] + iVar5;
      iVar5 = iVar5 + 1;
      iVar2 = iVar4 + *piVar8;
      iVar4 = iVar4 + 4;
      uStack_4c = (int)((double)*(float *)(*(int *)((uVar3 >> 6 & 0x3fffffc) +
                                                   *(int *)(*piVar1 + 0x14)) + (uVar3 * 8 & 0x7f8) +
                                          4) * param_1);
      *(unsigned short *)(iVar2 + 2) = (((unsigned __int64)(uStack_4c) >> 16) & 0xFFFF);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  _uStack_50 = CONCAT44((int)lVar6,uStack_4c);
  fn_826EBE48(param_2 + 6,&uStack_50);
  return;
}

