typedef struct jpeg_common_struct *j_common_ptr;
struct jpeg_error_mgr {
  void (*error_exit)(j_common_ptr cinfo);
  void (*emit_message)(j_common_ptr cinfo, int msg_level);
  void (*output_message)(j_common_ptr cinfo);
  void (*format_message)(j_common_ptr cinfo, char *buffer);
  void (*reset_error_mgr)(j_common_ptr cinfo);
  int msg_code;
};
struct jpeg_common_struct {
  struct jpeg_error_mgr *err;
};
typedef unsigned char **JSAMPARRAY;
typedef unsigned int JDIMENSION;
typedef unsigned char boolean;
struct jvirt_sarray_control {
  JSAMPARRAY mem_buffer;
  JDIMENSION rows_in_array;
  JDIMENSION samplesperrow;
  JDIMENSION maxaccess;
  JDIMENSION rows_in_mem;
  JDIMENSION rowsperchunk;
  JDIMENSION cur_start_row;
  JDIMENSION first_undef_row;
  boolean pre_zero;
  boolean dirty;
  boolean b_s_open;
};
typedef struct jvirt_sarray_control *jvirt_sarray_ptr;

extern void fn_827C10A8(j_common_ptr cinfo, jvirt_sarray_ptr ptr, int writing);
extern void fn_827C1B68(void *target, unsigned int bytestozero);

#define ERREXIT(cinfo, code) \
  ((cinfo)->err->msg_code = (code), (*(cinfo)->err->error_exit)(cinfo))

JSAMPARRAY fn_827C1268(j_common_ptr cinfo, jvirt_sarray_ptr ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable)
{
  JDIMENSION end_row = start_row + num_rows;
  JDIMENSION undef_row;

  if (end_row > ptr->rows_in_array || num_rows > ptr->maxaccess || ptr->mem_buffer == 0)
    ERREXIT(cinfo, 0x16);

  if (start_row < ptr->cur_start_row || end_row > ptr->cur_start_row + ptr->rows_in_mem) {
    if (!ptr->b_s_open)
      ERREXIT(cinfo, 0x45);
    if (ptr->dirty) {
      fn_827C10A8(cinfo, ptr, 1);
      ptr->dirty = 0;
    }
    if (start_row > ptr->cur_start_row) {
      ptr->cur_start_row = start_row;
    } else {
      long ltemp;

      ltemp = (long) end_row - (long) ptr->rows_in_mem;
      if (ltemp < 0)
        ltemp = 0;
      ptr->cur_start_row = (JDIMENSION) ltemp;
    }
    fn_827C10A8(cinfo, ptr, 0);
  }
  if (ptr->first_undef_row < end_row) {
    if (ptr->first_undef_row < start_row) {
      if (writable)
        ERREXIT(cinfo, 0x16);
      undef_row = start_row;
    } else {
      undef_row = ptr->first_undef_row;
    }
    if (writable)
      ptr->first_undef_row = end_row;
    if (ptr->pre_zero) {
      unsigned int bytesperrow = (unsigned int) ptr->samplesperrow * sizeof(unsigned char);
      undef_row -= ptr->cur_start_row;
      end_row -= ptr->cur_start_row;
      while (undef_row < end_row) {
        fn_827C1B68((void *) ptr->mem_buffer[undef_row], bytesperrow);
        undef_row++;
      }
    } else {
      if (!writable)
        ERREXIT(cinfo, 0x16);
    }
  }
  if (writable)
    ptr->dirty = 1;
  return ptr->mem_buffer + (start_row - ptr->cur_start_row);
}
