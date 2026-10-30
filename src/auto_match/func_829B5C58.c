typedef struct jerr_829B5C58 {
  void (*error_exit)(void *cinfo);
  void *emit_message;
  void *output_message;
  void *format_message;
  void *reset_error_mgr;
  int msg_code;
  union { int i[8]; char s[80]; } msg_parm;
} jerr_829B5C58;
typedef union small_hdr_829B5C58 { struct { union small_hdr_829B5C58 *next; unsigned int bytes_used; unsigned int bytes_left; } hdr; double dummy; } small_hdr_829B5C58;
typedef struct {
  char pad[0x3c];
  small_hdr_829B5C58 *small_list[2];
  char pad44[8];
  int total_space_allocated;
} mem_829B5C58;
typedef struct {
  jerr_829B5C58 *err;
  mem_829B5C58 *mem;
} cinfo_829B5C58;
extern void *fn_829BAA90(cinfo_829B5C58 *, unsigned int);

void *fn_829B5C58(cinfo_829B5C58 *cinfo, int pool_id, unsigned int sizeofobject)
{
  mem_829B5C58 *mem = cinfo->mem;
  small_hdr_829B5C58 *hdr_ptr;
  unsigned int odd_bytes;
  if (sizeofobject > 1000000000 - 16) {
    cinfo->err->msg_code = 0x36;
    cinfo->err->msg_parm.i[0] = 3;
    (*cinfo->err->error_exit)(cinfo);
  }
  odd_bytes = sizeofobject % 8;
  if (odd_bytes > 0) sizeofobject += 8 - odd_bytes;
  if (pool_id < 0 || pool_id >= 2) {
    cinfo->err->msg_code = 0xe;
    cinfo->err->msg_parm.i[0] = pool_id;
    (*cinfo->err->error_exit)(cinfo);
  }
  hdr_ptr = (small_hdr_829B5C58 *)fn_829BAA90(cinfo, sizeofobject + 16);
  if (hdr_ptr == 0) {
    cinfo->err->msg_code = 0x36;
    cinfo->err->msg_parm.i[0] = 4;
    (*cinfo->err->error_exit)(cinfo);
  }
  mem->total_space_allocated += sizeofobject + 16;
  hdr_ptr->hdr.next = mem->small_list[pool_id];
  hdr_ptr->hdr.bytes_used = sizeofobject;
  hdr_ptr->hdr.bytes_left = 0;
  mem->small_list[pool_id] = hdr_ptr;
  return (void *)(hdr_ptr + 1);
}
