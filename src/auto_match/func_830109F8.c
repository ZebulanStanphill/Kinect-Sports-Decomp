#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_80;
extern unsigned int *auStack_d0;
extern int fn_82FF5198();
extern int fn_83013400();
extern int fn_83032FE8();
extern unsigned int lbl_83264304;


unsigned __int64 fn_830109F8(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int *piStack_e0;
  int *piStack_dc;
  unsigned int auStack_d0 [20];
  unsigned int auStack_80 [32];
  
  if (param_2 != 0) {
    piStack_dc = (int *)0x0;
    piVar2 = *(int **)(param_1 + 0x70);
    while (piStack_e0 = piVar2, piStack_e0 != (int *)0x0) {
      if (param_2 == piStack_e0[2]) {
        auStack_d0[0] = 0;
        uVar1 = *(unsigned int *)(*(int *)(param_2 + 8) + 0x14) >> 8;
        if (uVar1 == 0x4011) {
LAB_83010a80:
          (**(int (***)())(**(int **)(param_2 + 8) + 0x28))(*(int **)(param_2 + 8),auStack_d0);
        }
        else if (uVar1 == 0x5011) {
          fn_83032FE8();
          goto LAB_83010a80;
        }
        fn_82FF5198(lbl_83264304,*(unsigned int *)(param_2 + 0x28));
        fn_83013400(&piStack_e0,param_1,param_2,param_1 + 0x70,CONCAT44(piStack_e0,piStack_dc)
                         );
        break;
      }
      piStack_dc = piStack_e0;
      piVar2 = (int *)*piStack_e0;
    }
    piStack_dc = (int *)0x0;
    piVar2 = *(int **)(param_1 + 0x50);
    while (piStack_e0 = piVar2, piStack_e0 != (int *)0x0) {
      if (param_2 == piStack_e0[2]) {
        auStack_80[0] = 0;
        uVar1 = *(unsigned int *)(*(int *)(param_2 + 8) + 0x14) >> 8;
        if (uVar1 != 0x4011) {
          if (uVar1 != 0x5011) goto LAB_83010b40;
          fn_83032FE8();
        }
        (**(int (***)())(**(int **)(param_2 + 8) + 0x28))(*(int **)(param_2 + 8),auStack_80);
LAB_83010b40:
        fn_82FF5198(lbl_83264304,*(unsigned int *)(param_2 + 0x28));
        fn_83013400(&piStack_e0,param_1,param_2,param_1 + 0x50,CONCAT44(piStack_e0,piStack_dc)
                         );
        return 1;
      }
      piStack_dc = piStack_e0;
      piVar2 = (int *)*piStack_e0;
    }
  }
  return 1;
}

