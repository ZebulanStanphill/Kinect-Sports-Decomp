typedef unsigned int uint;
typedef unsigned short wchar;

typedef struct {
  wchar *data;
  uint length;
  uint capacity;
} WStr;

extern void *fn_8267B890(int heap, uint size, int flags);
extern void *fn_8267BDA8(void *p, uint size);
extern void *memcpy(void *dst, const void *src, uint n);

void fn_82790490(WStr *str, int ctx, const wchar *src, uint len)
{
  if (len == 0xffffffff) {
    len = 0;
    while (src[len] != 0) {
      len++;
    }
  }
  if (str->capacity < len) {
    if (str->data == 0) {
      str->data = fn_8267B890(*(int *)(ctx + 0x1c), len << 1, 0);
    }
    else {
      str->data = fn_8267BDA8(str->data, len << 1);
    }
    str->capacity = len;
  }
  if (len != 0) {
    memcpy(str->data, src, len << 1);
  }
  str->length = len;
}
