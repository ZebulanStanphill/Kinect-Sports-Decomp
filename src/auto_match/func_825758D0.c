extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82577628();
extern int fn_82581038();
extern int fn_8265C9E0();
extern unsigned int lbl_821C8ED0;
extern unsigned int lbl_821C8EF8;
extern unsigned int lbl_821C8F20;
extern unsigned int lbl_821C8F48;


unsigned int *
fn_825758D0(unsigned __int64 param_1,unsigned int *param_2,unsigned int param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned char param_6,unsigned __int64 param_7,unsigned char param_8,
             unsigned char param_9)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned __int64 uVar2;
  int *piVar6;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000007c;
  unsigned int in_stack_00000084;
  
  piVar6 = (int *)0x0;
  puVar3 = (unsigned int *)
           fn_82577628(param_7,in_stack_00000054,param_4,param_5,in_stack_0000007c,
                             in_stack_00000084);
  *(unsigned char *)(puVar3 + 0x69) = param_8;
  *(unsigned char *)((int)puVar3 + 0x1a5) = param_9;
  if (param_4 != (unsigned int *)0x0) {
    puVar3[0x68] = *param_4;
  }
  puVar3[0x70] = param_3;
  puVar3[0x6f] = param_2;
  *(unsigned char *)((int)puVar3 + 0x1a6) = 0;
  puVar3[0x6d] = param_5;
  *(unsigned char *)((int)puVar3 + 0x1a7) = 0;
  *(unsigned char *)(puVar3 + 0x6a) = param_6;
  uVar1 = *param_5;
  if (uVar1 == 0) {
    if (param_2[0x20] == 0) {
      uVar2 = fn_8265C9E0(0xf4);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = fn_82581038(uVar2,param_2,*param_2);
      }
      param_2[0x20] = uVar5;
    }
    puVar3[0x6b] = param_2[0x20];
    piVar6 = (int *)param_2[0x20];
LAB_82575ba4:
    uVar5 = (**(int (***)())(*piVar6 + 4))(param_1,piVar6,param_5,puVar3);
    piVar6 = param_2 + 0x1e;
  }
  else if (uVar1 == 1) {
    if (param_2[0x21] == 0) {
      puVar4 = (unsigned int *)fn_8265C9E0(0x1c);
      if (puVar4 == (unsigned int *)0x0) {
        puVar4 = (unsigned int *)0x0;
      }
      else {
        uVar5 = *param_2;
        puVar4[1] = param_2;
        puVar4[2] = 0;
        *puVar4 = &lbl_821C8ED0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = uVar5;
      }
      param_2[0x21] = puVar4;
    }
    puVar3[0x6b] = param_2[0x21];
    uVar5 = (**(int (***)())(*(int *)param_2[0x21] + 4))(param_1,(int *)param_2[0x21],param_5,puVar3);
    piVar6 = param_2 + 0x1c;
  }
  else {
    if (uVar1 < 3) {
      if (param_2[0x22] == 0) {
        puVar4 = (unsigned int *)fn_8265C9E0(0xc);
        if (puVar4 == (unsigned int *)0x0) {
          puVar4 = (unsigned int *)0x0;
        }
        else {
          puVar4[1] = param_2;
          puVar4[2] = 0;
          *puVar4 = &lbl_821C8EF8;
        }
        param_2[0x22] = puVar4;
      }
      if (param_2[0x20] == 0) {
        uVar2 = fn_8265C9E0(0xf4);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = fn_82581038(uVar2,param_2,*param_2);
        }
        param_2[0x20] = uVar5;
      }
      puVar3[0x6b] = param_2[0x22];
      piVar6 = (int *)param_2[0x22];
    }
    else {
      if (uVar1 == 3) {
        if (param_2[0x23] == 0) {
          puVar4 = (unsigned int *)fn_8265C9E0(0x18);
          if (puVar4 == (unsigned int *)0x0) {
            puVar4 = (unsigned int *)0x0;
          }
          else {
            uVar5 = *param_2;
            puVar4[1] = param_2;
            puVar4[2] = 0;
            puVar4[3] = 0;
            *puVar4 = &lbl_821C8F20;
            puVar4[4] = 0;
            puVar4[5] = uVar5;
          }
          param_2[0x23] = puVar4;
        }
        puVar3[0x6b] = param_2[0x23];
        piVar6 = (int *)param_2[0x23];
        goto LAB_82575ba4;
      }
      if (4 < uVar1) goto LAB_82575bd0;
      if (param_2[0x24] == 0) {
        puVar4 = (unsigned int *)fn_8265C9E0(0xc);
        if (puVar4 == (unsigned int *)0x0) {
          puVar4 = (unsigned int *)0x0;
        }
        else {
          puVar4[1] = param_2;
          puVar4[2] = 0;
          *puVar4 = &lbl_821C8F48;
        }
        param_2[0x24] = puVar4;
      }
      puVar3[0x6b] = param_2[0x24];
      piVar6 = (int *)param_2[0x24];
    }
    uVar5 = (**(int (***)())(*piVar6 + 4))(param_1,piVar6,param_5,puVar3);
    piVar6 = param_2 + 0x1a;
  }
  puVar3[0x74] = uVar5;
LAB_82575bd0:
  if (puVar3[0x74] == 0) {
    if (puVar3[0x6d] != 0) {
      if (*(char *)(puVar3 + 0x6a) == '\0') {
        if (*(char *)((int)puVar3 + 0x1a7) == '\0') {
          fn_8251FA58();
        }
        else {
          fn_82522ED8();
        }
      }
      puVar3[0x6d] = 0;
    }
    fn_82522ED8(puVar3);
    puVar3 = (unsigned int *)0x0;
  }
  else {
    uVar5 = param_2[0x2b];
    if (piVar6 != (int *)0x0) {
      if (*piVar6 == 0) {
        *piVar6 = (int)puVar3;
      }
      else {
        *(unsigned int **)(piVar6[1] + 0x1e4) = puVar3;
      }
      piVar6[1] = (int)puVar3;
    }
    *puVar3 = uVar5;
    param_2[0x2b] = param_2[0x2b] + 1;
    puVar3[0x6c] = puVar3[0x74];
  }
  return puVar3;
}

