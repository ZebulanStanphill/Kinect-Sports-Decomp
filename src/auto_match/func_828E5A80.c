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
extern int fn_822315A0();
extern unsigned char fn_8223AAC0(unsigned);
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_828BDDA0();
extern int fn_828BE208();
extern unsigned int lbl_82027360;
extern unsigned int lbl_82027368;

typedef struct Pair_828E5A80 { unsigned obj,rc; } Pair_828E5A80;
static __forceinline void WeakCopy_828E5A80(Pair_828E5A80 *d,Pair_828E5A80 *s) {
 unsigned r,p; d->obj=0;d->rc=0;r=s->rc;p=s->obj;
 if(r!=0 && fn_8223AAC0(r)) { if(d->rc!=0)fn_822315A0(d->rc);d->rc=r;d->obj=p; }
}

static __forceinline unsigned *Make_828E5A80(unsigned *p,Pair_828E5A80 *a,Pair_828E5A80 *b) {
 fn_828BDDA0(p);p[0]=(unsigned)&lbl_82027368;p[20]=(unsigned)&lbl_82027360;
 WeakCopy_828E5A80((Pair_828E5A80 *)(p+32),a);WeakCopy_828E5A80((Pair_828E5A80 *)(p+34),b);return p;
}

void fn_828E5A80(int param_1,undefined4 *param_2)
{
  int *piVar1;
  undefined4 uVar3;
  undefined4 *puVar6;
  unsigned it;

  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x210);
  it = *piVar1;
  if ((int *)it != piVar1) {
    do {
      { unsigned *mem=(unsigned *)fn_8265C9E0(0x90);
      puVar6=mem ? Make_828E5A80(mem,(Pair_828E5A80 *)(param_1+8),(Pair_828E5A80 *)param_2) : 0; }
      fn_82886518(puVar6,-1,-1);
      uVar3 = *(undefined4 *)(param_1 + 4);
      fn_828BE208(uVar3,puVar6,fn_823AA970(*(undefined4 *)(it + 0x10)),0);
      fn_82381BC0(&it);
    } while (it != *(int *)(*(int *)(param_1 + 4) + 0x210));
  }
  return;
}
