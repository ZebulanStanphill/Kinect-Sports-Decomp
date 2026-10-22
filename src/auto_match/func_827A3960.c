typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82799C20();
extern int fn_8279C588();
extern int fn_827A36C0();
extern int fn_827AEE00();


typedef struct { unsigned a,b,c; unsigned char d; } Item;
static void copy(Item *d,const Item *s) {d->a=s->a; d->b=s->b; d->c=s->c; d->d=s->d;}
void fn_827A3960(int param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  if (*(byte *)(param_1 + 0xc0) < 10) {
    uVar2 = fn_8279C588(*(undefined4 *)(*(int *)(param_1 + 0xc) + 8));
    uVar1 = *(undefined4 *)((*(byte *)(param_1 + 0xc0) + 0x26) * 4 + param_1);
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) + 1;
    puVar3 = (undefined4 *)fn_827AEE00(uVar2,uVar1);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    iVar4 = param_4 * 0x10 + param_1;
    puVar3[2] = (int)param_2;
    puVar3[1] = (int)param_3;
    *puVar3 = uVar1;
    copy((Item *)(puVar3+6),(const Item *)(iVar4+0x44));
    fn_82799C20(*(undefined4 *)(*(int *)(param_1 + 0xc) + 8),puVar3);
    if ((param_3) != 0) {
      fn_827A36C0(*(int *)(param_1 + 0xc),param_2 + param_3 + *(uint *)(param_1 + 0x30)
                    ,0,*(byte *)(*(int *)(param_1 + 0xc) + 0x68) & 1);
      fn_827A36C0(*(int *)(param_1 + 0xc),param_2 + *(uint *)(param_1 + 0x30),0,
                    *(byte *)(*(int *)(param_1 + 0xc) + 0x68) & 1);
    }
  }
  return;
}

