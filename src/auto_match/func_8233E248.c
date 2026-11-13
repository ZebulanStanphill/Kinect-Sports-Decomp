extern int fn_822408B0();
extern int fn_82243568();
extern int fn_8224F2B8();
extern int fn_822CABC8();
extern int fn_8236D750();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


static __forceinline void bind(int owner,int sub,int resource,int off) {int v=fn_82897B18(resource);fn_82897600(owner,sub,v);*(int *)(sub+40)=*(int *)(owner+12);fn_82898220(sub,owner,resource,*(int *)(owner+4));}
static __forceinline void bindLast(int owner,int sub,int resource) {int v=fn_82897B18(resource);fn_82897600(owner,sub,v);*(int *)(sub+40)=*(int *)(owner+12);fn_82898220(sub,owner,resource,*(int *)(owner+4));v=fn_8236D750(resource);fn_82243568(sub+4,0,v,0);}
void fn_8233E248(int param_1)

{
  unsigned int uVar1;
  int lVar2;
  unsigned int uVar3;
  
  fn_822CABC8(param_1);
  uVar3 = (unsigned int)*(unsigned int *)(param_1 + 0x10);
  fn_822408B0(param_1 + 0x1ec,param_1,uVar3 + 0x20c);
  fn_8224F2B8(param_1 + 0x240,param_1,uVar3 + 0x264);
  bind(param_1,param_1+0x294,uVar3+700,700);
  bind(param_1,param_1+0x2e8,uVar3+0x314,0x310);
  bind(param_1,param_1+0x33c,uVar3+0x36c,0x364);
  bind(param_1,param_1+0x390,uVar3+0x3c4,0x3b8);
  fn_8224F2B8(param_1 + 0x3e4,param_1,uVar3 + 0x41c);
  fn_8224F2B8(param_1 + 0x438,param_1,uVar3 + 0x474);
  bind(param_1,param_1+0x48c,uVar3+0x4cc,0x4b4);
  bindLast(param_1,param_1+0x4e0,uVar3+0x524);
  fn_822408B0(param_1 + 0x534,param_1,uVar3 + 0x584);
  fn_8224F2B8(param_1 + 0x588,param_1,uVar3 + 0x5dc);
  fn_8224F2B8(param_1 + 0x5dc,param_1,uVar3 + 0x634);
  return;
}

