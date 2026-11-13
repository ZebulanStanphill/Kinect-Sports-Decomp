typedef unsigned char bool;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b8;
extern unsigned int lbl_83219B8C;
extern unsigned int lbl_83219C4C;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


unsigned __int64 fn_82A1F9D0(unsigned int param_1,__int64 *param_2,int param_3,unsigned int *param_4)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lStack_c0;
  unsigned char auStack_b8 [8];
  __int64 lStack_b0;
  unsigned char auStack_a8 [8];
  unsigned char auStack_a0 [8];
  struct { unsigned int first; unsigned int second; } stack_pair_98;

  unsigned int uStack_90;
  unsigned char auStack_80 [32];
  __int64 lStack_60;
  
  stack_pair_98.first = 0xfffffffd;
  uStack_90 = 0x40;
  stack_pair_98.second = param_1;
  uVar3 = (**(int (***)())(lbl_83219B8C + 0xc))
                    (param_4,0xffffffffc0100000,&stack_pair_98.first,auStack_a8,0,0,0,(param_3 != 0) + '\x02')
  ;
  if ((uVar3 & 0xc0000000) != 0xc0000000) {
    do {
      if (lbl_83219C4C != 0) {
        NtClose(*param_4);
        return 0xffffffffc0000240;
      }
      uVar2 = *param_4;
      lVar4 = *param_2;
      uVar3 = NtQueryInformationFile(uVar2,auStack_a0,auStack_80,0x38,0x22);
      if ((uVar3 & 0xc0000000) != 0xc0000000) {
        lVar4 = lVar4 - lStack_60;
        bVar1 = 0x1000000 < lVar4;
        if (bVar1) {
          lVar4 = 0x1000000;
        }
        lStack_c0 = lStack_60 + lVar4;
        lStack_60 = lStack_c0;
        uVar3 = NtSetInformationFile(uVar2,auStack_b8,&lStack_c0,8,0x14);
        if (-1 < (int)uVar3) {
          lStack_b0 = lStack_60;
          uVar3 = NtSetInformationFile(uVar2,auStack_b8,&lStack_b0,8,0x13);
        }
        if (((uVar3 & 0xc0000000) != 0xc0000000) && (bVar1)) {
          uVar3 = 0x105;
        }
      }
    } while ((int)uVar3 == 0x105);
    if ((uVar3 & 0xc0000000) == 0xc0000000) {
      NtClose(*param_4);
      *param_4 = 0xffffffff;
    }
  }
  return uVar3;
}

