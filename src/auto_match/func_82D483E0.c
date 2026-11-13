extern unsigned int *auStack_40;


void fn_82D483E0(int param_1,int param_2,__int64 param_3,int param_4)

{
  int *piVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  unsigned short auStack_40;
  
  if (0 < (int)param_3) {
    puVar3 = (unsigned short *)(param_2 + -2);
    do {
      puVar3 = puVar3 + 1;
      auStack_40 = *puVar3 & 0xff;
      uVar2 = *puVar3 >> 8;
      piVar1 = *(int **)((unsigned int)uVar2 * 4 + *(int *)(param_1 + 0x44));
      (**(int (***)())(*piVar1 + 0x3c))(piVar1,&auStack_40,1,param_4);
      param_3 = param_3 + -1;
      *(unsigned int *)(param_4 + 0xc) =
           (*(unsigned int *)(param_4 + 0xc) & 0xc0ffffff) + (unsigned int)uVar2 * 0x100 | 0x3f000000;
      param_4 = param_4 + 0x10;
    } while (param_3 != 0);
  }
  return;
}

