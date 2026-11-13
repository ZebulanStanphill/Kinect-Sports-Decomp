extern unsigned int *auStack_50;
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_82522D98();
extern int fn_82522ED8();
extern int fn_82577628();
extern int fn_825C53E0();
extern int fn_825C65A8();
extern int fn_825C6990();
extern int fn_826192B0();
extern int fn_8265C9E0();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821C1A30;
extern unsigned int lbl_821C9070;
extern unsigned int lbl_821C9134;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_825760B8(unsigned __int64 param_1,unsigned int *param_2,int param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,int param_7)

{
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar1;
  unsigned int *puVar6;
  int *piVar7;
  unsigned char auStack_50 [80];
  
  piVar7 = (int *)0x0;
  puVar2 = (unsigned int *)
           fn_82577628(param_1,(double)lbl_82192734,param_4,0,param_4,param_5,0,0);
  *(unsigned char *)((int)puVar2 + 0x1a5) = 0;
  *(unsigned char *)((int)puVar2 + 0x1a6) = 0;
  *(unsigned char *)(puVar2 + 0x69) = 1;
  puVar2[0x6d] = 0;
  puVar2[0x6f] = param_2;
  if (param_3 == 0) {
    puVar2[0x6b] = 0;
    puVar6 = (unsigned int *)fn_8265C9E0(8);
    if (puVar6 == (unsigned int *)0x0) {
      puVar6 = (unsigned int *)0x0;
    }
    else {
      *puVar6 = &lbl_821C1A30;
    }
    puVar2[0x74] = puVar6;
    piVar7 = param_2 + 0x18;
    puVar6[1] = puVar2;
    goto LAB_82576390;
  }
  if (param_3 == 1) {
    if (param_2[0x25] == 0) {
      uVar1 = fn_8265C9E0(0x30);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_825C53E0(uVar1,param_2);
      }
      param_2[0x25] = uVar5;
    }
    puVar2[0x6b] = param_2[0x25];
    piVar7 = (int *)param_2[0x25];
  }
  else {
    if (param_3 < 7) goto LAB_82576390;
    if (param_3 < 9) {
      if (param_2[0x26] == 0) {
        puVar6 = (unsigned int *)fn_8265C9E0(0x10);
        if (puVar6 == (unsigned int *)0x0) {
          puVar6 = (unsigned int *)0x0;
        }
        else {
          puVar6[1] = param_2;
          puVar6[2] = 0;
          *puVar6 = &lbl_821C9070;
        }
        param_2[0x26] = puVar6;
      }
      puVar2[0x6b] = param_2[0x26];
      uVar1 = fn_8265C9E0(0xfe0);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_826192B0(uVar1,puVar2,param_3 == 8);
      }
                    /* WARNING: Subroutine does not return */
      fn_82522D98(8);
    }
    if (param_3 != 0xd) {
      if (param_3 == 0x11) {
        if (param_2[0x2a] == 0) {
          piVar3 = (int *)fn_8265C9E0(0x1c);
          if (piVar3 != (int *)0x0) {
            piVar3[1] = (int)param_2;
            piVar3[2] = 0;
            iVar4 = ltcg_pool_0_0f;
            *piVar3 = (int)&lbl_821C9134;
            piVar3[3] = iVar4;
            fn_82520158(0xffffffff821c53d4,auStack_50,0);
            iVar4 = fn_8251F720(auStack_50,0);
            piVar3[4] = iVar4;
            fn_82520158(0xffffffff821c9120,auStack_50,0);
            iVar4 = fn_8251F720(auStack_50,0);
            piVar3[5] = iVar4;
            piVar7 = piVar3;
          }
          param_2[0x2a] = piVar7;
        }
        puVar2[0x6b] = param_2[0x2a];
        uVar5 = fn_825C6990(param_2[0x2a],puVar2,param_6,*(unsigned int *)(param_4 + 0xd8),
                                  *(unsigned int *)(param_4 + 0xdc),*(unsigned char *)(param_7 + 0x130));
        puVar2[0x74] = uVar5;
        piVar7 = param_2 + 0x1a;
      }
      goto LAB_82576390;
    }
    if (param_2[0x27] == 0) {
      uVar1 = fn_8265C9E0(0x10);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_825C65A8(uVar1,param_2,*param_2);
      }
      param_2[0x27] = uVar5;
    }
    puVar2[0x6b] = param_2[0x27];
    piVar7 = (int *)param_2[0x27];
  }
  uVar5 = (**(int (***)())(*piVar7 + 4))(param_1,piVar7,0,puVar2);
  puVar2[0x74] = uVar5;
  piVar7 = param_2 + 0x1c;
LAB_82576390:
  if (puVar2[0x74] == 0) {
    fn_82522ED8(puVar2);
    puVar2 = (unsigned int *)0x0;
  }
  else {
    uVar5 = param_2[0x2b];
    if (piVar7 != (int *)0x0) {
      if (*piVar7 == 0) {
        *piVar7 = (int)puVar2;
      }
      else {
        *(unsigned int **)(piVar7[1] + 0x1e4) = puVar2;
      }
      piVar7[1] = (int)puVar2;
    }
    *puVar2 = uVar5;
    param_2[0x2b] = param_2[0x2b] + 1;
    puVar2[0x6c] = puVar2[0x74];
  }
  return puVar2;
}

