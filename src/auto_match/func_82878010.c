extern unsigned int *auStack_60;
extern int fn_82811080();
extern int fn_82811400();
extern int fn_828647C0();
extern int fn_82877938();
extern int fn_82878A20();


unsigned __int64 fn_82878010(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  char cVar4;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar5;
  unsigned char auStack_60 [96];
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  for (uVar5 = (unsigned __int64)*(unsigned int *)(param_2 + 4); (uVar5 & 0xffffffff) != (unsigned __int64)uVar1;
      uVar5 = uVar5 + 0x30) {
    cVar4 = fn_828647C0(uVar5 + 4,param_3);
    if (cVar4 != '\0') break;
  }
  if ((uVar5 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_2 + 8)) {
    uVar2 = fn_82811400(auStack_60,4);
    uVar5 = fn_82811080(0xffffffff832116f8,0x30,uVar2);
    if ((uVar5 & 0xffffffff) == 0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      puVar3 = (unsigned int *)fn_82877938(param_1,uVar5,param_3,param_4);
    }
    fn_82878A20(param_2 + 4,puVar3);
    if (puVar3 != (unsigned int *)0x0) {
      (**(int (***)())*puVar3)(puVar3,1);
    }
    uVar2 = 0x20330000;
  }
  else {
    uVar2 = 0xffffffffa0320000;
  }
  return uVar2;
}

