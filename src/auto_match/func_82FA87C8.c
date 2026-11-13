typedef unsigned char bool;
#define true 1
#define false 0
extern float lbl_82005CCC;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216CBEC;
extern unsigned int uStack_39;


void fn_82FA87C8(double param_1,int param_2,int param_3,unsigned __int64 param_4,char param_5)

{
  int (**pcVar1)();
  bool bVar2;
  int *piVar3;
  unsigned char uStack_39;
  
  bVar2 = false;
  if (param_3 < 0x4000001) {
    if (param_3 != 0x4000000) {
      if (param_3 != 0x1000000) {
        if (param_3 != 0x2000000) {
          return;
        }
        bVar2 = true;
      }
      piVar3 = (int *)(param_2 + -0x14);
      pcVar1 = *(int (***)())(*(int *)(param_2 + -0x14) + 0x10);
      uStack_39 = (unsigned char)
                  (__int64)((float)(param_1 - (double)lbl_8216C698) * lbl_82005CCC * lbl_8216CBEC);
      *(unsigned char *)(param_2 + 0x1a) = uStack_39;
      (*pcVar1)(piVar3,param_2 + 0x1a);
      if (param_5 == '\0') {
        return;
      }
      *(unsigned int *)(param_2 + 4) = 0;
      if (!bVar2) {
        return;
      }
      (**(int (***)())(*piVar3 + 4))(piVar3,0xffffffffffffffff);
      return;
    }
    bVar2 = true;
  }
  else if (param_3 != 0x8000000) {
    return;
  }
  piVar3 = (int *)(param_2 + -0x14);
  pcVar1 = *(int (***)())(*(int *)(param_2 + -0x14) + 0x10);
  uStack_39 = (unsigned char)
              (__int64)((float)(param_1 - (double)lbl_8216C698) * lbl_82005CCC * lbl_8216CBEC);
  *(unsigned char *)(param_2 + 0x1b) = uStack_39;
  (*pcVar1)(piVar3,param_2 + 0x1b);
  if ((param_5 != '\0') && (*(unsigned int *)(param_2 + 8) = 0, bVar2)) {
    (**(int (***)())(*piVar3 + 8))(piVar3);
  }
  return;
}

