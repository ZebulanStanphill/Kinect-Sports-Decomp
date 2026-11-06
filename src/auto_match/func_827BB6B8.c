/* libjpeg jdmarker.c get_sof (open-source IJG libjpeg 6b). */
typedef unsigned char JOCTET;
typedef unsigned char boolean;
typedef unsigned int JDIMENSION;
typedef long INT32;
typedef struct jpeg_common_struct_827BB6B8 *j_common_ptr;
typedef struct jpeg_decompress_struct_827BB6B8 *j_decompress_ptr;

struct jpeg_error_mgr_827BB6B8 {
  void (*error_exit)(j_common_ptr cinfo);
  void (*emit_message)(j_common_ptr cinfo, int msg_level);
  int pad8[3];
  int msg_code;
  int msg_parm[8];
};

struct jpeg_memory_mgr_827BB6B8 {
  void *(*alloc_small)(j_common_ptr cinfo, int pool_id, unsigned int sizeofobject);
};

struct jpeg_source_mgr_827BB6B8 {
  const JOCTET *next_input_byte;
  unsigned int bytes_in_buffer;
  void (*init_source)(j_decompress_ptr cinfo);
  boolean (*fill_input_buffer)(j_decompress_ptr cinfo);
};

typedef struct jpeg_component_info_827BB6B8 {
  int component_id;
  int component_index;
  int h_samp_factor;
  int v_samp_factor;
  int quant_tbl_no;
  int pad14[16];
} jpeg_component_info_827BB6B8;

struct jpeg_marker_reader_827BB6B8 {
  int pad0[3];
  boolean pad_c;
  boolean saw_SOF;
};

struct jpeg_decompress_struct_827BB6B8 {
  struct jpeg_error_mgr_827BB6B8 *err;
  struct jpeg_memory_mgr_827BB6B8 *mem;
  int pad8[4];
  struct jpeg_source_mgr_827BB6B8 *src;
  JDIMENSION image_width;
  JDIMENSION image_height;
  int num_components;
  int pad28[38];
  int data_precision;
  jpeg_component_info_827BB6B8 *comp_info;
  boolean progressive_mode;
  boolean arith_code;
  char padca[0xb2];
  int unread_marker;
  int pad180[5];
  struct jpeg_marker_reader_827BB6B8 *marker;
};

#define JPOOL_IMAGE 1
#define GETJOCTET(value) (value)
#define MAKESTMT(stuff) do { stuff } while (0)
#define INPUT_VARS(cinfo) struct jpeg_source_mgr_827BB6B8 *datasrc = (cinfo)->src; const JOCTET *next_input_byte = datasrc->next_input_byte; unsigned int bytes_in_buffer = datasrc->bytes_in_buffer
#define INPUT_SYNC(cinfo) MAKESTMT( datasrc->next_input_byte = next_input_byte; datasrc->bytes_in_buffer = bytes_in_buffer; )
#define MAKE_BYTE_AVAIL(cinfo,action) if (bytes_in_buffer == 0) { if (!(*datasrc->fill_input_buffer)(cinfo)) { action; } next_input_byte = datasrc->next_input_byte; bytes_in_buffer = datasrc->bytes_in_buffer; }
#define INPUT_BYTE(cinfo,V,action) MAKESTMT( MAKE_BYTE_AVAIL(cinfo,action); bytes_in_buffer--; V = GETJOCTET(*next_input_byte++); )
#define INPUT_2BYTES(cinfo,V,action) MAKESTMT( MAKE_BYTE_AVAIL(cinfo,action); bytes_in_buffer--; V = ((unsigned int) GETJOCTET(*next_input_byte++)) << 8; MAKE_BYTE_AVAIL(cinfo,action); bytes_in_buffer--; V += GETJOCTET(*next_input_byte++); )
#define ERREXIT(cinfo,code) ((cinfo)->err->msg_code = (code), (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
#define TRACEMS4(cinfo,lvl,code,p1,p2,p3,p4) MAKESTMT(int * _mp = (cinfo)->err->msg_parm; _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); _mp[3] = (p4); (cinfo)->err->msg_code = (code); (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); )

boolean fn_827BB6B8(j_decompress_ptr cinfo, boolean is_prog, boolean is_arith)
{
  INT32 length;
  int c, ci;
  jpeg_component_info_827BB6B8 *compptr;
  INPUT_VARS(cinfo);

  cinfo->progressive_mode = is_prog;
  cinfo->arith_code = is_arith;

  INPUT_2BYTES(cinfo, length, return 0);

  INPUT_BYTE(cinfo, cinfo->data_precision, return 0);
  INPUT_2BYTES(cinfo, cinfo->image_height, return 0);
  INPUT_2BYTES(cinfo, cinfo->image_width, return 0);
  INPUT_BYTE(cinfo, cinfo->num_components, return 0);

  length -= 8;

  TRACEMS4(cinfo, 1, 100, cinfo->unread_marker,
           (int) cinfo->image_width, (int) cinfo->image_height,
           cinfo->num_components);

  if (cinfo->marker->saw_SOF)
    ERREXIT(cinfo, 0x3a);

  if (cinfo->image_height <= 0 || cinfo->image_width <= 0
      || cinfo->num_components <= 0)
    ERREXIT(cinfo, 0x20);

  if (length != (cinfo->num_components * 3))
    ERREXIT(cinfo, 0xb);

  if (cinfo->comp_info == 0)
    cinfo->comp_info = (jpeg_component_info_827BB6B8 *) (*cinfo->mem->alloc_small)
                        ((j_common_ptr) cinfo, JPOOL_IMAGE,
                         cinfo->num_components * sizeof(jpeg_component_info_827BB6B8));

  for (ci = 0, compptr = cinfo->comp_info; ci < cinfo->num_components;
       ci++, compptr++) {
    compptr->component_index = ci;
    INPUT_BYTE(cinfo, compptr->component_id, return 0);
    INPUT_BYTE(cinfo, c, return 0);
    compptr->h_samp_factor = (c >> 4) & 15;
    compptr->v_samp_factor = (c     ) & 15;
    INPUT_BYTE(cinfo, compptr->quant_tbl_no, return 0);

    TRACEMS4(cinfo, 1, 0x65,
             compptr->component_id, compptr->h_samp_factor,
             compptr->v_samp_factor, compptr->quant_tbl_no);
  }

  cinfo->marker->saw_SOF = 1;

  INPUT_SYNC(cinfo);
  return 1;
}
