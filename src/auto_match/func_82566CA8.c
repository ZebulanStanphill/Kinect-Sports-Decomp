extern unsigned int *auStack_60;
extern int fn_82512B08();
extern int fn_8251F720();
extern int fn_82566A18();
extern int fn_82567088();
extern int fn_82568260();
extern int fn_82568308();
extern int fn_82568980();
extern int fn_82568A30();
extern int fn_82569A68();
extern int fn_8265B648();
extern int fn_82A1EFC0();


unsigned __int64
fn_82566CA8(unsigned __int64 param_1,unsigned int *param_2,int *param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int aiStack_70 [4];
  unsigned char auStack_60 [96];
  
  iVar1 = fn_8251F720(param_3,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = fn_82566A18((double)*(float *)(iVar1 + 0xc),param_1,param_2,
                            *(unsigned char *)(iVar1 + 3),iVar1);
  *(int *)(iVar2 + 0x108) = *param_3;
  if (param_7 != 0) {
    uVar3 = fn_82512B08(1,1);
    *(unsigned int *)(iVar2 + 0x128) = uVar3;
  }
  fn_82568308(iVar2,*param_2,iVar1,param_4 & 4,param_2[0xda]);
  fn_82568260(iVar2,iVar1);
  if (*(int *)(*(int *)(iVar2 + 0xd0) + 0x1c) == 0) {
    aiStack_70[0] = *param_3;
    if (aiStack_70[0] == 0) {
      aiStack_70[0] = 0;
    }
    else {
      fn_8265B648(aiStack_70,9);
    }
    fn_82568A30(iVar2,aiStack_70);
  }
  else {
    fn_82568980(iVar2);
  }
  if (((*(char *)(iVar1 + 2) != '\0') && ((param_5 & 0xffffffff) != 0)) && (param_2[0xd6] == 0)) {
    fn_82567088(iVar2,param_5);
  }
  fn_82569A68(iVar2,1);
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_60,0,4);
}

