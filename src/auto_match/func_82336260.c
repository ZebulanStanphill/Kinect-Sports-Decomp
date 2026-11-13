extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82336760();
extern int fn_8235D230();
extern unsigned int uStack_7c;


void fn_82336260(int param_1,unsigned int *param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  char *pcVar5;
  unsigned int ***apppuStack_90 [5];
  unsigned int uStack_7c;
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  fn_8235D230(*param_2,param_1 + 0x68,param_1 + 0xf4);
  if (*(int *)(param_1 + 0x220) == 0) {
    uVar4 = 0xffffffff821adae8;
  }
  else {
    uVar4 = 0xffffffff821adae0;
  }
  pcVar5 = (char *)(param_1 + 0x134);
  uVar2 = fn_82230110(auStack_50,pcVar5);
  uVar4 = fn_82230110(auStack_70,uVar4);
  uVar4 = fn_82336760(uVar4,uVar2);
  fn_82240378(apppuStack_90,uVar4);
  fn_82230300(auStack_70,1,0);
  fn_82230300(auStack_50,1,0);
  if (uStack_7c < 0x10) {
    apppuStack_90[0] = apppuStack_90;
  }
  iVar3 = (int)apppuStack_90[0] - (int)pcVar5;
  do {
    if ((char *)(param_1 + 0x174) <= pcVar5) break;
    cVar1 = pcVar5[iVar3];
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 == (char *)(param_1 + 0x174)) {
    pcVar5[-1] = '\0';
  }
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x220);
  if (*(int *)(param_1 + 0x220) != 0) {
    *(float *)(param_1 + 0xb4) = -*(float *)(param_1 + 0xb4);
    *(float *)(param_1 + 0xa8) = -*(float *)(param_1 + 0xa8);
    *(float *)(param_1 + 200) = -*(float *)(param_1 + 200);
    *(float *)(param_1 + 0x174) = -*(float *)(param_1 + 0x174);
  }
  fn_82230300(apppuStack_90,1,0);
  return;
}

