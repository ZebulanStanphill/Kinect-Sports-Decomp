struct Reader_82E1F010 {
 virtual void vf00();
 virtual unsigned char vf04();
 virtual unsigned int vf08(int *);
};

extern "C" char lbl_8214B914[];



extern "C" int fn_8265C9E0(unsigned int);
extern "C" int fn_8265CAA0(unsigned int);
extern "C" int fn_82E1D550(void);
extern "C" int fn_82E1DAA0(unsigned int);
extern "C" int fn_82E1E6E0(int *,int,unsigned int);
extern "C" int fn_82E1E768(int *,int,unsigned int);
extern "C" int fn_82E1EE18(int *,const char *,const char *,const void *);
extern "C" int fn_82E1EE88(int *);
extern "C" int fn_82E1F690(const char *);
extern "C" unsigned int fn_82E20270(unsigned int,const char *,int);
extern "C" int fn_82E205A0(unsigned int,const char *);
extern "C" int fn_82E205F8(unsigned int,int);
extern "C" int fn_82E206E8(unsigned int);
extern "C" int fn_82E20790(unsigned int,int);
extern "C" int fn_82E208B0(unsigned int,unsigned int,const char *);
extern "C" int fn_82E20A98(unsigned int);
extern "C" int fn_82E21C18(unsigned int);
extern "C" int fn_82F64068(void *,unsigned int,unsigned int,const char *,...);
extern "C" int fn_82F67988(unsigned int);


extern "C" void fn_82E1F010(int *param_1)

{
  unsigned int uVar1;
  unsigned int iVar2;
  unsigned char cVar4;
  char *pcVar3;
  int aiStack_170 [4];
  unsigned char auStack_160 [310];
  
  if (*(char *)((int)param_1 + 9) == '\0') {
    return;
  }
  if ((unsigned int)*param_1 != 0) {
    fn_8265CAA0(*param_1);
    *param_1 = 0;
  }
  uVar1 = fn_82E206E8(param_1[0x15]);
  *param_1 = (int)uVar1;
  iVar2 = fn_82E20270(uVar1,"w",1);
  if (iVar2 == 0) {
    if (*(char *)(param_1[0x15] + 2) != '\0') goto LAB_82e1f104;
    fn_82F64068(auStack_160,0x136,0x135,"Error trying to open log file: %s; using Vince.log",*param_1);
    auStack_160[309] = 0;
    if ((unsigned int)*param_1 != 0) {
      fn_8265CAA0(*param_1);
      *param_1 = 0;
    }
    uVar1 = fn_82E1F690("Vince.log");
    *param_1 = (int)uVar1;
    iVar2 = fn_82E20270(uVar1,"a+",1);
    if (iVar2 == 0) goto LAB_82e1f104;
    fn_82F67988(iVar2);
    fn_82E1EE18(param_1,"LogWriter","Open",auStack_160);
  }
  else {
    fn_82F67988(iVar2);
  }
  *(unsigned char *)((int)param_1 + 10) = 1;
LAB_82e1f104:
  if (*(char *)(param_1[0x15] + 2) == '\0') {
    uVar1 = fn_82E20790(param_1[0x15],*param_1);
    fn_82E205A0(uVar1,lbl_8214B914);
    fn_82E205F8(uVar1,0);
    fn_82E208B0(param_1[0x15],uVar1,"Log Opened");
    *(int *)(param_1[0x15] + 4) = *(int *)(param_1[0x15] + 4) + 1;
    fn_82E20A98(param_1[0x15]);
  }
  if (*(char *)(param_1[0x15] + 1) != '\0') {
    if ((unsigned int)param_1[0x16] == 0) {
      iVar2 = fn_8265C9E0(0xc);
      if (iVar2 != 0) { iVar2 = fn_82E21C18(iVar2); } else { iVar2 = 0; }
      param_1[0x16] = iVar2;
    }
    cVar4 = (*(unsigned char (**)(int))(*(int *)param_1[0x16] + 4))(param_1[0x16]);
    if (cVar4 == '\0') {
      *(unsigned char *)((int)param_1 + 9) = 0;
      return;
    }
    aiStack_170[0] = 0;
    uVar1 = ((Reader_82E1F010 *)param_1[0x16])->vf08(aiStack_170);
    if (*(char *)((int)param_1 + 10) != '\0') {
      if (*(char *)((int)param_1 + 0xf) != '\0') { fn_82E1E768(param_1,aiStack_170[0],uVar1); } else { fn_82E1E6E0(param_1,aiStack_170[0],uVar1); }
    }
    if ((unsigned int)aiStack_170[0] != 0) {
      fn_8265CAA0(aiStack_170[0]);
    }
  }
  fn_82E1EE88(param_1);
  iVar2 = fn_82E1D550();
  pcVar3 = (char *)fn_82E1DAA0(*(unsigned int *)(iVar2 + 8));
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    fn_82E1EE18(param_1,"Settings","Load",pcVar3);
  }
  return;
}

