typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_90;
extern unsigned int *auStack_cc;
extern int fn_8275E130();
extern int fn_8275E498();
extern int fn_8275FD58();
extern int fn_82760648();
extern unsigned int iStack_a0;
extern unsigned int iStack_d8;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;


unsigned __int64 fn_82761C48(int *param_1)

{
  bool bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  __int64 lVar5;
  unsigned char bStack_e1;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  int iStack_d8;
  unsigned char abStack_d1 [5];
  unsigned char auStack_cc [3];
  unsigned char bStack_c9;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned char abStack_b0 [16];
  int iStack_a0;
  unsigned char auStack_90 [20];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  char cStack_70;
  
  uStack_dc = 0;
  uStack_e0 = 0;
  (**(int (***)())(*param_1 + 0x44))(param_1,&uStack_dc,&uStack_e0);
  uVar3 = 0x1505;
  lVar5 = 4;
  iVar2 = 4;
  do {
    uVar3 = (unsigned __int64)*(unsigned char *)((int)&uStack_e0 + iVar2 + 3) ^ uVar3 * 0x21;
    lVar5 = lVar5 + -1;
    iVar2 = iVar2 + -1;
  } while (lVar5 != 0);
  lVar5 = 4;
  iVar2 = 4;
  do {
    uVar3 = (unsigned __int64)(&bStack_e1)[iVar2] ^ uVar3 * 0x21;
    lVar5 = lVar5 + -1;
    iVar2 = iVar2 + -1;
  } while (lVar5 != 0);
  fn_82760648(auStack_90,param_1);
  while (cStack_70 != '\x01') {
    uStack_c8 = uStack_7c;
    lVar5 = 0xc;
    uStack_c4 = uStack_78;
    uStack_c0 = uStack_74;
    iVar2 = 0xc;
    do {
      uVar3 = (unsigned __int64)(&bStack_c9)[iVar2] ^ uVar3 * 0x21;
      lVar5 = lVar5 + -1;
      iVar2 = iVar2 + -1;
    } while (lVar5 != 0);
    fn_8275FD58(&iStack_d8,auStack_90);
    fn_8275E130(&iStack_d8,abStack_d1 + 1,auStack_cc);
    lVar5 = 8;
    iVar2 = 8;
    do {
      uVar3 = (unsigned __int64)abStack_d1[iVar2] ^ uVar3 * 0x21;
      lVar5 = lVar5 + -1;
      iVar2 = iVar2 + -1;
    } while (lVar5 != 0);
    while( true ) {
      if ((*(unsigned char *)(iStack_d8 + 0x20) == 1) ||
         (bVar1 = false, (*(unsigned char *)(iStack_d8 + 0x20) & 0x80) == 0)) {
        bVar1 = true;
      }
      if (bVar1) break;
      fn_8275E498(&iStack_d8,abStack_b0);
      iVar2 = iStack_a0 * 4;
      if (iVar2 != 0) {
        pbVar4 = abStack_b0 + iVar2;
        do {
          pbVar4 = pbVar4 + -1;
          uVar3 = uVar3 * 0x21 ^ (unsigned __int64)*pbVar4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  return uVar3;
}

