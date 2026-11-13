extern int fn_82A1E810();
extern int fn_82A1F2F8();
extern unsigned int lbl_83219BC4;
extern unsigned int lbl_83219C0C;
extern unsigned int lbl_83219C58;
extern unsigned int uRam83219c10;
extern unsigned int uRam83219c14;


void fn_82A20700(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  if (param_1 == 0) {
    uRam83219c10 = 0;
    lbl_83219C0C = (unsigned int)LZCOUNT(lbl_83219C58) >> 5;
  }
  else {
    iVar1 = fn_82A1F2F8();
    uVar3 = iVar1 + param_1 | 1;
    if ((uRam83219c10 != 0) && (uVar2 = uRam83219c10 - uVar3, uRam83219c10 = uVar3, 3599999 < uVar2)
       ) goto code_r0x82a207a4;
    lbl_83219C0C = 1;
    uRam83219c10 = uVar3;
  }
  uRam83219c14 = 0;
  fn_82A1E810(lbl_83219BC4);
code_r0x82a207a4:
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  return;
}

