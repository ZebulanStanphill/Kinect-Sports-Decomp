typedef unsigned int JDIMENSION;
typedef int boolean;
typedef struct Cinfo *j_common_ptr;
typedef struct Err {
    void (*error_exit)(j_common_ptr);
    void *emit_message;
    void *output_message;
    void *format_message;
    void *reset_error_mgr;
    int msg_code;
} Err;
struct Cinfo { Err *err; };
typedef struct Vsa {
    void **mem_buffer;
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
} Vsa;
extern void fn_829B62A8(j_common_ptr, Vsa *, boolean);
extern void fn_829B7828(void *, unsigned int);

void **fn_829B6468(j_common_ptr cinfo, Vsa *ptr, JDIMENSION start_row, JDIMENSION num_rows, boolean writable)
{
  JDIMENSION end_row = start_row + num_rows;
  JDIMENSION undef_row;

  if (end_row > ptr->rows_in_array || num_rows > ptr->maxaccess || ptr->mem_buffer == 0) {
    cinfo->err->msg_code = 0x16;
    (*cinfo->err->error_exit)(cinfo);
  }
  if (start_row < ptr->cur_start_row || end_row > ptr->cur_start_row + ptr->rows_in_mem) {
    if (!ptr->b_s_open) {
      cinfo->err->msg_code = 0x45;
      (*cinfo->err->error_exit)(cinfo);
    }
    if (ptr->dirty) {
      fn_829B62A8(cinfo, ptr, 1);
      ptr->dirty = 0;
    }
    if (start_row > ptr->cur_start_row) {
      ptr->cur_start_row = start_row;
    } else {
      long ltemp = (long)end_row - (long)ptr->rows_in_mem;
      if (ltemp < 0) ltemp = 0;
      ptr->cur_start_row = (JDIMENSION)ltemp;
    }
    fn_829B62A8(cinfo, ptr, 0);
  }
  if (ptr->first_undef_row < end_row) {
    if (ptr->first_undef_row < start_row) {
      if (writable) {
        cinfo->err->msg_code = 0x16;
        (*cinfo->err->error_exit)(cinfo);
      }
      undef_row = start_row;
    } else {
      undef_row = ptr->first_undef_row;
    }
    if (writable) ptr->first_undef_row = end_row;
    if (ptr->pre_zero) {
      unsigned int bytesperrow = ptr->samplesperrow;
      undef_row -= ptr->cur_start_row;
      end_row -= ptr->cur_start_row;
      while (undef_row < end_row) {
        fn_829B7828(ptr->mem_buffer[undef_row], bytesperrow);
        undef_row++;
      }
    } else {
      if (!writable) {
        cinfo->err->msg_code = 0x16;
        (*cinfo->err->error_exit)(cinfo);
      }
    }
  }
  if (writable) ptr->dirty = 1;
  return ptr->mem_buffer + (start_row - ptr->cur_start_row);
}
