typedef unsigned char bool;
extern unsigned int lbl_831769B8;


void fn_830B8F48(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  bool bVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned char *puVar7;
  unsigned __int64 uVar8;
  
  uVar4 = 0;
  uVar2 = (unsigned int)(*(unsigned short *)(param_2 + 0x34) >> 1);
  uVar1 = (unsigned __int64)(*(unsigned short *)(param_2 + 0x32) >> 1);
  if (uVar2 != 0) {
    puVar7 = (unsigned char *)(*(int *)(param_2 + 0x524) + -1);
    do {
      iVar6 = 0;
      if (uVar1 != 0) {
        uVar8 = uVar1;
        do {
          bVar3 = iVar6 == 0;
          iVar6 = iVar6 + 1;
          uVar5 = *(unsigned __int64 *)
                   (&lbl_831769B8 + ((unsigned int)bVar3 + ((unsigned int)((unsigned __int64)LZCOUNT(uVar4) >> 4) & 2)) * 8
                   ) & 0xf0f0f0f0f0f;
          puVar7[1] = (char)uVar5;
          puVar7[2] = (char)(uVar5 >> 8);
          puVar7[3] = (char)(uVar5 >> 0x10);
          puVar7[4] = (char)(uVar5 >> 0x18);
          puVar7[5] = (char)(uVar5 >> 0x20);
          puVar7 = puVar7 + 6;
          *puVar7 = (char)(uVar5 >> 0x28);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

