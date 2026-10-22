typedef void *(*alloc_fn)(void *cinfo, int pool_id, unsigned int sizeofobject);

struct jpeg_memory_mgr {
  alloc_fn alloc_small;
};

typedef struct {
  void *start_pass;
  void *color_convert;
  int *Cr_r_tab;
  int *Cb_b_tab;
  int *Cr_g_tab;
  int *Cb_g_tab;
} my_color_deconverter;

typedef struct {
  void *err;
  struct jpeg_memory_mgr *mem;
  char pad[0x1a4 - 8];
  my_color_deconverter *cconvert;
} jpeg_decompress_struct;

void fn_827CA938(jpeg_decompress_struct *cinfo)
{
  my_color_deconverter *cconvert = cinfo->cconvert;
  int i;
  int x;

  cconvert->Cr_r_tab = (int *)(*cinfo->mem->alloc_small)(cinfo, 1, 256 * sizeof(int));
  cconvert->Cb_b_tab = (int *)(*cinfo->mem->alloc_small)(cinfo, 1, 256 * sizeof(int));
  cconvert->Cr_g_tab = (int *)(*cinfo->mem->alloc_small)(cinfo, 1, 256 * sizeof(int));
  cconvert->Cb_g_tab = (int *)(*cinfo->mem->alloc_small)(cinfo, 1, 256 * sizeof(int));

  for (i = 0, x = -128; i <= 255; i++, x++) {
    cconvert->Cr_r_tab[i] = (int)((91881 * x + 32768) >> 16);
    cconvert->Cb_b_tab[i] = (int)((116130 * x + 32768) >> 16);
    cconvert->Cr_g_tab[i] = (-46802) * x;
    cconvert->Cb_g_tab[i] = (-22554) * x + 32768;
  }
}
