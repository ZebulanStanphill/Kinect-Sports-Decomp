extern int fn_82C10B28();
extern int fn_82C10F40();


unsigned __int64
fn_82C117F0(unsigned int *param_1,unsigned int *param_2,int *param_3,unsigned int *param_4,
             unsigned __int64 *param_5,unsigned int *param_6,unsigned int *param_7,unsigned int *param_8)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *puStack_70;
  int aiStack_6c;
  
  *param_2 = 0;
  puStack_70 = (unsigned int *)0x0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  aiStack_6c = 0;
  uVar2 = fn_82C10F40(param_1[0x12],*(unsigned char *)(param_1 + 0x18),&aiStack_6c);
  if (-1 < (int)uVar2) {
    if (*(int *)(aiStack_6c + 0x18) != 0) {
      puStack_70 = *(unsigned int **)(aiStack_6c + 0x18);
      if (puStack_70[0xd] != 0) {
        if (puStack_70[0xf] == 0) {
          *(unsigned int *)(aiStack_6c + 0x1c) = 0;
        }
        else {
          *(unsigned int *)(puStack_70[0xf] + 0x38) = 0;
        }
        *(unsigned int *)(aiStack_6c + 0x18) = puStack_70[0xf];
        uVar2 = (**(int (***)())(param_1[6] + 0x24))(param_1[6],*puStack_70);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        if (puStack_70[0xb] != 0) {
          fn_82C10B28(*param_1,0x20,puStack_70[0xb]);
          fn_82C10B28(*param_1,0x20,puStack_70 + 0xb);
        }
        fn_82C10B28(*param_1,0x20,&puStack_70);
        *(int *)(aiStack_6c + 0x14) = *(int *)(aiStack_6c + 0x14) + -1;
      }
      puStack_70 = *(unsigned int **)(aiStack_6c + 0x18);
      if (puStack_70 != (unsigned int *)0x0) {
        uVar2 = (**(int (***)())(param_1[6] + 0x20))(param_1[6],*puStack_70,param_2,param_3);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        if ((*(int *)(aiStack_6c + 0x28) != 0) &&
           (uVar3 = (**(int (***)())(param_1[5] + 8))
                              (param_1[5],*param_2,*param_3,puStack_70[0xb],
                               puStack_70[5] == puStack_70[6]), (int)uVar3 < 0)) {
          return uVar3;
        }
        puStack_70[6] = puStack_70[6] - *param_3;
        *param_5 = *(unsigned __int64 *)(puStack_70 + 8);
        *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(puStack_70 + 8);
        *param_7 = puStack_70[4];
        *param_8 = puStack_70[1];
        if ((puStack_70[0xc] == 0) && (*(int *)(aiStack_6c + 0x20) == 0)) {
          puStack_70[0xc] = 1;
          *param_6 = 1;
          *(int *)(aiStack_6c + 0x20) = *param_3;
        }
        else {
          *(int *)(aiStack_6c + 0x20) = *(int *)(aiStack_6c + 0x20) + *param_3;
        }
        if (*(int *)(aiStack_6c + 0x20) == puStack_70[4]) {
          *param_4 = 1;
          *(unsigned int *)(aiStack_6c + 0x20) = 0;
          bVar1 = *(unsigned char *)(param_1 + 0x18);
          iVar4 = (bVar1 >> 5) + 0x14;
          param_1[iVar4] =
               1 << ((unsigned int)bVar1 + ((int)(unsigned int)bVar1 >> 5) * -0x20 & 0x3f) | param_1[iVar4];
        }
        if ((int)uVar2 != 0x500001) {
          return uVar2;
        }
        puStack_70[0xd] = 1;
        return uVar2;
      }
    }
    uVar2 = 0xffffffff8050000b;
  }
  return uVar2;
}

