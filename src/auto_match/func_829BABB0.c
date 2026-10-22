typedef unsigned int size_t;

struct jpeg_error_mgr {
  void (*error_exit)(void *cinfo);
  int pad[4];
  int msg_code;
};

struct jpeg_common {
  struct jpeg_error_mgr *err;
};

struct backing_store {
  int pad[3];
  void *temp_file;
};

extern int fn_82F6C060(void *f, long off, int whence);
extern size_t fn_82F67CF8(void *buf, size_t sz, size_t n, void *f);

void fn_829BABB0(struct jpeg_common *cinfo, struct backing_store *info,
                 void *buffer_address, long file_offset, long byte_count)
{
  if (fn_82F6C060(info->temp_file, file_offset, 0)) {
    cinfo->err->msg_code = 0x41;
    (*cinfo->err->error_exit)(cinfo);
  }
  if (fn_82F67CF8(buffer_address, 1, byte_count, info->temp_file) != (size_t)byte_count) {
    cinfo->err->msg_code = 0x42;
    (*cinfo->err->error_exit)(cinfo);
  }
}
