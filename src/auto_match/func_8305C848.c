extern unsigned int *auStack_40;
extern int memcpy();
extern int fn_8305C458();
extern int fn_83060EC8();
extern int fn_83060FF8();
extern int fn_83062E18();
extern int fn_83063800();
extern int fn_83066F98();
extern int fn_83066FC8();
extern int fn_83067080();
extern int fn_830670A8();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int lbl_8217E690;


void fn_8305C848(unsigned char *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned char *puStack_50;
  int iStack_4c;
  int iStack_48;
  unsigned char auStack_40 [16];
  
  fn_8305C458();
  if (param_3 == 0) {
    param_3 = fn_830670A8();
  }
  *(int *)(param_1 + 0x60) = param_3;
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 0x30);
  *param_1 = *(unsigned char *)(param_2 + 0x24);
  fn_83060EC8(param_2 + 0x34,param_1 + 0x34,param_1 + 0x40);
  fn_83060FF8(param_2 + 0x34,param_1 + 0x4c,param_1 + 0x58);
  fn_83063800(param_2,param_1 + 0xc);
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x60))
                    (*(unsigned int **)(param_1 + 0x60),(unsigned __int64)uVar1 * 0x30);
  fn_83067080(auStack_40,uVar2,(unsigned __int64)uVar1 * 0x30);
  iVar3 = fn_83066FC8(auStack_40,(unsigned __int64)*(unsigned int *)(param_1 + 0x20) * 0x30,0xffffffffffffffff);
  *(int *)(param_1 + 4) = iVar3;
  iStack_48 = 0;
  puStack_50 = &lbl_8217E690;
  iVar4 = 0;
  iStack_4c = fn_83062E18(param_2);
  iStack_48 = iStack_4c;
  if (iStack_4c != 0) {
    puVar6 = (unsigned int *)(iVar3 + -8);
    do {
      puVar6 = puVar6 + 0xc;
      *puVar6 = *(unsigned int *)(iStack_48 + 0x38);
      *(int *)(iStack_48 + 0x38) = iVar4;
      iVar4 = iVar4 + 1;
      iStack_48 = (**(int (***)())(puStack_50 + 4))(&puStack_50,iStack_48);
    } while (iStack_48 != 0);
  }
  iVar3 = *(int *)(param_1 + 4);
  iStack_4c = fn_83062E18(param_2);
  iStack_48 = iStack_4c;
  if (iStack_4c != 0) {
    piVar5 = (int *)(iVar3 + 0x20);
    do {
      if (*(int *)(iStack_48 + 0x2c) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iStack_48 + 0x2c) + 0x38) * 0x30 + *(int *)(param_1 + 4);
      }
      piVar5[-1] = iVar3;
      if (*(int *)(iStack_48 + 0x30) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iStack_48 + 0x30) + 0x38) * 0x30 + *(int *)(param_1 + 4);
      }
      *piVar5 = iVar3;
      if (*(int *)(iStack_48 + 0x34) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(int *)(iStack_48 + 0x34) + 0x38) * 0x30 + *(int *)(param_1 + 4);
      }
      piVar5[1] = iVar3;
      memcpy(piVar5 + -8,iStack_48 + 0x10,0x1c);
      piVar5 = piVar5 + 0xc;
      iStack_48 = (**(int (***)())(puStack_50 + 4))(&puStack_50,iStack_48);
    } while (iStack_48 != 0);
  }
  iVar3 = *(int *)(param_1 + 4);
  iStack_4c = fn_83062E18(param_2);
  iStack_48 = iStack_4c;
  if (iStack_4c != 0) {
    puVar6 = (unsigned int *)(iVar3 + -8);
    do {
      puVar6 = puVar6 + 0xc;
      *(unsigned int *)(iStack_48 + 0x38) = *puVar6;
      iStack_48 = (**(int (***)())(puStack_50 + 4))(&puStack_50,iStack_48);
    } while (iStack_48 != 0);
  }
  fn_83066F98(auStack_40);
  return;
}

