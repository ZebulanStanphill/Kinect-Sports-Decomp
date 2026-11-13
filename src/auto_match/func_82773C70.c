typedef unsigned char bool;
#define true 1
extern int fn_82F68918();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820143E0;
extern unsigned int lbl_831568D4;


void fn_82773C70(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,int param_7)

{
  int iVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar1 = fn_82F6A548();
  if ((*(char *)(param_7 + 8) == '\0') && (*(char *)(param_7 + 9) == '\0')) {
    uVar2 = (__int64)((double)(param_5 & 0xffffffff) * extraout_f1 + (double)lbl_82002C5C) &
            0xffffffff;
    if ((*(unsigned char *)(param_7 + 7) & 1) == 0) {
      uVar2 = ((uVar2 + 3 & 0xffffffff) >> 2) + uVar2;
      if ((uVar2 & 0xffffffff) < 0x100) {
        uVar2 = (unsigned __int64)
                *(unsigned int *)(&lbl_831568D4 + (unsigned int)*(unsigned char *)((int)uVar2 + iVar1 + 0x7e0) * 4);
      }
      else {
        uVar2 = 0xff;
      }
    }
    dVar6 = (double)uVar2;
    dVar7 = (double)lbl_820143E0;
    dVar4 = (double)fn_82F6B2A8((double)(float)((double)(float)((double)*(float *)(param_4 + 0xc) *
                                                                dVar6) * dVar7));
    dVar5 = (double)(float)dVar4;
    dVar4 = (double)fn_82F68918((double)(float)((double)(float)((double)*(float *)(param_4 + 4) *
                                                                dVar6) * dVar7));
    bVar3 = (float)(((__int64)(dVar5 - (double)(float)dVar4) & 0xffffffffU) + 1 & 0xffffffff) <
            (float)((double)(*(int *)(iVar1 + 0x4c) + (*(unsigned int *)(iVar1 + 0x50) & 0x7fffffff) * -2) *
                   param_2);
  }
  else {
    bVar3 = true;
  }
  fn_82F6A594(bVar3);
  return;
}

