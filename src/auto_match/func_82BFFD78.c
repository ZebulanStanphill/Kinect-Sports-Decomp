#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82630040();
extern int fn_82630168();
extern int fn_82630218();
extern int fn_82630260();
extern int fn_82631BF8();
extern int fn_82648B08();
extern unsigned int iStack_44;
extern unsigned int lbl_820EBEE0;
extern unsigned int lbl_820EBEE4;
extern unsigned int uStack_58;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82BFFD78(int *param_1)

{
  float fVar1;
  unsigned short *puVar2;
  unsigned __int64 *puVar3;
  __int64 lVar4;
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  unsigned char auStack_50 [12];
  int iStack_44;
  
  puVar3 = &uStack_58;
  lVar4 = 6;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  XGetVideoMode(auStack_50);
  uStack_58 = 0;
  fn_82648B08(param_1[0xe],0,auStack_60);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  fVar1 = lbl_820EBEE0;
  if (iStack_44 != 0) {
    fVar1 = lbl_820EBEE4;
  }
  param_1[0x23] = (int)(fVar1 / -(_seed_nan));
  lVar4 = fn_82630168(0xc,0,1,0);
  param_1[0xf] = (int)lVar4;
  if (-1 < (int)-(unsigned int)(lVar4 == 0)) {
    puVar2 = (unsigned short *)fn_82630218(param_1[0xf],0,0,0);
    *puVar2 = 0;
    puVar2[5] = 5;
    puVar2[1] = 1;
    puVar2[3] = 3;
    puVar2[2] = 2;
    puVar2[4] = 4;
    fn_82630260(param_1[0xf]);
    lVar4 = fn_82630040(0x78,0);
    param_1[0x10] = (int)lVar4;
    if (-1 < (int)-(unsigned int)(lVar4 == 0)) {
      lVar4 = fn_82631BF8(0xffffffff83175b34);
      param_1[0x11] = (int)lVar4;
      if (-1 < (int)-(unsigned int)(lVar4 == 0)) {
        (**(int (***)())(*param_1 + 0x60))(param_1);
      }
    }
  }
  return;
}

