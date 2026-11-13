extern int fn_82FB9358();
extern int fn_82FB95B0();
extern int fn_8300CCD0();
extern int fn_8300CD08();


unsigned __int64 fn_8302D480(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  int *piVar2;
  unsigned short *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  
  piVar2 = *(int **)(param_1 + 0x88);
  if (*(short *)(param_1 + 0x11c) != 0) {
    puVar7 = (unsigned int *)(param_2 + 0x18);
    *(short *)(param_2 + 0x14) = *(short *)(param_2 + 0x14) + -1;
    puVar3 = (unsigned short *)fn_82FB95B0(puVar7);
    if (puVar3 == (unsigned short *)0x0) {
      *(unsigned short *)(param_2 + 0x16) = 0;
      return 2;
    }
    *puVar3 = (short)param_3;
    fn_8300CCD0(param_2,param_3);
    uVar4 = (**(int (***)())(*piVar2 + 0x28))(piVar2,param_3);
    *(unsigned int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - (uVar4 & 0xff);
    iVar5 = (**(int (***)())(**(int **)(param_1 + 0x88) + 0xc))();
    uVar4 = iVar5 + 0xffffU & 0xffff;
    uVar6 = (unsigned int)*(unsigned short *)(param_1 + 0x11c);
    if (uVar4 <= *(unsigned short *)(param_1 + 0x11c)) {
      uVar6 = uVar4;
    }
    if (uVar6 < (unsigned int)(*(int *)(param_2 + 0x1c) - (int)*puVar7 >> 1)) {
      uVar1 = *(unsigned short *)*puVar7;
      fn_8300CD08(param_2,uVar1);
      uVar4 = (**(int (***)())(*piVar2 + 0x28))(piVar2,uVar1);
      *(short *)(param_2 + 0x14) = *(short *)(param_2 + 0x14) + 1;
      *(unsigned int *)(param_2 + 0x10) = (uVar4 & 0xff) + *(int *)(param_2 + 0x10);
      fn_82FB9358(puVar7,0);
    }
  }
  return 1;
}

