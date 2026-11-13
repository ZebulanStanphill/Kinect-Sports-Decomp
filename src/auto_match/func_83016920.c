#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8302A5B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_83016920(unsigned __int64 param_1,double param_2,double param_3)

{
  __int64 lVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 in_r7;
  unsigned int uVar4;
  double dVar5;
  double extraout_f1;
  double dVar6;
  double dVar7;
  
  uVar4 = (unsigned int)in_r7;
  uVar3 = (unsigned int)((unsigned __int64)in_r7 >> 0x20);
  iVar2 = fn_82F6A548();
  dVar5 = (double)lbl_821AAD20;
  if (uVar4 < 9) {
    lVar1 = CONCAT44(uVar3,uVar4);
    if (uVar4 == 0) {
      dVar6 = (double)lbl_82002AE0;
      dVar5 = (double)fn_8302A5B8((double)(float)(dVar6 - extraout_f1),
                                   *(unsigned int *)(iVar2 + 0x10));
      dVar5 = (double)(float)(dVar6 - dVar5);
    }
    else if (lVar1 == 1) {
      dVar6 = (double)lbl_82002AE0;
      dVar5 = (double)fn_8302A5B8((double)(float)(dVar6 - extraout_f1),*(unsigned int *)(iVar2 + 0xc)
                                  );
      dVar5 = (double)(float)(dVar6 - dVar5);
    }
    else if (lVar1 == 2) {
      dVar6 = (double)lbl_82002AE0;
      dVar5 = (double)fn_8302A5B8((double)(float)(dVar6 - extraout_f1),*(unsigned int *)(iVar2 + 8));
      dVar5 = (double)(float)(dVar6 - dVar5);
    }
    else if (lVar1 == 3) {
      dVar5 = (double)lbl_82002C5C;
      if (dVar5 <= extraout_f1) {
        dVar6 = (double)fn_8302A5B8((double)(float)((double)(float)(extraout_f1 - dVar5) *
                                                    (double)lbl_82005344),
                                     *(unsigned int *)(iVar2 + 0xc));
        dVar5 = (double)(float)(dVar6 * dVar5 + dVar5);
      }
      else {
        dVar7 = (double)lbl_82002AE0;
        dVar6 = (double)fn_8302A5B8(-(double)(float)(extraout_f1 * (double)lbl_82005344 - dVar7),
                                     *(unsigned int *)(iVar2 + 0xc));
        dVar5 = (double)(float)((double)(float)(dVar7 - dVar6) * dVar5);
      }
    }
    else {
      dVar5 = extraout_f1;
      if (lVar1 != 4) {
        if (lVar1 == 5) {
          dVar5 = (double)lbl_82002C5C;
          if (dVar5 <= extraout_f1) {
            dVar7 = (double)lbl_82002AE0;
            dVar6 = (double)fn_8302A5B8(-(double)(float)((double)(float)(extraout_f1 - dVar5) *
                                                          (double)lbl_82005344 - dVar7),
                                         *(unsigned int *)(iVar2 + 0xc));
            dVar5 = (double)(float)((double)(float)(dVar7 - dVar6) * dVar5 + dVar5);
          }
          else {
            dVar6 = (double)fn_8302A5B8((double)(float)(extraout_f1 * (double)lbl_82005344),
                                         *(unsigned int *)(iVar2 + 0xc));
            dVar5 = (double)(float)(dVar6 * dVar5);
          }
        }
        else if (lVar1 == 6) {
          dVar5 = (double)fn_8302A5B8(*(unsigned int *)(iVar2 + 8));
        }
        else if (lVar1 == 7) {
          dVar5 = (double)fn_8302A5B8(*(unsigned int *)(iVar2 + 0xc));
        }
        else {
          dVar5 = (double)fn_8302A5B8(*(unsigned int *)(iVar2 + 0x10));
        }
      }
    }
  }
  fn_82F6A594((double)(float)((double)(float)(param_3 - param_2) * dVar5 + param_2));
  return;
}

