#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_826C8C70();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_8276B308();
extern unsigned int uStack_3a;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;
extern unsigned int uStack_40;


void fn_8276E0C8(int param_1,int param_2)

{
  unsigned char uVar1;
  unsigned char uVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  unsigned char *puVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned short uStack_40;
  unsigned short uStack_3e;
  unsigned short uStack_3c;
  unsigned short uStack_3a;
  unsigned short *puStack_38;
  unsigned short *puStack_34;
  
  fn_826C8C70(param_2,0xffffffff82014f88,
                    ((unsigned __int64)*(unsigned int *)(param_2 + 0x34) - (unsigned __int64)*(unsigned int *)(param_2 + 0x30)) +
                    (unsigned __int64)*(unsigned int *)(param_2 + 0x2c));
  uVar7 = 0;
  uVar4 = *(unsigned int *)(param_1 + 0x24);
  if (uVar4 != 0) {
    iVar6 = param_1 + 0x2c;
    if ((*(unsigned int *)(param_1 + 0x14) >> 0xe & 1) == 0) {
      puStack_38 = &uStack_3a;
      puStack_34 = &uStack_3c;
      do {
        uStack_3c = (unsigned short)uVar7;
        *(unsigned char *)(param_2 + 0x15) = 0;
        if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 1) {
          fn_826E7990(param_2);
        }
        bVar3 = *(unsigned char *)(*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x3c));
        *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        uStack_3a = (unsigned short)bVar3;
        fn_8276B308(iVar6,iVar6,&puStack_38);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
    else {
      puStack_38 = &uStack_3e;
      puStack_34 = &uStack_40;
      do {
        uStack_40 = (unsigned short)uVar7;
        *(unsigned char *)(param_2 + 0x15) = 0;
        if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 2) {
          fn_826E7800(param_2,2);
        }
        puVar5 = (unsigned char *)(*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x3c));
        uVar1 = puVar5[1];
        uVar2 = *puVar5;
        *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 2;
        uStack_3e = CONCAT11(uVar1,uVar2);
        fn_8276B308(iVar6,iVar6,&puStack_38);
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
  }
  return;
}

