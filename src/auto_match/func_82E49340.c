typedef struct { int a; unsigned int size; int base; int cur; } S;

int fn_82E49340(S *s, unsigned __int64 off)
{
  int hr = 0;
  if (off < s->size) {
    s->cur = s->base + (int)off;
  } else {
    hr = 0x80070057;
  }
  return hr;
}
