typedef unsigned int size_t;
char *strncpy(char *, const char *, size_t);
extern char lbl_82196582[];
extern void read_backing_store(void);
extern void write_backing_store(void);
extern void close_backing_store(void);
extern void *fn_82F6D428(void);

struct Cinfo;
typedef struct {
  void (*error_exit)(struct Cinfo *);
  char pad[0x10];
  int msg_code;
  char s[80];
} ErrMgr;

typedef struct Cinfo {
  ErrMgr *err;
} Cinfo;

typedef struct {
  void (*read_backing_store)(void);
  void (*write_backing_store)(void);
  void (*close_backing_store)(void);
  void *temp_file;
} Mgr;

void jpeg_open_backing_store(Cinfo *cinfo, Mgr *info)
{
  void *temp_file;

  temp_file = fn_82F6D428();
  info->temp_file = temp_file;
  if (temp_file == 0) {
    cinfo->err->msg_code = 0x3f;
    strncpy(cinfo->err->s, lbl_82196582, 0x50);
    cinfo->err->error_exit(cinfo);
  }
  info->read_backing_store = read_backing_store;
  info->write_backing_store = write_backing_store;
  info->close_backing_store = close_backing_store;
}
