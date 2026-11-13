#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82535298();
extern int fn_82536070();
extern int fn_82536288();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82195598;
extern unsigned int lbl_831DB254;


void fn_82359420(double param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  unsigned int uVar4;
  __int64 alStack_30;
  
  if (*(int *)(param_2 + 0xbc) != 0) {
    fVar3 = (float)((double)*(float *)(param_2 + 0xc4) - param_1);
    *(float *)(param_2 + 0xc4) = fVar3;
    iVar1 = (int)(float)(__int64)
                        ((double)(*(float *)(param_2 + 200) - lbl_8218E8E8) - lbl_82195598);
    iVar2 = (int)(float)(__int64)((double)(fVar3 - lbl_8218E8E8) - lbl_82195598);
    alStack_30 = (__int64)iVar2;
    if (iVar2 < 0) {
      if (((iVar2 < iVar1) && (iVar2 != *(int *)(param_2 + 0xc0))) &&
         (*(int *)(param_2 + 0xc0) = iVar2, iVar2 == -1)) {
        *(unsigned int *)(param_2 + 0x108) = 1;
      }
    }
    else if (((iVar2 < 10) && (iVar2 < iVar1)) && (iVar2 != *(int *)(param_2 + 0xc0))) {
      *(int *)(param_2 + 0xc0) = iVar2;
      fn_82536070(0xffffffff821b24b8,(&lbl_831DB254)[iVar2]);
      alStack_30 = CONCAT44(*param_5,((unsigned int)(alStack_30)));
      uVar4 = fn_82535298(&alStack_30,*param_3,0xffffffff83296bc0,0xffffffff83296bd0);
      alStack_30 = CONCAT44(uVar4,((unsigned int)(alStack_30)));
      fn_82536288(&alStack_30);
    }
    *(unsigned int *)(param_2 + 200) = *(unsigned int *)(param_2 + 0xc4);
  }
  return;
}

