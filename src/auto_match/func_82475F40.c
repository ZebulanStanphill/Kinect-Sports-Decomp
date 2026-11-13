extern int fn_82275128();
extern int fn_82292AE8();
extern int fn_82292BC0();
extern int fn_82292C30();
extern int fn_82474EA8();
extern int fn_82536070();
extern int fn_8254B438();
extern void fn_8255B1E0(int,int,int,int,int,int,int,float,int);


void fn_82475F40(int param_1)

{
  int iVar1;
  float dVar2;
  
  fn_82292BC0(0,0,0);
  fn_82292C30(4);
  iVar1 = fn_82292AE8();
  if (*(int *)(iVar1 + 0x54) != 0) {
    *(unsigned int *)(iVar1 + 0x54) = 0;
    fn_82536070("stadium_location","exterior");
  }
  fn_8254B438(*(unsigned int *)(*(int *)(param_1 + 0xc0) + 0x8c8));
  fn_82474EA8(param_1 + 0x10);
  if ((*(int *)(param_1 + 8) == 1) && (*(unsigned int *)(param_1 + 0x110) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 0x844);
    if ((unsigned int)iVar1 != 0) {
      fn_8255B1E0(iVar1,param_1 + 0x110,1,0,0,0,1,0.0f,0);
      dVar2 = *(float *)(*(int *)(iVar1 + 0x358) + 0x94);
      iVar1 = fn_82275128();
      if (dVar2 > *(float *)(iVar1 + 0xc)) {
        *(float *)(iVar1 + 0xc) = (float)dVar2;
      }
    }
  }
  return;
}

