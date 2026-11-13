typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_6c;
extern int fn_82758D20();
extern int fn_8275EC80();
extern int memcpy();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82758E40(int param_1,unsigned int param_2,unsigned int *param_3,unsigned __int64 param_4,
                  unsigned int param_5,unsigned __int64 param_6)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int uStack_94;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned char auStack_6c [32];
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  fn_82758D20(param_1,0);
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1[0x15] != 0) || (bVar3 = true, piVar1[0x18] != 0)) {
    bVar3 = false;
  }
  if (!bVar3) {
    if ((*(unsigned char *)(piVar1 + 9) & 0x10) == 0) {
      uStack_a0 = lbl_821AAD20;
      uStack_9c = lbl_821AAD20;
      uStack_98 = lbl_821AAD20;
      uStack_94 = lbl_821AAD20;
      (**(int (***)())(*piVar1 + 0x14))(piVar1,&uStack_a0);
      iVar2 = *(int *)(param_1 + 8);
      *(unsigned int *)(iVar2 + 4) = uStack_a0;
      *(unsigned int *)(iVar2 + 8) = uStack_9c;
      *(unsigned int *)(iVar2 + 0xc) = uStack_98;
      *(unsigned int *)(iVar2 + 0x10) = uStack_94;
      *(unsigned char *)(*(int *)(param_1 + 8) + 0x24) = *(unsigned char *)(*(int *)(param_1 + 8) + 0x24) | 0x10;
    }
    uStack_84 = *param_3;
    uStack_80 = param_3[1];
    uStack_7c = param_3[2];
    uStack_78 = param_3[3];
    uStack_74 = param_3[4];
    stack_pair_90.second = 0;
    uStack_70 = param_3[5];
    uStack_88 = 0;
    stack_pair_90.first = param_2;
    memcpy(auStack_6c,param_4,0x20);
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_4c = param_5;
    (**(int (***)())(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),&stack_pair_90.first);
    fn_8275EC80(*(unsigned int *)(param_1 + 8),&stack_pair_90.first,param_6,0);
  }
  return;
}

