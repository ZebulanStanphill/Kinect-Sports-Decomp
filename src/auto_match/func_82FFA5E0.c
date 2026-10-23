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
extern int fn_82FF9E88();
extern int fn_8302B530();
extern int fn_8302B540();
void RtlEnterCriticalSection(void *cs);
void RtlLeaveCriticalSection(void *cs);

typedef struct Node { struct Node *next; uint key; int value[1]; } Node;
typedef struct Map { char pad[0x50]; char cs[0x44]; Node *buckets[193]; } Map;

static int *find(Map *m, uint key)
{
  Node *n;
  for (n = m->buckets[key % 0xc1]; n != 0; n = n->next) {
    if (n->key == key) return n->value;
  }
  return 0;
}

undefined4 * fn_82FFA5E0(undefined4 *param_1,Map *param_2,uint param_3,int param_4)

{
  int *v;
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_8302B530();
  RtlEnterCriticalSection(param_2->cs);
  v = find(param_2, param_3);
  if (v != 0) {
    fn_82FF9E88(v,param_1,param_4);
  }
  RtlLeaveCriticalSection(param_2->cs);
  fn_8302B540();
  return param_1;
}
