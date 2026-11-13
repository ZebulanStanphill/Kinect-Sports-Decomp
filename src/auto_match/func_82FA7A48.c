extern int fn_82FA73C8();
extern int fn_82FA7468();
extern int fn_82FA76F0();
extern int fn_82FA78F8();
extern int fn_82FAABA8();


void fn_82FA7A48(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28;
  int aiStack_20 [2];
  
  fn_82FA7468(param_2,aiStack_20);
  if ((*(unsigned int *)(aiStack_20[0] + 0xc) & 0x80000000) == 0) {
    uVar1 = *(unsigned int *)(aiStack_20[0] + 4);
    iStack_30 = 0;
    iVar2 = fn_82FA73C8(uVar1,&iStack_30,&uStack_2c,&auStack_28);
    if ((iVar2 <= 0) ||
       (iVar2 = fn_82FAABA8(*(unsigned int *)(iStack_30 + 0x38),param_2,auStack_28,uStack_2c),
       iVar2 != 1)) {
      fn_82FA78F8(uVar1,aiStack_20);
    }
  }
  else {
    *(unsigned int *)(aiStack_20[0] + 0xc) = *(unsigned int *)(aiStack_20[0] + 0xc) & 0xbfffffff;
    fn_82FA76F0();
  }
  return;
}

