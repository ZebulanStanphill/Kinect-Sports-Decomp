typedef int INT32;
typedef struct jpeg_memory_mgr {
  void *(*alloc_small)(void *cinfo, int pool_id, unsigned int sizeofobject);
} jpeg_memory_mgr;

typedef struct {
  int pad[2];
  INT32 *rgb_ycc_tab;
} my_color_converter;

#define SCALEBITS 16
#define CBCR_OFFSET ((INT32) 128 << SCALEBITS)
#define ONE_HALF ((INT32) 1 << (SCALEBITS-1))
#define FIX(x) ((INT32) ((x) * (1L<<SCALEBITS) + 0.5))
#define MAXJSAMPLE 255
#define R_Y_OFF 0
#define G_Y_OFF (1*(MAXJSAMPLE+1))
#define B_Y_OFF (2*(MAXJSAMPLE+1))
#define R_CB_OFF (3*(MAXJSAMPLE+1))
#define G_CB_OFF (4*(MAXJSAMPLE+1))
#define B_CB_OFF (5*(MAXJSAMPLE+1))
#define R_CR_OFF B_CB_OFF
#define G_CR_OFF (6*(MAXJSAMPLE+1))
#define B_CR_OFF (7*(MAXJSAMPLE+1))
#define TABLE_SIZE (8*(MAXJSAMPLE+1))

void fn_827CFBC0(int cinfo)
{
  my_color_converter *cconvert = *(my_color_converter **)(cinfo + 0x150);
  INT32 *rgb_ycc_tab;
  INT32 i;

  cconvert->rgb_ycc_tab = rgb_ycc_tab = (INT32 *)
    (*(*(jpeg_memory_mgr **)(cinfo + 4))->alloc_small)((void *)cinfo, 1,
        (TABLE_SIZE * sizeof(INT32)));

  for (i = 0; i <= MAXJSAMPLE; i++) {
    rgb_ycc_tab[i+R_Y_OFF] = FIX(0.29900) * i;
    rgb_ycc_tab[i+G_Y_OFF] = FIX(0.58700) * i;
    rgb_ycc_tab[i+B_Y_OFF] = FIX(0.11400) * i     + ONE_HALF;
    rgb_ycc_tab[i+R_CB_OFF] = (-FIX(0.16874)) * i;
    rgb_ycc_tab[i+G_CB_OFF] = (-FIX(0.33126)) * i;
    rgb_ycc_tab[i+B_CB_OFF] = FIX(0.50000) * i    + CBCR_OFFSET + ONE_HALF-1;
    rgb_ycc_tab[i+G_CR_OFF] = (-FIX(0.41869)) * i;
    rgb_ycc_tab[i+B_CR_OFF] = (-FIX(0.08131)) * i;
  }
}
