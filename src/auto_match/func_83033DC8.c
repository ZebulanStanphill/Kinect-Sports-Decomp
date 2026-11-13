typedef unsigned char bool;
extern unsigned int *auStack_40;
extern int fn_8301B7B8();
extern int fn_83032B08();
extern int fn_83032D88();
extern int fn_830339D8();
extern unsigned fn_83033C70();
extern unsigned int iStack_30;
extern unsigned int lbl_832642F8;


static __forceinline void release_83033DC8(void ***p){if(lbl_832642F8){if(**p)fn_8301B7B8(lbl_832642F8,**p);}}
unsigned fn_83033DC8(int *param_1,int param_2)

{
  bool bVar1;
  unsigned iVar2;
  unsigned uVar3;
  struct {unsigned h[2];void **p;unsigned pad;unsigned ref;} state;
  
  uVar3 = 1;
  fn_830339D8(&state,*(unsigned int *)(param_2 + 0x78));
  iVar2 = fn_83033C70(param_1,*(unsigned int *)(*(int *)(param_2 + 0x78) + 0x10));
  if (iVar2 != 0) {
    fn_83032B08(iVar2);
  }
  {unsigned old=state.ref;state.ref=iVar2;if(old)fn_83032D88(old);}
  if (state.ref != 0) {
    *(unsigned char **)(param_2 + 0x78) = &state;
    uVar3 = (*(int (**)())(*param_1 + 0x154))(param_1,param_2);
    if ((int)uVar3 == 3) {
      uVar3 = 1;
    }
  }
  release_83033DC8(&state.p);
  if (state.ref != 0) {
    fn_83032D88(state.ref);
  }
  return uVar3;
}

