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
extern int fn_8269D260();
extern int fn_8269DDA0();
extern int fn_826A0DD8();
typedef struct Key_826A0F98 { uint a; uint b; uint c; uint d; } Key_826A0F98;
typedef struct Slot_826A0F98 { Key_826A0F98 key; int val; } Slot_826A0F98;
typedef struct Ent_826A0F98 { uint pad[4]; Slot_826A0F98 s; } Ent_826A0F98;
typedef struct Tab_826A0F98 { Ent_826A0F98 *ents; } Tab_826A0F98;

void fn_826A0F98(Tab_826A0F98 *param_1,undefined8 param_2,int *param_3)
{
  Key_826A0F98 *k;
  Ent_826A0F98 *ents;
  int idx;
  ulonglong h;

  k = (Key_826A0F98 *)*param_3;
  h = (ulonglong)k->b;
  if ((k->a & 0x20000) != 0) {
    h = (longlong)*(short *)&k->c ^ h;
  }
  ents = param_1->ents;
  if (ents == 0 || (idx = fn_8269D260(param_1, param_3, *(uint *)((char *)ents + 4) & h), idx < 0)) {
    fn_826A0DD8(param_1, param_2, param_3, h);
  }
  else {
    Slot_826A0F98 *s = &ents[idx].s;
    s->key.a = k->a;
    s->key.b = k->b;
    s->key.c = k->c;
    s->key.d = k->d;
    fn_8269DDA0(&s->val, param_3[1]);
  }
}
