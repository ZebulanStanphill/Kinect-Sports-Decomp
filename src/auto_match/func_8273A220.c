extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_826972E0();
extern int fn_82739680();
extern int fn_82739A30();
extern unsigned int lbl_82011DF0;


void fn_8273A220(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  char cVar6;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned char *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  
  cVar6 = fn_82695468(param_1,0x23);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff8200eeb4,0,0);
  }
  else {
    iVar11 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar11 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1c)) {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      uVar4 = fn_826957D0(param_1,0);
      dVar12 = (double)fn_826972E0(uVar4,uVar2);
      uVar1 = (unsigned int)dVar12;
      fn_82739A30(param_1);
      dVar12 = (double)fn_826972E0(*(unsigned int *)(param_1 + 4),
                                         *(unsigned int *)(param_1 + 0x18));
      iVar10 = (int)dVar12;
      iVar7 = *(int *)(iVar11 + 0x58);
      iVar9 = 0;
      puVar8 = &lbl_82011DF0;
      if (0 < (int)uVar1) {
        puVar8 = &lbl_82011DF0;
        uVar5 = fn_82739680(*(unsigned int *)(iVar11 + 0x54));
        iVar9 = *(int *)(puVar8 + (int)(((uVar5 & 0xff) * 0xc + (unsigned __int64)uVar1 & 0xffffffff) << 2)
                                  + -4);
      }
      uVar5 = fn_82739680(*(unsigned int *)(iVar11 + 0x54));
      if (*(int *)(puVar8 + (int)(((uVar5 & 0xff) * 0xc + (unsigned __int64)uVar1 & 0xffffffff) << 2)) -
          iVar9 < iVar10) {
        iVar10 = *(int *)(puVar8 + (int)(((uVar5 & 0xff) * 0xc + (unsigned __int64)uVar1 & 0xffffffff) << 2
                                        )) - iVar9;
      }
      iVar10 = iVar9 + iVar10 + -1;
      *(int *)(iVar11 + 0x58) = iVar10;
      *(__int64 *)(iVar11 + 0x48) =
           (__int64)(iVar10 - iVar7) * 86400000 + *(__int64 *)(iVar11 + 0x48);
      puVar3 = *(unsigned char **)(param_1 + 4);
      fn_826959C8(puVar3);
      *puVar3 = 0;
    }
  }
  return;
}

