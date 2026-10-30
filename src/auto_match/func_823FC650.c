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
extern void *fn_82365BD8(void *, void *);
extern int fn_822315A0(void *);
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B7354;
typedef struct Str_823FC650 { int f0; void *f4; } Str_823FC650;
typedef struct Sub_823FC650 { void *vt; void *f4; int pad[4]; Str_823FC650 a; Str_823FC650 b; Str_823FC650 c; Str_823FC650 d; } Sub_823FC650;
typedef struct Ob_823FC650 { void *vt; int f4; int f8; Sub_823FC650 sub; } Ob_823FC650;

Ob_823FC650 *fn_823FC650(Ob_823FC650 *param_1, void *param_2, void *param_3, void *param_4, void *param_5)
{
  Str_823FC650 *iVar1;
  Str_823FC650 *iVar2;
  Str_823FC650 *iVar3;
  Str_823FC650 *iVar4;
  Str_823FC650 t5;
  Str_823FC650 t4;
  Str_823FC650 t3;
  Str_823FC650 t2;
  Sub_823FC650 *s;

  param_1->f4 = 1;
  param_1->vt = &lbl_821AD588;
  param_1->f8 = 1;
  s = &param_1->sub;
  if (s != 0) {
    iVar1 = (Str_823FC650 *)fn_82365BD8(&t5, param_5);
    iVar2 = (Str_823FC650 *)fn_82365BD8(&t4, param_4);
    iVar3 = (Str_823FC650 *)fn_82365BD8(&t3, param_3);
    iVar4 = (Str_823FC650 *)fn_82365BD8(&t2, param_2);
    s->f4 = 0;
    s->vt = &lbl_821B7354;
    fn_82365BD8(&s->a, iVar4);
    fn_82365BD8(&s->b, iVar3);
    fn_82365BD8(&s->c, iVar2);
    fn_82365BD8(&s->d, iVar1);
    if (iVar4->f4 != 0) {
      fn_822315A0(iVar4->f4);
    }
    if (iVar3->f4 != 0) {
      fn_822315A0(iVar3->f4);
    }
    if (iVar2->f4 != 0) {
      fn_822315A0(iVar2->f4);
    }
    if (iVar1->f4 != 0) {
      fn_822315A0(iVar1->f4);
    }
  }
  return param_1;
}
