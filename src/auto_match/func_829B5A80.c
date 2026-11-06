typedef struct jerr_829B5A80 {
  void (*error_exit)(void *cinfo);
  void *emit_message;
  void *output_message;
  void *format_message;
  void *reset_error_mgr;
  int msg_code;
  union { int i[8]; char s[80]; } msg_parm;
} jerr_829B5A80;
typedef union small_hdr_829B5A80 {
  struct {
    union small_hdr_829B5A80 *next;
    unsigned int bytes_used;
    unsigned int bytes_left;
  } hdr;
  double dummy;
} small_hdr_829B5A80;
typedef struct {
  char pad[0x34];
  small_hdr_829B5A80 *small_list[2];
  char pad3c[0x10];
  int total_space_allocated;
} mem_829B5A80;
typedef struct {
  jerr_829B5A80 *err;
  mem_829B5A80 *mem;
} cinfo_829B5A80;
extern void *fn_829BAA90(cinfo_829B5A80 *, unsigned int);
/* first_pool_slop[2] followed by extra_pool_slop[2] */
extern const unsigned int lbl_820548A8[4];

void *fn_829B5A80(cinfo_829B5A80 *cinfo, int pool_id, unsigned int sizeofobject)
{
  mem_829B5A80 *mem = cinfo->mem;
  small_hdr_829B5A80 *hdr_ptr, *prev_hdr_ptr;
  char *data_ptr;
  unsigned int odd_bytes, min_request, slop;

  if (sizeofobject > (unsigned int)(1000000000 - sizeof(small_hdr_829B5A80))) {
    cinfo->err->msg_code = 0x36;
    cinfo->err->msg_parm.i[0] = 1;
    (*cinfo->err->error_exit)(cinfo);
  }
  odd_bytes = sizeofobject % 8;
  if (odd_bytes > 0)
    sizeofobject += 8 - odd_bytes;
  if (pool_id < 0 || pool_id >= 2) {
    cinfo->err->msg_code = 0xe;
    cinfo->err->msg_parm.i[0] = pool_id;
    (*cinfo->err->error_exit)(cinfo);
  }
  prev_hdr_ptr = 0;
  hdr_ptr = mem->small_list[pool_id];
  while (hdr_ptr != 0) {
    if (hdr_ptr->hdr.bytes_left >= sizeofobject)
      break;
    prev_hdr_ptr = hdr_ptr;
    hdr_ptr = hdr_ptr->hdr.next;
  }
  if (hdr_ptr == 0) {
    min_request = sizeofobject + sizeof(small_hdr_829B5A80);
    if (prev_hdr_ptr == 0)
      slop = lbl_820548A8[pool_id];
    else
      slop = (lbl_820548A8 + 2)[pool_id];
    if (slop > (unsigned int)(1000000000 - min_request))
      slop = (unsigned int)(1000000000 - min_request);
    for (;;) {
      hdr_ptr = (small_hdr_829B5A80 *)fn_829BAA90(cinfo, min_request + slop);
      if (hdr_ptr != 0)
        break;
      slop /= 2;
      if (slop < 50) {
        cinfo->err->msg_code = 0x36;
        cinfo->err->msg_parm.i[0] = 2;
        (*cinfo->err->error_exit)(cinfo);
      }
    }
    mem->total_space_allocated += min_request + slop;
    hdr_ptr->hdr.next = 0;
    hdr_ptr->hdr.bytes_used = 0;
    hdr_ptr->hdr.bytes_left = sizeofobject + slop;
    if (prev_hdr_ptr == 0)
      mem->small_list[pool_id] = hdr_ptr;
    else
      prev_hdr_ptr->hdr.next = hdr_ptr;
  }
  data_ptr = (char *)(hdr_ptr + 1);
  data_ptr += hdr_ptr->hdr.bytes_used;
  hdr_ptr->hdr.bytes_used += sizeofobject;
  hdr_ptr->hdr.bytes_left -= sizeofobject;
  return (void *)data_ptr;
}
