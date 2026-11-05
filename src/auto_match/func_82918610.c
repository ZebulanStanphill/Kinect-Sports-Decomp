typedef struct VT_82918610 { int pad[3]; char *(*f0c)(struct O_82918610 *); } VT_82918610;
typedef struct O_82918610 { VT_82918610 *vt; } O_82918610;
extern void *memcpy(void *, const void *, unsigned);
int fn_82918610(O_82918610 *p, unsigned i, void *src, int unused, unsigned count)
{
  memcpy(p->vt->f0c(p) + i * 16, src, count * 16);
  return 0;
}
