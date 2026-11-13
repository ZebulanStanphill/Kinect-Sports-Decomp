struct Cinfo_829BF260;
typedef struct {
  void *(*alloc_small)(struct Cinfo_829BF260 *, int, unsigned);
} Mem_829BF260;
typedef struct {
  void *start_pass;
  void *color_convert;
  int *Cr_r_tab;
  int *Cb_b_tab;
  int *Cr_g_tab;
  int *Cb_g_tab;
} Cconv_829BF260;
typedef struct Cinfo_829BF260 {
  void *err;
  Mem_829BF260 *mem;
  char pad[0x1cc - 8];
  Cconv_829BF260 *cconvert;
} Cinfo_829BF260;

void fn_829BF260(Cinfo_829BF260 *cinfo)
{
  Cconv_829BF260 *c = cinfo->cconvert;
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
