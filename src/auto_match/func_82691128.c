extern int fn_82693108();
extern int fn_82693208();
extern int fn_8270AA60();
extern unsigned int lbl_831F129C;


unsigned int * fn_82691128(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  char cVar3;
  int iVar4;
  
  puVar2 = (unsigned int *)(**(int (***)())(*(int *)*param_1 + 4))((int *)*param_1,param_2,0x1000);
  if (puVar2 != (unsigned int *)0x0) {
    iVar4 = (int)param_2;
    puVar2[2] = iVar4;
    puVar2[4] = 0;
    *(unsigned short *)(puVar2 + 3) = 8;
    *(unsigned short *)((int)puVar2 + 0xe) = 0xc;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    cVar3 = fn_82693108(lbl_831F129C,puVar2,param_2);
    if (cVar3 != '\0') {
      fn_82693208(lbl_831F129C,puVar2,param_2,puVar2);
      uVar1 = ((unsigned int)(((unsigned __int64)((unsigned int)(param_1[5] + iVar4) >> (param_1[4] & 0x3f)) + 0x1f &
                      0xffffffff) >> 3) & 0x1ffffffc) + 0x2f & 0xfffffff0;
      puVar2[6] = iVar4 - uVar1;
      puVar2[7] = uVar1 + (int)puVar2;
      puVar2[1] = param_1[3];
      *puVar2 = param_1 + 2;
      *(unsigned int **)param_1[3] = puVar2;
      param_1[3] = puVar2;
      fn_8270AA60(param_1 + 4,puVar2);
      param_1[0x6a] = param_1[0x6a] + puVar2[2];
      return puVar2;
    }
    (**(int (***)())(*(int *)*param_1 + 8))();
  }
  return (unsigned int *)0x0;
}

