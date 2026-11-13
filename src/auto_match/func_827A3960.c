extern int fn_82799C20();
extern int fn_8279C588();
extern int fn_827A36C0();
extern int fn_827AEE00();


typedef struct { unsigned a,b,c; unsigned char d; } Item;
static void copy(Item *d,const Item *s) {d->a=s->a; d->b=s->b; d->c=s->c; d->d=s->d;}
void fn_827A3960(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  
  *(unsigned char *)(param_1 + 0x40) = 1;
  if (*(unsigned char *)(param_1 + 0xc0) < 10) {
    uVar2 = fn_8279C588(*(unsigned int *)(*(int *)(param_1 + 0xc) + 8));
    uVar1 = *(unsigned int *)((*(unsigned char *)(param_1 + 0xc0) + 0x26) * 4 + param_1);
    *(unsigned char *)(param_1 + 0xc0) = *(unsigned char *)(param_1 + 0xc0) + 1;
    puVar3 = (unsigned int *)fn_827AEE00(uVar2,uVar1);
    uVar1 = *(unsigned int *)(param_1 + 0x30);
    iVar4 = param_4 * 0x10 + param_1;
    puVar3[2] = (int)param_2;
    puVar3[1] = (int)param_3;
    *puVar3 = uVar1;
    copy((Item *)(puVar3+6),(const Item *)(iVar4+0x44));
    fn_82799C20(*(unsigned int *)(*(int *)(param_1 + 0xc) + 8),puVar3);
    if ((param_3) != 0) {
      fn_827A36C0(*(int *)(param_1 + 0xc),param_2 + param_3 + *(unsigned int *)(param_1 + 0x30)
                    ,0,*(unsigned char *)(*(int *)(param_1 + 0xc) + 0x68) & 1);
      fn_827A36C0(*(int *)(param_1 + 0xc),param_2 + *(unsigned int *)(param_1 + 0x30),0,
                    *(unsigned char *)(*(int *)(param_1 + 0xc) + 0x68) & 1);
    }
  }
  return;
}

