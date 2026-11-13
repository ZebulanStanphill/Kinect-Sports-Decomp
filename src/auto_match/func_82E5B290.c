extern unsigned int *auStack_30;
extern int fn_82E5AF48();
extern int memcpy();


int
fn_82E5B290(int param_1,unsigned int param_2,unsigned int *param_3,unsigned short *param_4,unsigned int *param_5,
             unsigned int param_6)

{
  unsigned int lVar1;
  int uVar2;
  unsigned int *puVar3;
  unsigned int auStack_30;
  unsigned int n;
  
  if (((param_3 == (unsigned int *)0x0) || (param_4 == (unsigned short *)0x0)) ||
     ((param_2 & 0xffff) >= *(unsigned int *)(param_1 + 0xf4))) {
    return 0x80070057;
  }
  lVar1 = fn_82E5AF48(param_1 + 0x8c,param_2 & 0xffff,&auStack_30);
  puVar3 = (unsigned int *)(lVar1 ? auStack_30 : 0);
  *param_3 = *puVar3;
  param_3[1] = puVar3[1];
  param_3[2] = puVar3[2];
  param_3[3] = puVar3[3];
  *param_4 = *(unsigned short *)(puVar3 + 4);
  if (param_5 == (unsigned int *)0x0) {
LAB_82e5b360:
    uVar2 = 0;
  }
  else {
    if (param_6 == 0) {
      if (*param_5 > 0) {
        return 0x80070057;
      }
    }
    else if ((n = puVar3[5], *param_5 >= n)) {
      *param_5 = n;
      memcpy(param_6,puVar3[6],puVar3[5]);
      goto LAB_82e5b360;
    }
    uVar2 = 0xc00d36b1;
    *param_5 = puVar3[5];
  }
  return uVar2;
}

