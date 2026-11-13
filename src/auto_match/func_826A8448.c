extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_82696330();
extern int fn_826A79D8();
extern int fn_826C1BA0();
extern int fn_826C1FF8();
extern unsigned int iStack_5c;
extern unsigned int iStack_70;


unsigned __int64
fn_826A8448(int *param_1,int param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  char cVar3;
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar4;
  unsigned int uVar5;
  int iVar6;
  int iStack_70;
  int aiStack_6c [3];
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_50 [16];
  
  iVar6 = param_2 + 0x78;
  if (*param_3 == *(int *)(*(int *)(param_2 + 0x78) + 0x11c)) {
    cVar3 = fn_82695608(param_4);
    *(char *)(param_1[8] + 0x2a4) = (cVar3 == '\0') + '\x01';
    iVar2 = param_1[8] + 0x254;
    if (*(char *)(param_1[8] + 0x2a4) == '\x01') {
      fn_82681728(aiStack_6c,iVar2,0xffffffff8200725c);
      auStack_60[0] = 5;
      iStack_5c = aiStack_6c[0];
      *(int *)(aiStack_6c[0] + 8) = *(int *)(aiStack_6c[0] + 8) + 1;
      fn_826A79D8(param_1,iVar6,0xffffffff82007250,auStack_60);
      fn_82696330(auStack_60);
      lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_6c[0] + 8) - 1;
      *(int *)(aiStack_6c[0] + 8) = (int)lVar4;
      iStack_70 = aiStack_6c[0];
    }
    else {
      fn_82681728(&iStack_70,iVar2,0xffffffff82007250);
      (**(int (***)())(*param_1 + 0x18))(param_1,iVar6,&iStack_70);
      lVar4 = (unsigned __int64)*(unsigned int *)(iStack_70 + 8) - 1;
      *(int *)(iStack_70 + 8) = (int)lVar4;
    }
    if (lVar4 == 0) {
      fn_826944C8(iStack_70);
    }
    auStack_50[0] = 10;
    uVar1 = fn_826C1BA0(param_1,param_2,param_3,auStack_50,param_5);
    fn_82696330(auStack_50);
  }
  else {
    if (((*(char *)(param_1[8] + 0x2a4) == '\x01') &&
        (*param_3 == *(int *)(*(int *)(param_2 + 0x78) + 0x120))) &&
       (iVar2 = (**(int (***)())(**(int **)(param_2 + 0x74) + 0x40))(), iVar2 != 0)) {
      cVar3 = fn_82695608(param_4,param_2);
      if (cVar3 == '\0') {
        uVar5 = *(unsigned int *)(iVar2 + 0xb00) & 0xfffff7ff;
      }
      else {
        uVar5 = *(unsigned int *)(iVar2 + 0xb00) | 0x800;
      }
      *(unsigned int *)(iVar2 + 0xb00) = uVar5;
    }
    uVar1 = fn_826C1FF8(param_1,iVar6,param_3,param_4,param_5);
  }
  return uVar1;
}

