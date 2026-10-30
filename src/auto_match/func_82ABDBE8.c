typedef struct M_82ABDBE8 { int pad[2]; unsigned int f; } M_82ABDBE8;
typedef struct O_82ABDBE8 { unsigned int w; int pad[2]; M_82ABDBE8 *m; } O_82ABDBE8;

static int h1(O_82ABDBE8 *a, O_82ABDBE8 *b)
{
  unsigned int y = b->w;
  unsigned int x = a->w;
  return ((x >> 0x1e) & 1) == ((y >> 0x1e) & 1) &&
         (((x >> 0x1e) & 1) == 0 || ((x ^ y) & 0x1ffe000) == 0);
}
static int h2(O_82ABDBE8 *a, O_82ABDBE8 *b)
{
  unsigned int y = b->w;
  unsigned int x = a->w;
  unsigned int ca, cb;
  if (((x ^ y) & 0x1f) != 0) return 0;
  cb = (y >> 0x19) & 7;
  ca = (x >> 0x19) & 7;
  return ca == cb &&
         (((((1 << (ca << 1)) - 1) & (x >> 5)) ^ (((1 << (cb << 1)) - 1) & (y >> 5))) & 0xff) == 0;
}
unsigned char fn_82ABDBE8(O_82ABDBE8 *a, O_82ABDBE8 *b)
{
  return (a->m == b->m ||
          ((a->m->f & 0x3f80) == 0x3c00 && (b->m->f & 0x3f80) == 0x3c00 && h1(a, b))) &&
         h2(a, b);
}
