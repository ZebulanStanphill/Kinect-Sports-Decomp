typedef struct { char pad0[8]; unsigned int valid; char pad0c[0x1c]; float gamma; unsigned char srgb_intent; } Info_829AE270;

void fn_829AE270(void *png_ptr, Info_829AE270 *info_ptr, int intent)
{
  if (png_ptr == 0 || info_ptr == 0) {
    return;
  }
  info_ptr->srgb_intent = (unsigned char)intent;
  info_ptr->valid |= 0x800;
  info_ptr->gamma = (float).45455;
  info_ptr->valid |= 1;
}
