extern unsigned int *auStack_4b;
extern unsigned int *auStack_6f;
extern unsigned int *auStack_80;
extern int fn_828EF460();
extern int fn_828EFBE8();
extern int fn_82A1C098();
extern int fn_82A1E740();
extern int fn_82F68CC0();
extern unsigned int lbl_83214558;
extern unsigned int uStack_70;


void fn_828EFC90(int *param_1)

{
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar1;
  __int64 lVar4;
  unsigned char auStack_80 [16];
  unsigned char uStack_70;
  unsigned char auStack_6f [36];
  unsigned char auStack_4b [75];
  
  if ((param_1[2] == 1) && (param_1[5] != 0x3e5)) {
    iVar2 = fn_82A1E740(param_1 + 5,0,0);
    if (iVar2 == 0) {
      param_1[2] = 2;
      iVar2 = lbl_83214558;
      if (*(char *)(param_1 + 0x10e) != '\0') {
        piVar3 = (int *)fn_828EF460(auStack_80,0xffffffff83214554,(int)param_1 + 0x439);
        if (*piVar3 == iVar2) {
          uStack_70 = 0;
          iVar2 = (**(int (***)())(*param_1 + 0xc))(param_1);
          if (iVar2 != 0) {
            uStack_70 = 1;
            uVar1 = (**(int (***)())(*param_1 + 0x28))(param_1,0);
            fn_82F68CC0(auStack_4b,uVar1,0x10);
            uVar1 = (**(int (***)())(*param_1 + 0x2c))(param_1,0);
            fn_82F68CC0(auStack_6f,uVar1,0x24);
          }
          uVar1 = fn_828EFBE8(0xffffffff83214554,(int)param_1 + 0x439);
          fn_82F68CC0(uVar1,&uStack_70,0x35);
        }
        piVar3 = param_1 + 0x10e;
        lVar4 = 8;
        do {
          piVar3 = (int *)((int)piVar3 + 1);
          *(unsigned char *)piVar3 = 0;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        *(unsigned char *)(param_1 + 0x10e) = 0;
      }
      if (*(char *)((int)param_1 + 0x441) != '\0') {
        (**(int (***)())(*param_1 + 0x58))(param_1);
        param_1[2] = 0;
        *(unsigned char *)((int)param_1 + 0x441) = 0;
      }
      (**(int (***)())(*param_1 + 0x5c))(param_1);
    }
    else {
      fn_82A1C098(param_1 + 5);
      (**(int (***)())(*param_1 + 0x58))(param_1);
      param_1[2] = 0;
      *(unsigned char *)((int)param_1 + 0x441) = 0;
    }
  }
  return;
}

