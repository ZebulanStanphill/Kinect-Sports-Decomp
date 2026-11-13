typedef struct Buf_82E23978 { int f0; int f4; int f8; int fc; } Buf_82E23978;
typedef struct Obj_82E23978 {
  char pad[0x74];
  Buf_82E23978 bufs[2];
  int ptrs[2];
  unsigned char cur;
  char pad2[3];
  char cs[1];
} Obj_82E23978;
typedef struct Item_82E23978 { int f0; int f4; int f8; } Item_82E23978;
extern __int64 fn_82E23588(Buf_82E23978 *, Item_82E23978 *, __int64);
extern int fn_82E23670(Buf_82E23978 *, int, int, int);
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);

__int64 fn_82E23978(Obj_82E23978 *o, int a, int b, Item_82E23978 *item, __int64 c)
{
  int idx;
  Buf_82E23978 *buf;
  __int64 r;

  item->f8 = a;
  RtlEnterCriticalSection(o->cs);
  idx = 1 - o->cur;
  buf = &o->bufs[idx];
  o->ptrs[idx] = b;
  if (buf->f0 != 0) {
    fn_82E23670(buf, 0, 0, 0);
  }
  r = fn_82E23588(buf, item, c);
  RtlLeaveCriticalSection(o->cs);
  return r;
}
