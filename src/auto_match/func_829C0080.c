struct Cinfo_829C0080;
typedef struct {
  void *(*alloc_small)(struct Cinfo_829C0080 *, int, unsigned);
} Mem_829C0080;
typedef struct {
  void *start_pass;
  void *color_convert;
  void *extra[2];
  int *Cr_r_tab;
  int *Cb_b_tab;
  int *Cr_g_tab;
  int *Cb_g_tab;
} Cconv_829C0080;
typedef struct Cinfo_829C0080 {
  void *err;
  Mem_829C0080 *mem;
  char pad[0x1c8 - 8];
  Cconv_829C0080 *cconvert;
} Cinfo_829C0080;

void fn_829C0080(Cinfo_829C0080 *cinfo)
{
  Cconv_829C0080 *c = cinfo->cconvert;
  int i, x;
  c->Cr_r_tab = (int *)cinfo->mem->alloc_small(cinfo, 1, 256 * sizeof(int));
  c->Cb_b_tab = (int *)cinfo->mem->alloc_small(cinfo, 1, 256 * sizeof(int));
  c->Cr_g_tab = (int *)cinfo->mem->alloc_small(cinfo, 1, 256 * sizeof(int));
  c->Cb_g_tab = (int *)cinfo->mem->alloc_small(cinfo, 1, 256 * sizeof(int));
  for (i = 0, x = -128; i <= 255; i++, x++) {
    c->Cr_r_tab[i] = (int)((91881 * x + 32768) >> 16);
    c->Cb_b_tab[i] = (int)((116130 * x + 32768) >> 16);
    c->Cr_g_tab[i] = (-46802) * x;
    c->Cb_g_tab[i] = (-22554) * x + 32768;
  }
}
