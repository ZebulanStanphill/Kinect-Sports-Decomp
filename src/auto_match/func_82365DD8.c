typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_60;
extern int fn_82230040();
extern int fn_82359C18();
extern int fn_824C5930();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B2D04;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int *
fn_82365DD8(unsigned int *param_1,unsigned int *param_2,unsigned __int64 *param_3,float *param_4,
             float *param_5)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned char **ppuStack_80;
  unsigned int uStack_7c;
  unsigned __int64 uStack_70;
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [16];
  unsigned int *puStack_50;
  
  uVar2 = (((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
  bVar1 = false;
  param_1[1] = 1;
  param_1[2] = 1;
  *param_1 = &lbl_821A8D8C;
  ppuStack_80 = (unsigned char **)0x0;
  if (param_1 + 4 != (unsigned int *)0x0) {
    uStack_70 = *param_3;
    uStack_68 = param_3[1];
    puStack_50 = (unsigned int *)fn_8265C9E0(0x18);
    if (puStack_50 == (unsigned int *)0x0) {
      uStack_7c = 0;
      ppuStack_80 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
      fn_82230040(&ppuStack_80);
    }
    bVar1 = true;
    *puStack_50 = &lbl_821B2D04;
    puStack_50[2] = uVar2;
    puStack_50[3] = (((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF);
    puStack_50[4] = (((unsigned __int64)(uStack_68) >> 0) & 0xFFFFFFFF);
    puStack_50[5] = (((unsigned __int64)(uStack_68) >> 32) & 0xFFFFFFFF);
    fn_824C5930((double)*param_4,(double)*param_5,param_1 + 4,*param_2,auStack_60);
  }
  if (bVar1) {
    fn_82359C18(auStack_60);
  }
  return param_1;
}

