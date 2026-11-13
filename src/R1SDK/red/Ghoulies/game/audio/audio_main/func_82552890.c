static __forceinline unsigned failure(unsigned char found) { return found ? 0 : 0x80004005; }
typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82552B50();
extern unsigned int *lbl_8327F868;
extern unsigned int *lbl_8327F86C;


void fn_82552890(int *param_1,int *param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned iVar4;
  bool bVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if ((int *)*param_2 != (int *)0x0) {
    piVar3 = (int *)(*(int (**)())(*(int *)*param_2 + 0x20))((void *)*param_2);
    if (piVar3 != (int *)0x0) {
      iVar4 = (*(int (**)())(*piVar3 + 0x4c))(piVar3);
      puVar2 = lbl_8327F86C;
      iVar4 = *(int *)(iVar4 + 8);
      bVar5 = false;
      piVar3 = (int *)*lbl_8327F86C;
      while (piVar3 != (int *)puVar2[1]) {
        iVar1 = *piVar3;
        if ((*(unsigned *)(iVar1 + 8) == iVar4) && (*(unsigned *)(iVar1 + 0xc) == 0)) {
          *(unsigned int *)(iVar1 + 8) = param_3;
          bVar5 = true;
        }
        else {
          piVar3 = piVar3 + 1;
        }
      }
      if ((int)failure(bVar5) < 0) {
        (*(int (**)())(*lbl_8327F868 + 8))(lbl_8327F868,"D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\audio\\audio_main.cpp",0x847,"Failed to transfer ownership to new avatar\n");
      }
    }
  }
  fn_82552B50(param_2,0);
  return;
}

