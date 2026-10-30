extern void *fn_827C08B0(void *cinfo, int pool_id, unsigned int size);

typedef struct jpeg_common_struct_827C0D50 *j_common_ptr_827C0D50;
struct jpeg_error_mgr_827C0D50 {
  void (*error_exit)(j_common_ptr_827C0D50 cinfo);
  void (*emit_message)(void);
  void (*output_message)(void);
  void (*format_message)(void);
  void (*reset_error_mgr)(void);
  int msg_code;
  union { int i[8]; char s[80]; } msg_parm;
};
struct jvirt_sarray_control_827C0D50 {
  unsigned char **mem_buffer;
  unsigned int rows_in_array;
  unsigned int samplesperrow;
  unsigned int maxaccess;
  unsigned int rows_in_mem;
  unsigned int rowsperchunk;
  unsigned int cur_start_row;
  unsigned int first_undef_row;
  unsigned char pre_zero;
  unsigned char dirty;
  unsigned char b_s_open;
  struct jvirt_sarray_control_827C0D50 *next;
  char pad[0x50];
};
struct my_memory_mgr_827C0D50 {
  char pad[0x44];
  struct jvirt_sarray_control_827C0D50 *virt_sarray_list;
};
struct jpeg_common_struct_827C0D50 {
  struct jpeg_error_mgr_827C0D50 *err;
  struct my_memory_mgr_827C0D50 *mem;
};

void fn_827C0D50(struct jpeg_common_struct_827C0D50 *cinfo, int pool_id, unsigned char pre_zero,
                 unsigned int samplesperrow, unsigned int numrows, unsigned int maxaccess)
{
  struct my_memory_mgr_827C0D50 *mem = cinfo->mem;
  struct jvirt_sarray_control_827C0D50 *result;
  if (pool_id != 1) {
    cinfo->err->msg_code = 14;
    cinfo->err->msg_parm.i[0] = pool_id;
    (*cinfo->err->error_exit)(cinfo);
  }
  result = (struct jvirt_sarray_control_827C0D50 *)fn_827C08B0(cinfo, pool_id, 0x78);
  result->mem_buffer = 0;
  result->rows_in_array = numrows;
  result->samplesperrow = samplesperrow;
  result->maxaccess = maxaccess;
  result->pre_zero = pre_zero;
  result->b_s_open = 0;
  result->next = mem->virt_sarray_list;
  mem->virt_sarray_list = result;
}
