extern unsigned int *auStack_34;
extern unsigned int fStack_3c;
extern int fn_8254BF20();
extern int fn_8254F968();
extern int fn_825500E8();
extern unsigned int iStack_38;


void fn_8254C1A0(int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puStack_40;
  float fStack_3c;
  int iStack_38;
  unsigned char auStack_34 [52];
  
  fStack_3c = *(float *)(*param_1 + 0x82c);
  puVar3 = (unsigned int *)param_1[0x17];
  puVar2 = (unsigned int *)((unsigned int *)param_1[0x17])[1];
  while (*(char *)((int)puVar2 + 0x29) == '\0') {
    if (fStack_3c <= (float)puVar2[3]) {
      puVar3 = puVar2;
      puVar2 = (unsigned int *)*puVar2;
    }
    else {
      puVar2 = (unsigned int *)puVar2[2];
    }
  }
  puStack_40 = *(unsigned int **)param_1[0x17];
  while (puVar2 = puStack_40, puStack_40 != puVar3) {
    iStack_38 = param_1[2];
    iVar1 = fn_8254BF20(param_1,puStack_40 + 4,&iStack_38,puStack_40 + 3,&fStack_3c);
    if (iVar1 == 0) {
      fn_825500E8(&puStack_40);
      fn_8254F968(auStack_34,param_1 + 0x16,puVar2);
    }
    else {
      fn_825500E8(&puStack_40);
    }
  }
  return;
}

