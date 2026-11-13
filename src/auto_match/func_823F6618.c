extern unsigned int *auStack_40;
extern int fn_8265C9E0();
extern int fn_82F64538();
extern int memcpy();
extern unsigned int lbl_821B7AB0;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_823F6618(int *param_1,unsigned __int64 param_2,int *param_3)

{
  int in_r0;
  unsigned __int64 uVar1;
  char cVar3;
  unsigned int *puVar2;
  int iVar4;
  unsigned int *puVar5;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned char uStack_4c;
  unsigned char uStack_4b;
  unsigned char auStack_40 [32];
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar1 = 0xffffffff831d7088;
    }
    else {
      uVar1 = (**(int (***)())(*(int *)*param_3 + 4))();
    }
    cVar3 = fn_82F64538(uVar1,0xffffffff831df898);
    if (cVar3 != '\0') {
      iVar4 = *param_3 + 0x10;
      goto LAB_823f6688;
    }
  }
  iVar4 = 0;
LAB_823f6688:
  if (iVar4 == 0) {
    iVar4 = *param_1;
    stack_pair_60.second = 0xffffffff;
    stack_pair_60.first = 0xffffffff;
    uStack_4c = 0;
    puVar5 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
    uStack_4b = 0;
    uStack_58 = 0xffffffff;
    uStack_54 = 0xffffffff;
    uStack_50 = 0xffffffff;
    (**(int (***)())(iVar4 + 0x14))(param_1,param_2,&stack_pair_60.first);
    puVar2 = (unsigned int *)fn_8265C9E0(0x40);
    puVar5 = (unsigned int *)0x0;
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = &lbl_821B7AB0;
      memcpy(puVar2 + 4,&stack_pair_60.first,0x30);
      puVar5 = puVar2;
    }
    puVar2 = (unsigned int *)*param_3;
    *param_3 = (int)puVar5;
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
  }
  else {
    (**(int (***)())(*param_1 + 0x14))(param_1);
  }
  return;
}

