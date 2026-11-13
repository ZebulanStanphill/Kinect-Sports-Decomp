extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696BC8();
extern int fn_826A2AB8();
extern int fn_826A2CB0();
extern unsigned char fn_826B44A0();
extern int fn_826B4808(unsigned,void *,void *,int,unsigned char);
extern int fn_82705520();


unsigned int fn_82709170(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar4;
  unsigned char cVar6;
  int iVar5;
  unsigned int uVar2;
  unsigned int uVar3;
  int lVar7;
  struct { int ref[4]; char oldvalue[16]; unsigned char newvalue[16]; } locals;
  
  if (*(unsigned *)(param_1 + 0x68) == 0) {
    return 0;
  }
  else {
    iVar4 = (*(int (**)())(**(int **)(param_1 + 0x68) + 0x5c))(*(void **)(param_1+0x68));
    locals.ref[0] = fn_82694700((unsigned int)*(unsigned int *)(iVar4 + 0x78) + 0x254,param_2);
    *(int *)(locals.ref[0] + 8) = *(int *)(locals.ref[0] + 8) + 1;
    locals.oldvalue[0] = '\0';
    cVar6 = fn_826B44A0(iVar4,locals.ref,locals.oldvalue,0,0,0,0);
    if ((((cVar6 == '\0') || (locals.oldvalue[0] != '\x06')) ||
        (iVar4 = fn_82696958(locals.oldvalue,iVar4), iVar4 == 0)) ||
       (iVar5 = (*(int (**)())(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10), iVar5 != 7)) {
      lVar7 = fn_8267B890(*(unsigned int *)(param_1 + 0x14),0x48,0);
      if (lVar7 != 0) {
        uVar2 = (*(int (**)())(**(int **)(param_1 + 0x68) + 0x5c))(*(void **)(param_1+0x68));
        uVar3 = fn_826A2AB8(lVar7,uVar2);
      }
      else {
        uVar3 = 0;
      }
      fn_826A2CB0(uVar3,param_3);
      locals.newvalue[0] = 0;
      fn_82696BC8(locals.newvalue,uVar3);
      iVar4 = (int)param_4;
      uVar1 = fn_826B4808((*(int (**)())(**(int **)(param_1 + 0x68) + 0x5c))(*(void **)(param_1+0x68)),locals.ref,locals.newvalue,0,iVar4 == 0);
      if ((((uVar1 & 0xff) == 0) && (iVar4 != 0)) || (iVar4 == 2)) {
        fn_82705520(param_1,locals.ref,locals.newvalue,param_4);
      }
      fn_82696330(locals.newvalue);
      fn_82696330(locals.oldvalue);
      if ((uVar3 & 0xffffffff) != 0) {
        fn_826824B0(uVar3);
      }
      { int *ref=(int *)locals.ref[0]; if(--ref[2]==0)fn_826944C8(ref); }
    }
    else {
      *(unsigned int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
      if ((param_3 & 0xffffffff) != (unsigned int)*(unsigned int *)(iVar4 + 0x38)) {
        fn_826A2CB0(iVar4,param_3);
      }
      fn_82696330(locals.oldvalue);
      fn_826824B0(iVar4);
      { int *ref=(int *)locals.ref[0]; if(--ref[2]==0)fn_826944C8(ref); }
      return 1;
    }
  }
  return uVar1;
}

