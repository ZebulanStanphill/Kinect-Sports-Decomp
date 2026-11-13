extern unsigned int *auStack_30;
extern int fn_826338A0();


void fn_82634000(char param_1,char param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int *param_5,
                  int *param_6)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned int auStack_30;
  
  if ((param_1 == '\0') && (param_2 == '\0')) {
    iVar4 = fn_826338A0(param_5,&auStack_30);
    if (iVar4 != 0) {
      uVar2 = *param_5;
      uVar5 = 0;
      lVar6 = 4;
      do {
        if ((1 << (uVar5 & 0x3f) & auStack_30) != 0) {
          bVar1 = *(unsigned char *)(((uVar2 & 0x3f) + 4) * 4 + uVar5 + (int)param_6);
          if (bVar1 != 0xff) {
            iVar4 = *param_6;
            iVar3 = (bVar1 + 0x28) * 2;
            *(unsigned int *)(((*(unsigned short *)((unsigned int)bVar1 * 4 + iVar4) & 0xfff) +
                      (unsigned int)*(unsigned short *)(iVar3 + (int)param_6)) * 4 + param_6[2]) = param_4 & 0xfff;
            *(short *)(iVar3 + (int)param_6) = *(short *)(iVar3 + (int)param_6) + 1;
            auStack_30 = auStack_30 & ~(*(unsigned int *)((unsigned int)bVar1 * 4 + iVar4) >> 0xc & 0xf);
          }
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  return;
}

