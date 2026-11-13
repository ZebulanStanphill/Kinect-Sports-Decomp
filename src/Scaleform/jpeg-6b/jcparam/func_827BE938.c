/* Corresponds to libjpeg 6b jcparam.c jpeg_set_quality (open-source IJG libjpeg 6b), with jpeg_quality_scaling inlined. */

typedef unsigned char boolean;
typedef struct jpeg_compress_struct * j_compress_ptr;

extern void jpeg_set_linear_quality (j_compress_ptr cinfo, int scale_factor,
                                     boolean force_baseline);

static __forceinline int
jpeg_quality_scaling (int quality)
{
  if (quality <= 0) quality = 1;
  if (quality > 100) quality = 100;

  if (quality < 50)
    quality = 5000 / quality;
  else
    quality = 200 - quality*2;

  return quality;
}

void
jpeg_set_quality (j_compress_ptr cinfo, int quality, boolean force_baseline)
{
  quality = jpeg_quality_scaling(quality);

  jpeg_set_linear_quality(cinfo, quality, force_baseline);
}
