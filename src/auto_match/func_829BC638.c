extern int d3dx_jround_up();
extern int fn_829BB598();
extern int fn_829BB5A8();
extern int fn_829BB848();
extern int fn_829BBAA8();
extern int fn_829BC5A8();
extern int fn_82D7E470();


void fn_829BC638(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  
  puVar5 = (unsigned int *)(*(int (**)())**(unsigned int **)(param_1 + 4))(param_1,1,0x74);
  *(unsigned int **)(param_1 + 0x1b0) = puVar5;
  iVar7 = 0;
  puVar5[0x1c] = 0;
  *puVar5 = fn_829BB598;
  puVar5[2] = fn_829BC5A8;
  if (param_2 == 0) {
    iVar7 = (**(int (***)())(*(int *)(param_1 + 4) + 4))(param_1,1,0x500);
    puVar5[8] = iVar7;
    puVar5[9] = iVar7 + 0x80;
    puVar5[10] = iVar7 + 0x100;
    puVar5[0xb] = iVar7 + 0x180;
    puVar5[0xc] = iVar7 + 0x200;
    puVar5[0xd] = iVar7 + 0x280;
    puVar5[0xe] = iVar7 + 0x300;
    puVar5[0xf] = iVar7 + 0x380;
    puVar5[0x10] = iVar7 + 0x400;
    puVar5[0x11] = iVar7 + 0x480;
    puVar5[1] = fn_82D7E470;
    puVar5[3] = fn_829BB5A8;
    puVar5[4] = 0;
  }
  else {
    if (0 < *(int *)(param_1 + 0x24)) {
      puVar10 = (unsigned int *)(*(int *)(param_1 + 0xdc) + -0x34);
      puVar9 = puVar5 + 0x11;
      do {
        uVar8 = (unsigned __int64)(unsigned int)puVar10[0x10];
        if (*(int *)(param_1 + 0xe0) != 0) {
          uVar8 = uVar8 + ((unsigned __int64)(unsigned int)puVar10[0x10] & 0x7fffffff) * 2;
        }
        uVar6 = puVar10[0x14];
        uVar1 = puVar10[0xf];
        puVar10 = puVar10 + 0x15;
        iVar2 = *(int *)(param_1 + 4);
        uVar3 = d3dx_jround_up(*puVar10);
        uVar4 = d3dx_jround_up(uVar6,uVar1);
        uVar6 = (**(int (***)())(iVar2 + 0x14))(param_1,1,1,uVar4,uVar3,uVar8);
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 1;
        *puVar9 = uVar6;
      } while (iVar7 < *(int *)(param_1 + 0x24));
    }
    puVar5[1] = fn_829BB848;
    puVar5[3] = fn_829BBAA8;
    puVar5[4] = puVar5 + 0x12;
  }
  return;
}

