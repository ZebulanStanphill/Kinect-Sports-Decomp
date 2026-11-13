typedef struct Ring {
  __int64 *items;
  int capacity;
  int head;
  int tail;
  int count;
} Ring;

extern void fn_82CE96B0(Ring *r, int n);

void fn_82CE9810(Ring *r,__int64 *src)

{
  int n;
  __int64 *dst;

  if (r->count >= r->capacity) {
    if (r->capacity == 0) {
      fn_82CE96B0(r,8);
    } else {
      fn_82CE96B0(r,r->capacity * 2);
    }
  }
  if (r->tail == r->capacity) {
    r->tail = 0;
  }
  dst = r->items + r->tail * 16;
  for (n = 16; n != 0; n--) {
    *dst++ = *src++;
  }
  r->tail++;
  r->count++;
}
