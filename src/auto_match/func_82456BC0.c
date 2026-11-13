extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_8248F890();
extern int fn_8248F9F8();
extern int fn_82522588();
extern unsigned int iStack_48;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int lbl_821BEC10;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82456BC0(unsigned int *param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_58 [4];
  int iStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  unsigned int uStack_44;
  
  if (param_1[0x1c] != 0) {
    iVar8 = param_2 + 4;
    iVar1 = *(int *)(param_1[0x1c] + 0x1c);
    uStack_50 = param_1[iVar8 * 4];
    uStack_4c = param_1[iVar8 * 4 + 1];
    iVar2 = param_1[iVar8 * 4 + 2];
    uStack_44 = param_1[iVar8 * 4 + 3];
    if ((iVar1 == 0) || (*(int *)(iVar1 + 8) <= iVar2)) {
      iStack_48 = iVar2;
      puVar6 = (unsigned int *)fn_8248F890(100);
      if (puVar6 == (unsigned int *)0x0) {
        puVar6 = (unsigned int *)0x0;
      }
      else {
        puVar6[1] = param_2;
        puVar6[2] = iVar2;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[7] = 0xffffffff;
        puVar6[9] = uStack_50;
        puVar6[8] = 0xffffffff;
        puVar6[10] = uStack_4c;
        puVar6[0xb] = uStack_44;
        puVar6[0xc] = 0;
        *puVar6 = &lbl_821BEC10;
        fn_82230110(puVar6 + 0xf,0xffffffff821ba9c4);
        puVar6[0x17] = param_1;
        puVar6[0x16] = 0;
        puVar6[0x18] = 0;
      }
      puVar3 = (unsigned int *)param_1[0x1c];
      fn_8248F9F8(puVar6,*puVar3,puVar6[0xc]);
      puVar4 = (unsigned int *)puVar3[7];
      if (puVar4 != (unsigned int *)0x0) {
        (**(int (***)())*puVar4)(puVar4,1);
      }
      puVar3[7] = puVar6;
      puVar5 = (unsigned int *)*param_1;
      for (uVar9 = (unsigned __int64)*puVar5; (uVar9 & 0xffffffff) != (unsigned __int64)puVar5[1];
          uVar9 = uVar9 + 8) {
        piVar7 = (int *)fn_82522588(auStack_60,uVar9);
        *(int *)(*piVar7 + 0x2d4) = param_2;
        if (iStack_5c != 0) {
          fn_822315A0();
        }
        piVar7 = (int *)fn_82522588(auStack_58,uVar9);
        *(unsigned int *)(*piVar7 + 0x2d8) = param_3;
        if (iStack_54 != 0) {
          fn_822315A0();
        }
        puVar5 = (unsigned int *)*param_1;
      }
    }
  }
  return;
}

