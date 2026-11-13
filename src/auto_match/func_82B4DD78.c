extern int fn_82AA6648();


unsigned int * fn_82B4DD78(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  int uVar5;
  
  if (param_2[1] & 1) { puVar3 = 0; } else { puVar3=(unsigned int *)((*param_2 & ~1u)-4); }
  iVar4 = puVar3[2] + 1;
  uVar5 = puVar3[2] - 1;
  {int off=iVar4*8;uVar2=*(unsigned int *)(off+(unsigned int)puVar3);uVar1=*(unsigned int *)(off+(unsigned int)puVar3+4);}
  puVar3[2] = uVar5;
  *param_1 = uVar2;
  param_1[1] = uVar1;
  if (uVar5 == 0) {
    unsigned int *p=(unsigned int *)((unsigned int)puVar3 & ~1u);
    *(unsigned int *)(p[1] & ~1u)=*p;
    *(unsigned int *)(*p & ~1u)=p[1];
    fn_82AA6648(param_2,puVar3,(puVar3[3]+2)*8);
  }
  return param_1;
}

