typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_8269A240();
extern float lbl_8200571C;


unsigned __int64
fn_826F9DF8(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned int param_6)

{
  int *piVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  struct { float first; float second; } stack_pair_90;

  float fStack_88;
  float fStack_84;
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [48];
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_3 + 0x60);
  if (uVar6 != 0) {
    iVar5 = *(unsigned int *)(param_3 + 0x60) << 3;
    dVar8 = (double)((float)((double)*(float *)(param_3 + 0xb0) * param_1 +
                            (double)*(float *)(param_3 + 0xb8)) * lbl_8200571C);
    dVar7 = (double)((float)((double)*(float *)(param_3 + 0xb4) * param_2 +
                            (double)*(float *)(param_3 + 0xbc)) * lbl_8200571C);
    do {
      piVar1 = *(int **)(*(int *)(param_3 + 0x5c) + iVar5 + -4);
      fn_8268CC00(auStack_60);
      (**(int (***)())(*piVar1 + 0x28))(&stack_pair_90.first,piVar1,auStack_60);
      fStack_98 = (float)dVar8;
      fStack_94 = (float)dVar7;
      fn_8268CC00(auStack_80);
      fn_8269A240(piVar1,auStack_80);
      fn_8268D008(auStack_80,&fStack_a0,&fStack_98);
      if ((((fStack_88 < fStack_a0) || (fStack_a0 < stack_pair_90.first)) || (fStack_84 < fStack_9c)) ||
         (bVar2 = true, fStack_9c < stack_pair_90.second)) {
        bVar2 = false;
      }
      if (bVar2) {
        if (param_6 == 0) {
          uVar4 = 0;
LAB_826f9f44:
          uVar3 = (**(int (***)())(*piVar1 + 0x30))(piVar1,&fStack_a0,uVar4);
          uVar3 = uVar3 & 0xff;
        }
        else {
          if (param_6 == 1) {
            uVar4 = 1;
            goto LAB_826f9f44;
          }
          if (2 < param_6) {
            if (param_6 != 3) goto LAB_826f9f64;
            uVar4 = 3;
            goto LAB_826f9f44;
          }
          uVar3 = (**(int (***)())(*piVar1 + 0x34))(piVar1,&fStack_a0,0,0);
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
LAB_826f9f64:
      uVar6 = uVar6 - 1;
      iVar5 = iVar5 + -8;
    } while (uVar6 != 0);
  }
  return 0;
}

