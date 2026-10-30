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
typedef struct A_824D03B8 { char pad[0x138]; float f138; char pad1[0x204 - 0x13c]; int f204; float f208; char pad2[0x254 - 0x20c]; float f254; } A_824D03B8;
typedef struct B_824D03B8 { char pad[0x90]; int f90; float f94; char pad1[0xb8 - 0x98]; int fb8; } B_824D03B8;
typedef struct Slot_824D03B8 {
  char pad[0x344]; float f344; float f348; char pad1[0x394 - 0x34c]; int f394; float f398; float f39c; float f3a0; int f3a4; int f3a8; float f3ac;
  char pad2[0x1c10 - 0x3b0];
} Slot_824D03B8;
typedef struct Obj_824D03B8 { char pad[0x3a00]; A_824D03B8 *f3a00; int f3a04; B_824D03B8 *f3a08; } Obj_824D03B8;
extern float lbl_821CC160;

void fn_824D03B8(Obj_824D03B8 *o, int idx, int on, float t)
{
  A_824D03B8 *a;
  B_824D03B8 *b;
  Slot_824D03B8 *s;

  a = o->f3a00;
  if (a != 0 && a->f204 != 0 && on != 0 && (s = &((Slot_824D03B8 *)o)[idx], s->f394 == 0)) {
    b = o->f3a08;
    if (b->fb8 != 0) {
      if (b->f90 != 0) {
        s->f3a0 = b->f94;
      } else {
        s->f3a0 = a->f208;
      }
      s->f3a8 = 1;
      s->f3ac = s->f348 + o->f3a00->f254;
    }
    s->f344 = lbl_821CC160;
  }
  s = &((Slot_824D03B8 *)o)[idx];
  s->f394 = on;
  s->f398 = t;
  if (o->f3a00 == 0) {
    return;
  }
  if (on == 0) {
    return;
  }
  s->f39c = o->f3a00->f138;
}
