typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
typedef struct jerr_827C0A70 {
  void (*error_exit)(void *);
  void *emit_message;
  void *output_message;
  void *format_message;
  void *reset_error_mgr;
  int msg_code;
  union { int i[8]; char s[80]; } msg_parm;
} jerr_827C0A70;
typedef struct large_hdr_827C0A70 {
  struct large_hdr_827C0A70 *next;
  unsigned int bytes_used;
  unsigned int bytes_left;
  unsigned int pad;
} large_hdr_827C0A70;
typedef struct jmem_827C0A70 {
  char pad[0x3c];
  large_hdr_827C0A70 *large_list[2];
  char pad2[0x4c - 0x44];
  unsigned int total_space_allocated;
} jmem_827C0A70;
typedef struct jcommon_827C0A70 {
  jerr_827C0A70 *err;
  jmem_827C0A70 *mem;
} jcommon_827C0A70;
extern void *fn_827C8EE8(jcommon_827C0A70 *, unsigned int);

#define ERREXIT1(cinfo, code, p1) \
  ((cinfo)->err->msg_code = (code), (cinfo)->err->msg_parm.i[0] = (p1), \
   (*(cinfo)->err->error_exit)((cinfo)))

static void out_of_memory(jcommon_827C0A70 *cinfo, int which)
{
  ERREXIT1(cinfo, 0x36, which);
}

void *fn_827C0A70(jcommon_827C0A70 *cinfo, int pool_id, unsigned int sizeofobject)
{
  jmem_827C0A70 *mem = cinfo->mem;
  large_hdr_827C0A70 *hdr_ptr;
  unsigned int odd_bytes;

  if (sizeofobject > 1000000000 - 16)
    out_of_memory(cinfo, 3);
  odd_bytes = sizeofobject % 8;
  if (odd_bytes > 0)
    sizeofobject += 8 - odd_bytes;
  if (pool_id < 0 || pool_id >= 2)
    ERREXIT1(cinfo, 14, pool_id);
  hdr_ptr = (large_hdr_827C0A70 *)fn_827C8EE8(cinfo, sizeofobject + 16);
  if (hdr_ptr == 0)
    out_of_memory(cinfo, 4);
  mem->total_space_allocated += sizeofobject + 16;
  hdr_ptr->next = mem->large_list[pool_id];
  hdr_ptr->bytes_used = sizeofobject;
  hdr_ptr->bytes_left = 0;
  mem->large_list[pool_id] = hdr_ptr;
  return (void *)(hdr_ptr + 1);
}
