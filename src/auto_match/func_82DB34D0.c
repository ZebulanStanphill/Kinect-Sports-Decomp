extern unsigned __int64 __mftb(void);
#define TBLr 0
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_82CE5410();
extern int fn_830838A8();
extern int fn_83083AA0();
extern int fn_83083C28();
extern int fn_83085238();
extern int fn_830852B0();
extern int fn_830855B0();
extern int fn_83085650();
extern int fn_83097440();
extern int fn_83097530();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_4b;
extern unsigned int uStack_50;


void fn_82DB34D0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int iVar6;
  int uVar4;
  unsigned iVar7;
  unsigned uVar5;
  struct {unsigned handle,pad;int buffer[6];struct {unsigned value;unsigned char pad[1],flag,pad2[10];char a[16],b[16];} local;} ctx;
  fn_83097440(ctx.buffer,param_3,*(unsigned int *)(param_1 + 0x1c));
  iVar7 = *param_2;
  if (iVar7 != 0) {
    fn_83083AA0(iVar7);
    iVar6 = fn_82CE5410();
    (*(int (**)())(**(int **)(iVar6 + 0x10) + 8))(*(int **)(iVar6 + 0x10),iVar7,0x50);
  }
  uVar4 = fn_83097530(ctx.buffer);
  fn_830838A8(&ctx.local);
  piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x58);
  (*(int (**)())(*piVar1 + 0x40))(piVar1,ctx.local.a,ctx.local.b);
  ctx.local.value = (unsigned int)uVar4;
  ctx.local.flag = 0;
  iVar7 = fn_82CE5410();
  uVar5 = (*(int (**)())(**(int **)(iVar7 + 0x10) + 4))(*(int **)(iVar7 + 0x10),0x50);
  iVar7=uVar5!=0 ? fn_83083C28(uVar5,&ctx.local) : 0;
  *param_2 = iVar7;
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(unsigned int **)(iVar7 + 4);
  if (puVar2 < *(unsigned int **)(iVar7 + 0xc)) {
    *puVar2 = "TtbuildTreeSingleThreaded";
    uVar3 = __mftb();
    puVar2[1] = (int)uVar3;
    *(unsigned int **)(iVar7 + 4) = puVar2 + 3;
  }
  fn_83085238(&ctx.handle,uVar4);
  fn_830855B0(ctx.buffer,0,uVar4,ctx.handle);
  fn_83085650(&ctx.handle,*param_2);
  fn_830852B0(&ctx.handle,uVar4);
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(unsigned int **)(iVar7 + 4);
  if (puVar2 < *(unsigned int **)(iVar7 + 0xc)) {
    *puVar2 = "Et";
    uVar4 = (int)__mftb();
    puVar2[1] = (int)uVar4;
    *(unsigned int **)(iVar7 + 4) = puVar2 + 3;
  }
  return;
}

