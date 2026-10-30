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
typedef struct Vec3_827FE540 { float x, y, z; } Vec3_827FE540;
typedef struct Entity_827FE540 { char pad[0x30]; Vec3_827FE540 pos; } Entity_827FE540;

extern void fn_82800E88(unsigned int a, int *out);
extern void fn_827F9450(int h, unsigned int id, Entity_827FE540 **out);
extern void fn_827F98C8(int h, unsigned int id, int *out);
extern void fn_827F94C8(int a, Entity_827FE540 *e, Vec3_827FE540 *out);

void fn_827FE540(unsigned int param_1, unsigned short param_2, Vec3_827FE540 *param_3)
{
  Entity_827FE540 *e;
  int h;
  int other;
  Vec3_827FE540 v;

  fn_82800E88(param_1, &h);
  fn_827F9450(h, param_2, &e);
  fn_827F98C8(h, param_2, &other);
  fn_827F94C8(other, e, &v);
  e->pos.x = param_3->x - v.x;
  e->pos.y = param_3->y - v.y;
  e->pos.z = param_3->z - v.z;
}
