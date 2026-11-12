/* Corresponds to libpng 1.0.5 pngrutil.c png_handle_gAMA (open-source libpng 1.0.5), as altered by D3DX: the upstream function with the declarations it uses, preprocessed, symbols renamed to the game's. */
typedef unsigned char  Byte;
typedef unsigned int   uInt;
typedef unsigned long  uLong;
typedef Byte   Bytef;
typedef void  *voidpf;
typedef voidpf (*alloc_func) (voidpf opaque, uInt items, uInt size);
typedef void   (*free_func)  (voidpf opaque, voidpf address);
typedef struct z_stream_s {
    Bytef    *next_in;
    uInt     avail_in;
    uLong    total_in;

    Bytef    *next_out;
    uInt     avail_out;
    uLong    total_out;

    char     *msg;
    struct internal_state  *state;

    alloc_func zalloc;
    free_func  zfree;
    voidpf     opaque;

    int     data_type;
    uLong   adler;
    uLong   reserved;
} z_stream;
struct internal_state {int dummy;};
typedef unsigned int size_t;
typedef double jmp_buf[168];
typedef unsigned long png_uint_32;
typedef long png_int_32;
typedef unsigned short png_uint_16;
typedef unsigned char png_byte;
typedef size_t png_size_t;
typedef void             * png_voidp;
typedef png_byte         * png_bytep;
typedef png_uint_16      * png_uint_16p;
typedef const char   * png_const_charp;
typedef char             * png_charp;
typedef png_uint_16      *  * png_uint_16pp;
typedef char             *  * png_charpp;
typedef struct png_color_struct
{
   png_byte red;
   png_byte green;
   png_byte blue;
} png_color;
typedef png_color  * png_colorp;
typedef struct png_color_16_struct
{
   png_byte index;
   png_uint_16 red;
   png_uint_16 green;
   png_uint_16 blue;
   png_uint_16 gray;
} png_color_16;
typedef png_color_16  * png_color_16p;
typedef struct png_color_8_struct
{
   png_byte red;
   png_byte green;
   png_byte blue;
   png_byte gray;
   png_byte alpha;
} png_color_8;
typedef struct png_text_struct
{
   int compression;
   png_charp key;
   png_charp text;
   png_size_t text_length;
} png_text;
typedef png_text  * png_textp;
typedef struct png_time_struct
{
   png_uint_16 year;
   png_byte month;
   png_byte day;
   png_byte hour;
   png_byte minute;
   png_byte second;
} png_time;
typedef struct png_info_struct
{

   png_uint_32 width;
   png_uint_32 height;
   png_uint_32 valid;
   png_uint_32 rowbytes;
   png_colorp palette;
   png_uint_16 num_palette;
   png_uint_16 num_trans;
   png_byte bit_depth;
   png_byte color_type;
   png_byte compression_type;
   png_byte filter_type;
   png_byte interlace_type;

   png_byte channels;
   png_byte pixel_depth;
   png_byte spare_byte;
   png_byte signature[8];

   float gamma;

   png_byte srgb_intent;

   png_bytep trans;
   png_color_16 trans_values;

   png_uint_32 x_offset;
   png_uint_32 y_offset;
   png_byte offset_unit_type;

   png_uint_32 x_pixels_per_unit;
   png_uint_32 y_pixels_per_unit;
   png_byte phys_unit_type;

   png_uint_16p hist;

   float x_white;
   float y_white;
   float x_red;
   float y_red;
   float x_green;
   float y_green;
   float x_blue;
   float y_blue;

   png_charp pcal_purpose;
   png_int_32 pcal_X0;
   png_int_32 pcal_X1;
   png_charp pcal_units;
   png_charpp pcal_params;
   png_byte pcal_type;
   png_byte pcal_nparams;
} png_info;
typedef png_info  * png_infop;
typedef struct png_row_info_struct
{
   png_uint_32 width;
   png_uint_32 rowbytes;
   png_byte color_type;
   png_byte bit_depth;
   png_byte channels;
   png_byte pixel_depth;
} png_row_info;
typedef png_row_info  * png_row_infop;
typedef struct png_struct_def png_struct;
typedef png_struct  * png_structp;
typedef void (*png_error_ptr) (png_structp, png_const_charp);
typedef void (*png_rw_ptr) (png_structp, png_bytep, png_size_t);
typedef void (*png_flush_ptr) (png_structp);
typedef void (*png_read_status_ptr) (png_structp, png_uint_32, int);
typedef void (*png_write_status_ptr) (png_structp, png_uint_32, int);
typedef void (*png_progressive_info_ptr) (png_structp, png_infop);
typedef void (*png_progressive_end_ptr) (png_structp, png_infop);
typedef void (*png_progressive_row_ptr) (png_structp, png_bytep, png_uint_32, int);
typedef void (*png_user_transform_ptr) (png_structp, png_row_infop, png_bytep);
struct png_struct_def
{
   jmp_buf jmpbuf;

   png_error_ptr error_fn;
   png_error_ptr warning_fn;
   png_voidp error_ptr;
   png_rw_ptr write_data_fn;
   png_rw_ptr read_data_fn;
   png_voidp io_ptr;


   png_uint_32 mode;
   png_uint_32 flags;
   png_uint_32 transformations;

   z_stream zstream;
   png_bytep zbuf;
   png_size_t zbuf_size;
   int zlib_level;
   int zlib_method;
   int zlib_window_bits;
   int zlib_mem_level;
   int zlib_strategy;

   png_uint_32 width;
   png_uint_32 height;
   png_uint_32 num_rows;
   png_uint_32 usr_width;
   png_uint_32 rowbytes;
   png_uint_32 irowbytes;
   png_uint_32 iwidth;
   png_uint_32 row_number;
   png_bytep prev_row;
   png_bytep row_buf;
   png_bytep sub_row;
   png_bytep up_row;
   png_bytep avg_row;
   png_bytep paeth_row;
   png_row_info row_info;

   png_uint_32 idat_size;
   png_uint_32 crc;
   png_colorp palette;
   png_uint_16 num_palette;
   png_uint_16 num_trans;
   png_byte chunk_name[5];
   png_byte compression;
   png_byte filter;
   png_byte interlaced;
   png_byte pass;
   png_byte do_filter;
   png_byte color_type;
   png_byte bit_depth;
   png_byte usr_bit_depth;
   png_byte pixel_depth;
   png_byte channels;
   png_byte usr_channels;
   png_byte sig_bytes;

   png_uint_16 filler;


   png_flush_ptr output_flush_fn;
   png_uint_32 flush_dist;
   png_uint_32 flush_rows;

   int gamma_shift;
   float gamma;
   float screen_gamma;

   png_bytep gamma_table;
   png_bytep gamma_from_1;
   png_bytep gamma_to_1;
   png_uint_16pp gamma_16_table;
   png_uint_16pp gamma_16_from_1;
   png_uint_16pp gamma_16_to_1;

   png_color_8 sig_bit;

   png_color_8 shift;

   png_bytep trans;
   png_color_16 trans_values;
   png_read_status_ptr read_row_fn;
   png_write_status_ptr write_row_fn;

   png_progressive_info_ptr info_fn;
   png_progressive_row_ptr row_fn;
   png_progressive_end_ptr end_fn;
   png_bytep save_buffer_ptr;
   png_bytep save_buffer;
   png_bytep current_buffer_ptr;
   png_bytep current_buffer;
   png_uint_32 push_length;
   png_uint_32 skip_length;
   png_size_t save_buffer_size;
   png_size_t save_buffer_max;
   png_size_t buffer_size;
   png_size_t current_buffer_size;
   int process_mode;
   int cur_palette;

   png_size_t current_text_size;
   png_size_t current_text_left;
   png_charp current_text;
   png_charp current_text_ptr;

   png_bytep palette_lookup;
   png_bytep dither_index;

   png_uint_16p hist;

   png_byte heuristic_method;
   png_byte num_prev_filters;
   png_bytep prev_filters;
   png_uint_16p filter_weights;
   png_uint_16p inv_filter_weights;
   png_uint_16p filter_costs;
   png_uint_16p inv_filter_costs;

   png_charp time_buffer;

   png_byte rgb_to_gray_status;
   png_byte rgb_to_gray_red_coeff;
   png_byte rgb_to_gray_green_coeff;
   png_byte rgb_to_gray_blue_coeff;

   png_byte empty_plte_permitted;
};
double fabs(double x);
extern void fn_829AB0F0 (png_structp png_ptr, png_const_charp message);
extern void png_warning (png_structp png_ptr, png_const_charp message);
extern void png_calculate_crc (png_structp png_ptr, png_bytep ptr, png_size_t length);
extern void png_read_data (png_structp png_ptr, png_bytep data, png_size_t length);
extern int fn_829B9B60 (png_structp png_ptr, png_uint_32 skip);
extern void png_set_gAMA (png_structp png_ptr, png_infop info_ptr, double file_gamma);

static __forceinline png_uint_32
png_get_uint_32(png_bytep buf)
{
   png_uint_32 i = ((png_uint_32)(*buf) << 24) +
      ((png_uint_32)(*(buf + 1)) << 16) +
      ((png_uint_32)(*(buf + 2)) << 8) +
      (png_uint_32)(*(buf + 3));

   return (i);
}

static __forceinline void
png_crc_read(png_structp png_ptr, png_bytep buf, png_size_t length)
{
   png_read_data(png_ptr, buf, length);
   png_calculate_crc(png_ptr, buf, length);
}

void
fn_829BA158(png_structp png_ptr, png_infop info_ptr, png_uint_32 length)
{
   png_uint_32 igamma;
   float file_gamma;
   png_byte buf[4];

   ;

   if (!(png_ptr->mode & 0x01))
      fn_829AB0F0(png_ptr, "Missing IHDR before gAMA");
   else if (png_ptr->mode & 0x04)
   {
      png_warning(png_ptr, "Invalid gAMA after IDAT");
      fn_829B9B60(png_ptr, length);
      return;
   }
   else if (png_ptr->mode & 0x02)

      png_warning(png_ptr, "Out of place gAMA chunk");

   else if (info_ptr != ((void *)0) && info_ptr->valid & 0x0001

      && !(info_ptr->valid & 0x0800)

      )
   {
      png_warning(png_ptr, "Duplicate gAMA chunk");
      fn_829B9B60(png_ptr, length);
      return;
   }

   if (length != 4)
   {
      png_warning(png_ptr, "Incorrect gAMA chunk length");
      fn_829B9B60(png_ptr, length);
      return;
   }

   png_crc_read(png_ptr, buf, 4);
   if (fn_829B9B60(png_ptr, 0))
      return;

   igamma = png_get_uint_32(buf);

   if (igamma == 0)
      return;

   if (info_ptr->valid & 0x0800)
      if(fabs((float)igamma - 45455.)>500.)
      {
         png_warning(png_ptr,
           "Ignoring incorrect gAMA value when sRGB is also present");

         return;
      }

   file_gamma = (float)igamma / (float)100000.0;

   png_ptr->gamma = file_gamma;

   png_set_gAMA(png_ptr, info_ptr, file_gamma);
}
