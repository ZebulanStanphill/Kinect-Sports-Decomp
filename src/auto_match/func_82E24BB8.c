extern int fn_8265C990(void *, unsigned);
extern int fn_82E245F8(void *);

typedef struct { unsigned magic; } G;

int fn_82E24BB8(G **p)
{
  int hr = 0; G *q;
  if (p == 0) hr = 0x80004005;
  else {
    q = *p;
    hr = (q == 0 || q->magic != 0x476f6f64) ? 0x8000ffff : 0;
    if (hr == 0) { fn_82E245F8(q); fn_8265C990(q, 0x208c804d); *p = 0; }
  }
  return hr;
}