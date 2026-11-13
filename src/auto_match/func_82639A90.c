/* GPU fetch constants (0x18 bytes each) addressed from the start of the device
   block, like the fn_82838CE8 setters; the dirty mask is at +0x18. */
typedef struct {
  unsigned int pad0 : 30;
  unsigned int f : 2;
} W_82639A90;
typedef struct {
  unsigned int a[5];
  W_82639A90 w;
} Fetch_82639A90;
typedef struct {
  char pad[0x18];
  unsigned __int64 dirty;
} Dev_82639A90;

void fn_82639A90(Dev_82639A90 *d, unsigned int i, unsigned int v)
{
  unsigned int k = i + 0x30;
  Fetch_82639A90 *f = (Fetch_82639A90 *)d + k;
  f->w.f = v != 0;
  d->dirty |= 0x8000000000000000ULL >> (i + 32);
}
