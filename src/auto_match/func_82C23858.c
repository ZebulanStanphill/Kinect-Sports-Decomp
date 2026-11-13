extern unsigned int *auStack_40;
extern int fn_82C10F40();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C11CB8();
extern unsigned int uStack_38;


unsigned __int64 fn_82C23858(int param_1,int param_2,unsigned char *param_3,int *param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_40 [4];
  unsigned char *puStack_3c;
  struct { unsigned int first; int second; } stack_pair_38;

  
  if (*param_4 == 0) {
    if (param_2 == 0x20050) {
      bVar1 = *param_3;
      stack_pair_38.first = 0;
      puStack_3c = (unsigned char *)0x0;
      uVar3 = fn_82C10F40(*(unsigned int *)(param_1 + 0x94),bVar1,&stack_pair_38.second);
      if ((-1 < (int)uVar3) &&
         (*(unsigned int *)(stack_pair_38.second + 100) = *(unsigned int *)(param_3 + 4),
         0 < *(short *)(*(int *)(param_1 + 4) + 0x48))) {
        uVar3 = fn_82C10F68(*(unsigned int *)(param_1 + 0x94),&stack_pair_38.first,&puStack_3c,auStack_40);
        if ((uVar3 & 0xffffffff) != 0x80500016) {
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          do {
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            if ((*(int *)(puStack_3c + 0x50) != 0) &&
               (uVar2 = 1 << ((unsigned int)bVar1 + ((int)(unsigned int)bVar1 >> 5) * -0x20 & 0x3f),
               (*(unsigned int *)(puStack_3c + ((bVar1 >> 5) + 0x15) * 4) & uVar2) == uVar2)) {
              *(unsigned int *)(puStack_3c + 100) = *(unsigned int *)(stack_pair_38.second + 100);
              uVar3 = fn_82C11CB8(*(unsigned int *)(puStack_3c + 100),*puStack_3c,puStack_3c + 0x54,
                                    *(unsigned int *)(puStack_3c + 0x40));
              if ((int)uVar3 < 0) {
                return uVar3;
              }
            }
            uVar3 = fn_82C10FD0(*(unsigned int *)(param_1 + 0x94),stack_pair_38.first,&puStack_3c,auStack_40);
          } while ((uVar3 & 0xffffffff) != 0x80500016);
        }
        uVar3 = fn_82C11038(*(unsigned int *)(param_1 + 0x94),stack_pair_38.first);
        uVar3 = -(unsigned __int64)(uVar3 != 0xffffffff80500016) & uVar3;
      }
    }
    else {
      uVar3 = 0xffffffff805000b2;
    }
  }
  else {
    uVar3 = 0;
    if (param_2 == 0x20030) {
      *(unsigned int *)(param_1 + 0xe4) = 0;
      if (param_4[1] < 0) {
        *(unsigned int *)(param_1 + 0xe8) = 1;
        uVar3 = (unsigned __int64)(unsigned int)param_4[1];
      }
      else {
        *(unsigned int *)(param_1 + 0xb4) = 0;
      }
    }
  }
  return uVar3;
}

