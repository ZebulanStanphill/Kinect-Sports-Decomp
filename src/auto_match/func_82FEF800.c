typedef struct Dev_82FEF800 Dev_82FEF800;
struct Dev_82FEF800 { void **vt; };
typedef struct Obj_82FEF800 {
  char pad[0x68];
  Dev_82FEF800 *dev;
  char pad6c[0xda - 0x6c];
  unsigned char flags;
} Obj_82FEF800;
extern void *fn_83005980(Dev_82FEF800 *dev);
void **fn_82FEF800(void **out, Obj_82FEF800 *o)
{
  unsigned char f = o->flags;
  *out = 0;
  if (f & 2)
    *out = fn_83005980(o->dev);
  else
    *out = ((void *(*)(Dev_82FEF800 *))o->dev->vt[0x7c / 4])(o->dev);
  return out;
}
