extern void *fn_827C08B0(void *cinfo, int pool_id, unsigned int size);

typedef struct jpeg_common_struct_827C0DE8 *j_common_ptr_827C0DE8;
struct jpeg_error_mgr_827C0DE8 {
  void (*error_exit)(j_common_ptr_827C0DE8 cinfo);
  void (*emit_message)(void);
  void (*output_message)(void);
  void (*format_message)(void);
  void (*reset_error_mgr)(void);
  int msg_code;
  union { int i[8]; char s[80]; } msg_parm;
};
struct jvirt_barray_control_827C0DE8 {
  void *mem_buffer;
  unsigned int rows_in_array;
  unsigned int blocksperrow;
  unsigned int maxaccess;
  unsigned int rows_in_mem;
  unsigned int rowsperchunk;
  unsigned int cur_start_row;
  unsigned int first_undef_row;
  unsigned char pre_zero;
  unsigned char dirty;
  unsigned char b_s_open;
  struct jvirt_barray_control_827C0DE8 *next;
  char pad[0x50];
};
struct my_memory_mgr_827C0DE8 {
  char pad[0x48];
  struct jvirt_barray_control_827C0DE8 *virt_barray_list;
};
struct jpeg_common_struct_827C0DE8 {
  struct jpeg_error_mgr_827C0DE8 *err;
  struct my_memory_mgr_827C0DE8 *mem;
};

void fn_827C0DE8(struct jpeg_common_struct_827C0DE8 *cinfo, int pool_id, unsigned char pre_zero,
                 unsigned int blocksperrow, unsigned int numrows, unsigned int maxaccess)
{
  struct my_memory_mgr_827C0DE8 *mem = cinfo->mem;
  struct jvirt_barray_control_827C0DE8 *result;
  if (pool_id != 1) {
    cinfo->err->msg_code = 14;
    cinfo->err->msg_parm.i[0] = pool_id;
    (*cinfo->err->error_exit)(cinfo);
  }
  result = (struct jvirt_barray_control_827C0DE8 *)fn_827C08B0(cinfo, pool_id, 0x78);
  result->mem_buffer = 0;
  result->rows_in_array = numrows;
  result->blocksperrow = blocksperrow;
  result->maxaccess = maxaccess;
  result->pre_zero = pre_zero;
  result->b_s_open = 0;
  result->next = mem->virt_barray_list;
  mem->virt_barray_list = result;
}
