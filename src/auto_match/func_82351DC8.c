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
typedef struct { int m0; int m4; int m8; int mc; int m10; int m14; int m18; int m1c; } G_82351DC8;
typedef struct { int m0; int m4; int m8; } O_82351DC8;
extern G_82351DC8 *fn_8225F160(void);
extern float lbl_82192438[];
extern float lbl_831C6E2C[];
extern unsigned int lbl_832765BC;

float fn_82351DC8(O_82351DC8 *o)
{
  if ((o->m8 == 0xd || o->m8 == 0xe) && fn_8225F160()->mc == 1 && fn_8225F160()->m1c == 0) {
    return lbl_82192438[-90];
  }
  if (fn_8225F160()->m0 == 0 || fn_8225F160()->m0 != 1 || lbl_832765BC == 0) {
    return lbl_82192438[18];
  }
  return lbl_831C6E2C[7];
}
