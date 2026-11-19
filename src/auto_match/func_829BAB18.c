typedef void (*err_fn)(void *);
struct jerr { err_fn error_exit; int pad[4]; int msg_code; };
struct jcinfo { struct jerr *err; };
struct bstore { int pad[3]; void *temp_file; };

extern unsigned int fread(void *buf, unsigned int size, unsigned int count, void *file);
extern int fseek(void *file, long offset, int origin);

void fn_829BAB18(struct jcinfo *cinfo, struct bstore *info, void *buffer_address, long file_offset, long byte_count)
{
  if (fseek(info->temp_file, file_offset, 0)) {
    cinfo->err->msg_code = 0x41;
    (*cinfo->err->error_exit)(cinfo);
  }
  if (fread(buffer_address, 1, byte_count, info->temp_file) != (unsigned int)byte_count) {
    cinfo->err->msg_code = 0x40;
    (*cinfo->err->error_exit)(cinfo);
  }
}
