extern int fn_829AD570();


int fn_829ADBC8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x69];
  *(unsigned int *)(*param_1 + 0x14) = 0x79;
  *(int *)(*param_1 + 0x18) = iVar1;
  *(int *)(*param_1 + 0x1c) = param_2;
  (*(int (**)())(*param_1 + 4))(param_1,0xffffffff);
  do {
    if(iVar1<0xc0) iVar2=2;
    else {
      if(iVar1<0xd0 || iVar1>0xd7 || iVar1==((param_2+1)&7)+0xd0 || iVar1==((param_2+2)&7)+0xd0) iVar2=3;
      else if(iVar1==((param_2-1)&7)+0xd0 || iVar1==((param_2-2)&7)+0xd0) iVar2=2;
      else iVar2=1;
    }
    *(unsigned int *)(*param_1 + 0x14) = 0x61;
    *(int *)(*param_1 + 0x18) = iVar1;
    *(int *)(*param_1 + 0x1c) = iVar2;
    (*(int (**)())(*param_1 + 4))(param_1,4);
    switch(iVar2) {
    case 1:param_1[0x69]=0;return 1;
    case 2: if(fn_829AD570(param_1)==0) return 0; iVar1=param_1[0x69];break;
    case 3:return 1;
    }
  } while(1);
}
