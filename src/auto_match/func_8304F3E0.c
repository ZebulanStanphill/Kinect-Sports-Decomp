extern int *piRam83265048;
extern unsigned int *auStack_60;
extern int fn_8304FDB8();
extern int iRam8326504c;
extern int iRam83265050;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_48;


unsigned __int64
fn_8304F3E0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,float *param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,char param_7)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  char acStack_70 [16];
  unsigned char auStack_60 [24];
  unsigned int uStack_48;

  if (((((param_2 & 0xffffffff) == 0) || (*param_4 < lbl_821AAD20)) ||
      (*(char *)(param_4 + 4) < '\0')) || ('d' < *(char *)(param_4 + 4))) {
    uVar2 = 0x1f;
  }
  else {
    if (param_3 != 0) {
      *(unsigned char *)(param_3 + 0x11) = 1;
    }
    acStack_70[0] = param_7;
    uVar2 = (**(int (***)())(*piRam83265048 + 8))(piRam83265048,param_2,0,param_3,acStack_70,auStack_60)
    ;
    if ((int)uVar2 == 1) {
      if ((uStack_48 < (unsigned int)(iRam83265050 - iRam8326504c >> 2)) &&
         (piVar1 = *(int **)(uStack_48 * 4 + iRam8326504c), piVar1 != (int *)0x0)) {
        piVar3 = (int *)(**(int (***)())(*piVar1 + 0x1c))(piVar1,auStack_60,param_4,param_5,param_6);
        if (piVar3 != (int *)0x0) {
          if (acStack_70[0] == '\0') {
            iVar4 = fn_8304FDB8(piVar3,param_2,param_3,0);
            if (iVar4 != 1) {
              (**(int (***)())(*piVar3 + 0xc))(piVar3);
              return 2;
            }
          }
          else {
            piVar3[0x1d] = piVar3[0x1d] | 0x4000000;
          }
          return 1;
        }
        if (acStack_70[0] != '\0') {
          (**(int (***)())(*(int *)piVar1[0x20] + 4))((int *)piVar1[0x20],auStack_60);
        }
      }
      uVar2 = 2;
    }
  }
  return uVar2;
}
