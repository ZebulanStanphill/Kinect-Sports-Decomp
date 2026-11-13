extern unsigned int *auStack_240;
extern unsigned int *auStack_280;
extern int fn_82250A18();
extern int fn_82297868();
extern int fn_82297DB0();
extern int fn_8229B6C8();
extern int fn_8229C8C8();
extern int fn_8229C9C0();
extern int fn_8229CBD0();
extern int fn_82358FD8();
extern int fn_82F64CE0();
extern unsigned int iStack_290;
extern unsigned int iStack_2b0;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192604;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_28c;
extern unsigned int uStack_2ac;


void fn_8229B268(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  float fVar1;
  float fVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int *******pppppppuVar5;
  double dVar6;
  double dVar7;
  unsigned int ******appppppuStack_2c0 [4];
  int iStack_2b0;
  unsigned int uStack_2ac;
  unsigned int ******appppppuStack_2a0 [4];
  int iStack_290;
  unsigned int uStack_28c;
  unsigned char auStack_280 [64];
  unsigned char auStack_240 [576];
  
  fVar2 = ltcg_pool_0_0f;
  dVar7 = (double)ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0xc) != 0) {
    return;
  }
  if (((param_3 & 0xffffffff) == 0) && ((param_4 & 0xffffffff) == 0)) {
    return;
  }
  *(unsigned int *)(param_2 + 0x4c) = param_5;
  fn_82297DB0(appppppuStack_2c0,0,0);
  fn_82297DB0(appppppuStack_2a0,0,0);
  if ((param_3 & 0xffffffff) != 0) {
    uVar3 = fn_82F64CE0(param_3 + 0x30);
    fn_82297868(appppppuStack_2c0,param_3 + 0x30,uVar3);
  }
  if ((param_4 & 0xffffffff) != 0) {
    uVar3 = fn_82F64CE0(param_4 + 0x30);
    fn_82297868(appppppuStack_2a0,param_4 + 0x30,uVar3);
  }
  fn_82358FD8(*(unsigned int *)(param_2 + 0x4c),auStack_240,0x100,0xffffffff821aafa4);
  uVar3 = fn_82F64CE0(auStack_240);
  fn_82297868(param_2 + 0x70,auStack_240,uVar3);
  if (iStack_2b0 == 0) {
    pppppppuVar5 = appppppuStack_2a0;
  }
  else {
    if (iStack_290 != 0) {
      uVar3 = fn_82F64CE0(auStack_240);
      fn_82297868(param_2 + 0x8c,auStack_240,uVar3);
      if (uStack_28c < 8) {
        appppppuStack_2a0[0] = appppppuStack_2a0;
      }
      if (uStack_2ac < 8) {
        appppppuStack_2c0[0] = appppppuStack_2c0;
      }
      fn_8229C9C0(param_2,1,appppppuStack_2c0[0],auStack_240,appppppuStack_2a0[0],auStack_240);
      goto LAB_8229b400;
    }
    pppppppuVar5 = appppppuStack_2c0;
  }
  if ((unsigned int ******)0x7 < pppppppuVar5[5]) {
    pppppppuVar5 = (unsigned int *******)*pppppppuVar5;
  }
  fn_8229C8C8(param_2,0,pppppppuVar5,auStack_240,0xffffffff820e975c);
LAB_8229b400:
  if (((param_7 & 0xffffffff) != 0) && (iVar4 = thunk_FUN_82f64ce0(param_7), 0 < iVar4)) {
    fn_82358FD8(*(unsigned int *)(param_2 + 0x4c),auStack_280,0x20,0xffffffff821a8344);
    fn_8229CBD0(param_2,auStack_280,param_7);
  }
  iVar4 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar4 = fn_82250A18();
  }
  fVar1 = lbl_82192604;
  if (*(char *)(iVar4 + 4) != '\0') {
    fVar1 = lbl_821922D4;
  }
  dVar6 = (double)fVar1;
  if (fVar2 != 0.0) {
    dVar6 = dVar7;
  }
  fn_8229B6C8(dVar6,param_1,param_2);
  fn_82297DB0(appppppuStack_2a0,1,0);
  fn_82297DB0(appppppuStack_2c0,1,0);
  return;
}

