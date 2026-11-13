extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64 fn_82F48230(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned __int64 uStack_40;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if ((param_1[10] & 1U) == 0) {
    if ((param_4 == (unsigned int *)0x0) || ((param_3 != 0 && (param_2 == (unsigned int *)0x0)))) {
      uVar1 = 0xffffffff80070057;
    }
    else {
      uStack_40 = 0;
      uVar1 = (**(int (***)())(*param_1 + 0x18))(param_1,&uStack_40);
      if (-1 < (int)uVar1) {
        if (uStack_40 < 0x100000000) {
          *param_4 = (unsigned int)uStack_40;
          if (param_3 < (unsigned int)uStack_40) {
            uVar1 = 0xffffffffc00d36b1;
          }
          else {
            puVar5 = param_2 + 1;
            *param_2 = (unsigned int)*(unsigned char *)((int)param_1 + 0x27) << 0x18 |
                       (unsigned int)*(unsigned char *)((int)param_1 + 0x26) << 0x10 |
                       (unsigned int)*(unsigned char *)((int)param_1 + 0x25) << 8 | (unsigned int)*(unsigned char *)(param_1 + 9);
            iVar2 = (**(int (***)())(*param_1 + 0x50))(param_1);
            if (iVar2 != 0) {
              *(unsigned short *)puVar5 =
                   *(unsigned short *)(param_1 + 0x16) << 8 | *(unsigned short *)(param_1 + 0x16) >> 8;
              puVar5 = (unsigned int *)((int)param_2 + 6);
            }
            if (*(short *)(param_1 + 6) != 0) {
              uVar4 = 0;
              puVar3 = (unsigned __int64 *)(puVar5 + -2);
              do {
                iVar2 = uVar4 * 8;
                uVar4 = uVar4 + 1 & 0xffff;
                uVar1 = *(unsigned __int64 *)(iVar2 + param_1[0xb]);
                uStack_34 = (unsigned int)uVar1;
                uStack_38 = (unsigned int)(uVar1 >> 0x20);
                puVar3 = puVar3 + 1;
                *puVar3 = ((uVar1 & 0xff) << 0x18 |
                          (uVar1 & 0xff00) << 8 |
                          (unsigned __int64)(uStack_34 >> 8) & 0xff00 | (unsigned __int64)(uStack_34 >> 0x18)) <<
                          0x20 | ((unsigned __int64)uStack_38 & 0xff) << 0x18 |
                                 ((unsigned __int64)uStack_38 & 0xff00) << 8 |
                                 (unsigned __int64)(uStack_38 >> 8) & 0xff00 |
                                 (unsigned __int64)(uStack_38 >> 0x18);
              } while (uVar4 < *(unsigned short *)(param_1 + 6));
            }
            uVar1 = -(unsigned __int64)((param_1[10] & 1U) != 0) & 0xffffffff80004001;
          }
        }
        else {
          uVar1 = 0xffffffffc00d3a9a;
        }
      }
    }
  }
  else {
    uVar1 = 0xffffffff80004001;
  }
  return uVar1;
}

