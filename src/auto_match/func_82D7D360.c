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
struct Ent_82D7D360;
typedef struct { struct Ent_82D7D360 *e; int x; } Slot_82D7D360;
typedef struct { char pad[0x50]; Slot_82D7D360 *slots; } Tab_82D7D360;
typedef struct Ent_82D7D360 {
  union {
    int w[32];
    struct {
      int w0;
      unsigned short a;
      unsigned short b;
      int w2;
      int w3;
      Tab_82D7D360 *t0;
      Tab_82D7D360 *t1;
    };
  };
} Ent_82D7D360;
extern Ent_82D7D360 *fn_82D7CDB8(int);

void fn_82D7D360(int self, Ent_82D7D360 *src)
{
  Ent_82D7D360 *p = fn_82D7CDB8(self);
  unsigned short b;
  { Ent_82D7D360 **sub = &p;   (*sub)->w[0] = src->w[0];
  (*sub)->w[1] = src->w[1];
  (*sub)->w[2] = src->w[2];
  (*sub)->w[3] = src->w[3];
  (*sub)->w[4] = src->w[4];
  (*sub)->w[5] = src->w[5];
  (*sub)->w[6] = src->w[6];
  (*sub)->w[7] = src->w[7];
  (*sub)->w[8] = src->w[8];
  (*sub)->w[9] = src->w[9];
  (*sub)->w[10] = src->w[10];
  (*sub)->w[11] = src->w[11];
  (*sub)->w[12] = src->w[12];
  (*sub)->w[13] = src->w[13];
  (*sub)->w[14] = src->w[14];
  (*sub)->w[15] = src->w[15];
  (*sub)->w[16] = src->w[16];
  (*sub)->w[17] = src->w[17];
  (*sub)->w[18] = src->w[18];
  (*sub)->w[19] = src->w[19];
  (*sub)->w[20] = src->w[20];
  (*sub)->w[21] = src->w[21];
  (*sub)->w[22] = src->w[22];
  (*sub)->w[23] = src->w[23];
  (*sub)->w[24] = src->w[24];
  (*sub)->w[25] = src->w[25];
  (*sub)->w[26] = src->w[26];
  (*sub)->w[27] = src->w[27];
  (*sub)->w[28] = src->w[28];
  (*sub)->w[29] = src->w[29];
  (*sub)->w[30] = src->w[30];
  (*sub)->w[31] = src->w[31];
}
  b = p->b;
  p->t0->slots[p->a].e = p;
  p->t1->slots[b].e = p;
}
