#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82ABE5F8();
extern int fn_82AD18C0();
extern int fn_82AD1918();
extern int fn_82AD6090();
extern int fn_82AF87E0();
extern int fn_82B82D28();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int iStack_70;
extern unsigned int uStack_6c;


void fn_82AFDA88(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  int *piVar11;
  int iStack_70;
  unsigned int uStack_6c;
  int aiStack_68 [2];
  int iStack_60;
  int iStack_5c;
  
  puVar6 = (unsigned int *)fn_82ABE250(param_1,8,0x1c);
  puVar4 = puVar6 + 1;
  puVar6[1] = (unsigned int)puVar6 | 1;
  *puVar6 = (unsigned int)puVar4 | 1;
  do {
    piVar11 = (int *)(param_2 + 0x2c);
    for (uVar10 = 0; uVar10 < (*(unsigned int *)(param_2 + 8) >> 0x13 & 7); uVar10 = uVar10 + 1) {
      iVar7 = *piVar11;
      fn_82B82D28(iVar7,param_3,aiStack_68,&uStack_6c,&iStack_70,
                        *(unsigned int *)(param_2 + 0x1c),0,1);
      uVar5 = *(unsigned int *)(aiStack_68[0] + 8) >> 7 & 0x7f;
      if (uVar5 == 2) {
        iStack_5c = iVar7;
        if (aiStack_68[0] != *(int *)(iVar7 + 0xc)) {
          iVar7 = fn_82AD1918(param_1,aiStack_68[0],uStack_6c,iStack_70);
        }
        iStack_60 = iVar7;
        if ((param_4[1] & 1) == 0) {
          uVar5 = *param_4 & 0xfffffffe;
          iVar7 = uVar5 - 4;
          if ((iVar7 == 0) || (*(unsigned int *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82afdb78;
        }
        else {
LAB_82afdb78:
          iVar7 = fn_82AF87E0(param_4,1);
        }
        iVar8 = *(int *)(iVar7 + 8);
        *(int *)(iVar7 + 8) = iVar8 + 1;
        *(unsigned __int64 *)((iVar8 + 2) * 8 + iVar7) = CONCAT44(iStack_60,iStack_5c);
      }
      else if ((uVar5 == 1) && (iStack_70 == 0)) {
        if (((int)param_3 != 0) || (aiStack_68[0] != *(int *)(iVar7 + 0xc))) {
          iVar7 = fn_82AD18C0(param_1,aiStack_68[0],uStack_6c);
        }
        if ((*puVar4 & 1) == 0) {
          uVar5 = *puVar6 & 0xfffffffe;
          iVar8 = uVar5 - 4;
          if ((iVar8 == 0) || (*(unsigned int *)(uVar5 + 8) < *(int *)(uVar5 + 4) + 1U)) goto LAB_82afdc0c;
        }
        else {
LAB_82afdc0c:
          iVar8 = fn_82AD6090(puVar6,1);
        }
        iVar1 = *(int *)(iVar8 + 8);
        *(int *)(iVar8 + 8) = iVar1 + 1;
        *(int *)((iVar1 + 4) * 4 + iVar8) = iVar7;
      }
      piVar11 = piVar11 + 1;
    }
    if (((*puVar4 & 1) != 0) || (*puVar4 == 0)) {
      *puVar6 = *(unsigned int *)(param_1 + 0x3d0);
      *(unsigned int **)(param_1 + 0x3d0) = puVar6;
      return;
    }
    puVar2 = (unsigned int *)(*puVar6 & 0xfffffffe);
    puVar9 = puVar2 + -1;
    uVar10 = puVar2[1] - 1;
    puVar3 = (unsigned int *)puVar9[puVar2[1] + 3];
    puVar2[1] = uVar10;
    if (uVar10 == 0) {
      *(unsigned int *)(*puVar2 & 0xfffffffe) = *puVar9;
      *(unsigned int *)(*puVar9 & 0xfffffffe) = *puVar2;
      fn_82AA6648(puVar6,puVar9,((unsigned __int64)puVar2[2] + 4 & 0x3fffffff) << 2);
    }
    param_2 = puVar3[3];
    param_3 = (unsigned __int64)(*puVar3 >> 5) & 3;
    if (puVar3[4] == 0) {
      puVar9 = (unsigned int *)(param_2 + 4);
      for (puVar2 = *(unsigned int **)(param_2 + 4); puVar2 != puVar3; puVar2 = (unsigned int *)puVar2[2]) {
        puVar9 = puVar2 + 2;
      }
      *puVar9 = puVar2[2];
      fn_82ABE5F8(param_1,puVar3,0x14,0x1a);
    }
  } while( true );
}

