extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BA0FD8();
extern int fn_82BC0088();
extern int fn_82BD0A18();
extern unsigned int lbl_83223EC4;


unsigned int * fn_82BD0C10(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  
  param_1[3] = param_2;
  param_1[2] = param_4;
  param_1[4] = (int)param_3;
  *param_1 = 0;
  if ((int)param_3 != 0) {
    lbl_83223EC4 = fn_82B7BD28(*(unsigned int *)(param_4 + 0x5b0),(param_3 & 0x3fffffff) << 2);
    uVar2 = *(unsigned int *)(param_1[2] + 0x5b0);
    puVar1 = (unsigned int *)fn_82B7BD28(uVar2,0x14);
    puVar5 = puVar1 + 1;
    *puVar1 = uVar2;
    if (puVar5 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      fn_82BA03B8(puVar5,*(unsigned int *)(param_1[2] + 0x5b0));
    }
    lVar4 = 0;
    param_1[1] = puVar5;
    if (0 < (int)param_1[4]) {
      do {
        uVar2 = *(unsigned int *)(param_1[2] + 0x5b0);
        puVar1 = (unsigned int *)fn_82B7BD28(uVar2,0x18);
        *puVar1 = uVar2;
        if (puVar1 + 1 == (unsigned int *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82BD0A18(puVar1 + 1,lVar4,0,param_1[2]);
        }
        puVar1 = (unsigned int *)fn_82BC0088(param_1[1],*(unsigned int *)(param_1[1] + 4));
        lVar4 = lVar4 + 1;
        *puVar1 = uVar2;
      } while ((int)lVar4 < (int)param_1[4]);
    }
    uVar3 = (param_1[4] + -1) * param_1[4];
    uVar2 = fn_82BA0FD8((__int64)((int)uVar3 >> 1) +
                              (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0),
                              *(unsigned int *)(param_1[2] + 0x5b0));
    *param_1 = uVar2;
  }
  return param_1;
}

