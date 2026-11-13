typedef unsigned char bool;
#define true 1
#define false 0
#define NAN(x) ((x) != (x))
extern int fn_82460610();
extern int fn_824651F0();
extern int fn_82469038();
extern int fn_82469958();
extern int fn_82469EB0();
extern int fn_8246EC90();
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195994;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C6B80;
extern unsigned int lbl_831C6C54;


void fn_8246FFB0(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar4;
  unsigned __int64 uVar3;
  double dVar5;
  double dVar6;
  
  dVar6 = (double)lbl_82195994;
  dVar5 = (double)lbl_82193AF0;
  if (((((double)*(float *)(param_1 + 0x24) < dVar6) || (dVar5 < (double)*(float *)(param_1 + 0x24))
       ) || ((double)*(float *)(param_1 + 0x4c) < dVar6)) ||
     (bVar2 = false, dVar5 < (double)*(float *)(param_1 + 0x4c))) {
    bVar2 = true;
  }
  if ((*(int *)(param_1 + 0x70) == 0) && (bVar2)) {
    fn_82469958(*(unsigned int *)(param_1 + 0x3fc),1);
    fn_8246EC90(param_1,param_1 + 0x33c,1,1,0xffffffff821bc690,0xffffffff821bc674);
    if ((((double)*(float *)(param_1 + 0x20) < dVar6) ||
        (dVar5 < (double)*(float *)(param_1 + 0x20))) ||
       (((double)*(float *)(param_1 + 0x48) < dVar6 || (dVar5 < (double)*(float *)(param_1 + 0x48)))
       )) {
      iVar4 = param_1 + 0x100;
      if (lbl_831C6B80 == 0) {
        iVar4 = param_1 + 0x104;
      }
    }
    else {
      iVar4 = param_1 + 0x108;
    }
    fn_824651F0(*(unsigned int *)(param_1 + 0x440),iVar4);
    fVar1 = (float)((double)*(float *)(param_1 + 0x24) - (double)*(float *)(param_1 + 0x4c));
    dVar5 = (double)*(float *)(param_1 + 0x24);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar5 = (double)*(float *)(param_1 + 0x4c);
    }
    fn_82469EB0(dVar5,*(unsigned int *)(param_1 + 0x310));
    *(unsigned int *)(param_1 + 0x10) = 4;
    *(unsigned int *)(param_1 + 0x18) = lbl_831C6C54;
    fn_82469038(*(unsigned int *)(param_1 + 0x418),3);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
    if (*(int *)(iVar4 + 0x54) == 6) {
      uVar3 = 9;
      if (*(int *)(iVar4 + 0x2c) == 0) {
        uVar3 = 4;
      }
      fn_82460610(iVar4,uVar3);
    }
  }
  return;
}

