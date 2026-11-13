/* GPU fetch constants (0x18 bytes each) addressed from the start of the device
   block, like the fn_82838CE8 setters; the dirty mask is at +0x18. */
typedef struct {
  unsigned int pad0 : 20;
  unsigned int f : 1;
  unsigned int pad1 : 11;
} W_82639D50;
typedef struct {
  unsigned int a;
  W_82639D50 w;
  unsigned int b[4];
} Fetch_82639D50;
typedef struct {
  char pad[0x18];
  unsigned __int64 dirty;
} Dev_82639D50;

void fn_82639D50(Dev_82639D50 *d, unsigned int i, unsigned int v)
{
  unsigned int k = i + 0x30;
  Fetch_82639D50 *f = (Fetch_82639D50 *)d + k;
  f->w.f = v == 0;
  d->dirty |= 0x8000000000000000ULL >> (i + 32);
}
