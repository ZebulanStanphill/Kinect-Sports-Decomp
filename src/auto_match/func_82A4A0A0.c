extern unsigned int *auStack_80;
extern unsigned int *auStack_ae;
extern int fn_82A49AC8();
extern int fn_82A49DF8();
extern int fn_82A51C60();
extern int fn_82F691F0();


void fn_82A4A0A0(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_ae [46];
  unsigned char auStack_80 [128];
  
  piVar6 = (int *)(param_1 + 4);
  iVar4 = fn_82A51C60(piVar6,param_2,0);
  uVar5 = (unsigned int)*(unsigned short *)(param_3 + 0x406);
  uVar7 = (unsigned __int64)*(unsigned int *)(param_3 + 0x418);
  if ((param_2 & 0x1000) != 0) {
    puVar1 = *(unsigned int **)(param_1 + 0x38);
    if (puVar1 == (unsigned int *)0x0) {
      uVar5 = *(unsigned int *)(param_1 + 0x40);
    }
    else {
      uVar5 = *puVar1;
    }
    uVar5 = uVar5 & 0xffff;
    if (puVar1 == (unsigned int *)0x0) {
      uVar7 = (**(int (***)())(*piVar6 + 0x6c))(piVar6);
    }
    else {
      uVar7 = (unsigned __int64)puVar1[1];
    }
  }
  if (-1 < iVar4) {
    uVar2 = *(unsigned int *)(param_1 + 0x44);
    uVar3 = fn_82A49AC8(param_3 + 0x404);
    fn_82A49DF8(auStack_80,0x28,uVar3,uVar5,uVar2,*(unsigned short *)(param_3 + 0x412),
                  *(unsigned short *)(param_3 + 0x412),uVar7);
    piVar6 = *(int **)(*(int *)(param_1 + 0x34) + 0xb0);
    (**(int (***)())(*piVar6 + 0x18))(piVar6,param_3,0,auStack_80,0,param_1 + 0x8c);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_ae,0,0x26);
}

