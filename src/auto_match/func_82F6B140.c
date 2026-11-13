#define true 1
extern unsigned int *auStack_50;
extern int _invalid_parameter_noinfo();
extern int _errno();
extern int fn_82F704C8();
extern int fn_82F81918();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8216AA90;
extern unsigned int lbl_831BBCA8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82F6B140(unsigned char *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned char *pbVar5;
  double dVar6;
  unsigned char auStack_50 [16];
  
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = param_1;
  }
  puVar4 = lbl_831BBCA8;
  pbVar5 = param_1;
  if (param_1 == (unsigned char *)0x0) {
    puVar1 = (unsigned int *)_errno();
    *puVar1 = 0x16;
    _invalid_parameter_noinfo();
    dVar6 = lbl_82005710;
  }
  else {
    while( true ) {
      if (*(int *)(puVar4 + 0xac) < 2) {
        uVar2 = *(unsigned short *)((unsigned int)*pbVar5 * 2 + *(int *)(puVar4 + 200)) & 8;
      }
      else {
        uVar2 = fn_82F704C8(*pbVar5,8,0xffffffff831bbca8);
        puVar4 = lbl_831BBCA8;
      }
      if (uVar2 == 0) break;
      pbVar5 = pbVar5 + 1;
    }
    puVar3 = (unsigned int *)fn_82F81918(auStack_50,pbVar5,0xffffffff831bbca8);
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = pbVar5 + puVar3[1];
    }
    dVar6 = lbl_82005710;
    uVar2 = *puVar3;
    if ((uVar2 & 0x240) == 0) {
      if ((uVar2 & 0x81) == 0) {
        if (((uVar2 & 0x100) == 0) || (*(double *)(puVar3 + 4) != lbl_82005710)) {
          return *(double *)(puVar3 + 4);
        }
      }
      else {
        dVar6 = lbl_8216AA90;
        if (*pbVar5 == 0x2d) {
          dVar6 = -lbl_8216AA90;
        }
      }
      puVar1 = (unsigned int *)_errno();
      *puVar1 = 0x22;
    }
    else if (param_2 != (unsigned int *)0x0) {
      *param_2 = param_1;
    }
  }
  return dVar6;
}

