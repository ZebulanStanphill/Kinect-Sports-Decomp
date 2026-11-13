extern int fn_82F655D8();
extern int fn_82FB9918();
extern int fn_82FB9DE8();
extern int fn_82FB9EF0();
extern int fn_82FB9FC0();
extern float lbl_82005718;
extern unsigned int lbl_82015618;


void fn_82FBA158(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    iVar4 = *(int *)(param_1 + 0x40);
    cVar1 = *(char *)(iVar4 + 0x14);
    if (*(char *)(iVar4 + 0x48) != '\0') {
      fn_82FB9918(param_1,0,iVar4 + 4);
      *(unsigned char *)(*(int *)(param_1 + 0x40) + 0x48) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x40);
    cVar2 = *(char *)(iVar4 + 0x28);
    if (*(char *)(iVar4 + 0x49) != '\0') {
      fn_82FB9918(param_1,1,iVar4 + 0x18);
      *(unsigned char *)(*(int *)(param_1 + 0x40) + 0x49) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x40);
    cVar3 = *(char *)(iVar4 + 0x3c);
    if (*(char *)(iVar4 + 0x4a) != '\0') {
      fn_82FB9918(param_1,2,iVar4 + 0x2c);
      *(unsigned char *)(*(int *)(param_1 + 0x40) + 0x4a) = 0;
    }
    dVar5 = (double)fn_82F655D8(lbl_82015618,
                                      (double)(*(float *)(*(int *)(param_1 + 0x40) + 0x40) *
                                              lbl_82005718));
    dVar5 = (double)(float)dVar5;
    if (cVar1 != '\0') {
      fn_82FB9FC0(param_2,param_1 + 4,*(unsigned int *)(param_1 + 0x4c),
                      *(unsigned int *)(param_1 + 0x44));
    }
    if (cVar2 != '\0') {
      fn_82FB9FC0(param_2,param_1 + 0x18,
                      ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) & 0xfffffff) * 0x10 +
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x4c));
    }
    if (cVar3 != '\0') {
      fn_82FB9FC0(param_2,param_1 + 0x2c,
                      ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) & 0x7ffffff) * 0x20 +
                      (unsigned __int64)*(unsigned int *)(param_1 + 0x4c));
    }
    if (dVar5 == (double)*(float *)(param_1 + 0x50)) {
      fn_82FB9EF0(param_2);
    }
    else {
      fn_82FB9DE8((double)*(float *)(param_1 + 0x50),dVar5);
      *(float *)(param_1 + 0x50) = (float)dVar5;
    }
  }
  return;
}

