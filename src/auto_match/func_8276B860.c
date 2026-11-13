typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_260;
extern unsigned int *auStack_2a0;
extern int fn_8268B330();
extern int fn_8268B610();
extern int fn_8276B1A8();
extern int fn_8276B218();
extern unsigned int uStack_270;
extern unsigned int uStack_278;
extern unsigned int uStack_280;
extern unsigned int uStack_288;
extern unsigned int uStack_290;
extern unsigned int uStack_298;


unsigned __int64 fn_8276B860(unsigned __int64 param_1,unsigned int *param_2)

{
  bool bVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned short auStack_2a0 [4];
  unsigned int uStack_298;
  unsigned char *puStack_294;
  unsigned int uStack_290;
  unsigned int uStack_288;
  unsigned char *puStack_284;
  unsigned int uStack_280;
  unsigned int uStack_278;
  unsigned char *puStack_274;
  unsigned int uStack_270;
  unsigned char auStack_260 [608];
  
  fn_8268B330();
  uVar2 = 0;
  auStack_2a0[0] = 0;
  iVar5 = 0;
  bVar1 = true;
  uVar4 = 0;
  if (param_2[1] != 0) {
    do {
      if (uVar4 == 0) {
        auStack_2a0[0] = *(unsigned short *)*param_2;
LAB_8276b974:
        bVar1 = false;
        uVar2 = auStack_2a0[0];
      }
      else {
        puVar3 = (unsigned short *)*param_2 + uVar4 * 2;
        if (puVar3[-1] + 1 < (unsigned int)*puVar3) {
          if (uVar2 == puVar3[-1]) {
            uStack_278 = 2;
            uStack_270 = 0x200;
            puStack_274 = auStack_260;
            fn_8276B1A8(&uStack_278,0xffffffff82014f0c);
          }
          else {
            uStack_298 = 2;
            uStack_290 = 0x200;
            puStack_294 = auStack_260;
            fn_8276B218(&uStack_298,0xffffffff82014f14,auStack_2a0,puVar3 + -1);
          }
          bVar1 = true;
          if (iVar5 != 0) {
            fn_8268B610(param_1,0xffffffff82196824,0xffffffffffffffff);
          }
          fn_8268B610(param_1,auStack_260,0xffffffffffffffff);
          iVar5 = iVar5 + 1;
          if (iVar5 < 5) {
            auStack_2a0[0] = *(unsigned short *)(uVar4 * 4 + *param_2);
            goto LAB_8276b974;
          }
          break;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2[1]);
  }
  if (!bVar1) {
    puStack_284 = auStack_260;
    uStack_288 = 2;
    uStack_280 = 0x200;
    fn_8276B218(&uStack_288,0xffffffff82014f14,auStack_2a0,
                  ((unsigned __int64)param_2[1] & 0x3fffffff) * 4 + (unsigned __int64)*param_2 + -2);
    if (iVar5 != 0) {
      fn_8268B610(param_1,0xffffffff82196824,0xffffffffffffffff);
    }
    fn_8268B610(param_1,auStack_260,0xffffffffffffffff);
  }
  if (uVar4 < param_2[1]) {
    fn_8268B610(param_1,0xffffffff82014efc,0xffffffffffffffff);
  }
  return param_1;
}

