extern int fn_8265C9E0();
extern int fn_82835CF8();
extern int fn_82835E98();
extern int fn_82836048();
extern int fn_828365A8();
extern int fn_828366F8();
extern int fn_82836958();
extern unsigned int lbl_8201F2BC;


unsigned int * fn_82835A40(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 2) == 0) {
          if ((uVar1 & 4) == 0) {
            if ((uVar1 & 0x10) == 0) {
              puVar3 = (unsigned int *)fn_8265C9E0(0x14);
              if (puVar3 != (unsigned int *)0x0) {
                puVar3[1] = (int)param_1;
                puVar3[4] = param_2;
                puVar3[2] = 0;
                *puVar3 = &lbl_8201F2BC;
                puVar3[3] = 0;
                return puVar3;
              }
            }
            else {
              uVar2 = fn_8265C9E0(0x14);
              if ((uVar2 & 0xffffffff) != 0) {
                puVar3 = (unsigned int *)fn_82835CF8(uVar2,param_1,param_2);
                return puVar3;
              }
            }
          }
          else {
            uVar2 = fn_8265C9E0(0x14);
            if ((uVar2 & 0xffffffff) != 0) {
              puVar3 = (unsigned int *)fn_82835E98(uVar2,param_1,param_2);
              return puVar3;
            }
          }
        }
        else {
          uVar2 = fn_8265C9E0(0x14);
          if ((uVar2 & 0xffffffff) != 0) {
            puVar3 = (unsigned int *)fn_82836048(uVar2,param_1,param_2);
            return puVar3;
          }
        }
      }
      else {
        uVar2 = fn_8265C9E0(0x14);
        if ((uVar2 & 0xffffffff) != 0) {
          puVar3 = (unsigned int *)fn_828365A8(uVar2,param_1,param_2);
          return puVar3;
        }
      }
    }
    else {
      uVar2 = fn_8265C9E0(0x14);
      if ((uVar2 & 0xffffffff) != 0) {
        puVar3 = (unsigned int *)fn_828366F8(uVar2,param_1,param_2);
        return puVar3;
      }
    }
  }
  else {
    uVar2 = fn_8265C9E0(0x14);
    if ((uVar2 & 0xffffffff) != 0) {
      puVar3 = (unsigned int *)fn_82836958(uVar2,param_1,param_2);
      return puVar3;
    }
  }
  return (unsigned int *)0x0;
}

