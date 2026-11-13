extern unsigned int *auStack_58;
extern unsigned int *auStack_74;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEB868();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82D00450();
extern int fn_82E09B50();
extern int fn_82E12520();
extern int fn_82E12770();
extern int fn_82E132A0();
extern int fn_82E13B70();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8214A5D0;
extern unsigned int lbl_8214AF58;
extern unsigned int lbl_8214B244;
extern unsigned int uStack_78;
extern unsigned int uStack_7a;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;


unsigned __int64
fn_82E13F28(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  int *piVar3;
  int *piVar4;
  unsigned __int64 uVar2;
  int iVar5;
  int *piVar6;
  int *piStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char **ppuStack_80;
  unsigned short uStack_7a;
  unsigned int uStack_78;
  unsigned char auStack_74 [20];
  unsigned char ** appuStack_60;
  unsigned char auStack_58 [16];
  int *piStack_48;
  
  piStack_b8 = (int *)0x0;
  uStack_b4 = 0;
  uStack_b0 = 0x80000000;
  fn_82E132A0(param_1,param_3,param_4,&piStack_b8);
  fn_82D00388(auStack_90,0);
  fn_82D00388(auStack_a0,0);
  piVar3 = (int *)fn_82E13B70(param_1,param_3);
  piVar4 = (int *)fn_82E13B70(param_1,param_4);
  fn_82E12770(&appuStack_60,0,piVar4);
  uStack_78 = 0;
  uStack_7a = 1;
  ppuStack_80 = &lbl_8214A5D0;
  fn_82D00388(auStack_74,0);
  ppuStack_80 = &lbl_8214B244;
  for (puVar1 = param_2; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[3]) {
    if (puVar1[2] != 0) {
      fn_82E09B50(&ppuStack_80);
    }
    fn_82E12520(&appuStack_60,*puVar1);
  }
  (**(int (***)())(*piVar3 + 0x30))(piVar3,auStack_58);
  (**(int (***)())(*piVar4 + 0x24))(piVar4,&ppuStack_80);
  for (puVar1 = param_2; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[3]) {
    piVar4 = (int *)puVar1[1];
    if (piVar4 != (int *)0x0) {
      piVar6 = piVar4 + 3;
      iVar5 = *piVar6;
      while (iVar5 != 0) {
        if (*piVar4 == -1) {
          uVar2 = (**(int (***)())(*piVar3 + 0x10))(piVar3,*piVar6);
          iVar5 = fn_82CEB868(uVar2,0);
          *piVar4 = iVar5;
        }
        if (piVar4[1] == -1) {
          uVar2 = fn_82D00450(auStack_58,*piVar6,*piVar6);
          if (piStack_48 == (int *)0x0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(int (***)())(*piStack_48 + 0x10))(piStack_48,uVar2);
          }
          iVar5 = fn_82CEB868(uVar2,0);
          piVar4[1] = iVar5;
        }
        piVar6 = piVar4 + 8;
        iVar5 = piVar4[8];
        piVar4 = piVar4 + 5;
      }
    }
  }
  piVar3 = (int *)(*(int *)(*piStack_b8 + 8) + 0xc);
  iVar5 = *piVar3;
  while (iVar5 != 0) {
    piVar3 = (int *)(*piVar3 + 0xc);
    iVar5 = *piVar3;
  }
  *piVar3 = (int)param_2;
  fn_82D003F0(auStack_74);
  ppuStack_80 = &lbl_8212FC60;
  appuStack_60 = &lbl_8214AF58;
  if (piStack_48 != (int *)0x0) {
    fn_82CE4118();
  }
  fn_82D003F0(auStack_58);
  appuStack_60 = &lbl_8212FC60;
  fn_82D003F0(auStack_a0);
  fn_82D003F0(auStack_90);
  iVar5 = fn_82CE5410();
  uStack_b4 = 0;
  if ((uStack_b0 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0xc) + 0x10))
              (*(int **)(iVar5 + 0xc),piStack_b8,uStack_b0 & 0x3fffffff,4);
  }
  return 0;
}

