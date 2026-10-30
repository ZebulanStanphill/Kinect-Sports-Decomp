typedef struct jpeg_decompress_struct *j_decompress_ptr;
typedef struct jpeg_common_struct *j_common_ptr;
struct jpeg_error_mgr {
    void (*error_exit)(j_common_ptr cinfo);
    void (*emit_message)(j_common_ptr cinfo, int msg_level);
    void *output_message;
    void *format_message;
    void *reset_error_mgr;
    int msg_code;
    union { int i[8]; char s[80]; } msg_parm;
};
struct jpeg_decompress_struct {
    struct jpeg_error_mgr *err;
    char pad[0x128 - 4];
    int saw_Adobe_marker;
    unsigned char Adobe_transform;
};

#define TRACEMS1(cinfo,lvl,code,p1)  \
  ((cinfo)->err->msg_code = (code), \
   (cinfo)->err->msg_parm.i[0] = (p1), \
   (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)))

#define TRACEMS4(cinfo,lvl,code,p1,p2,p3,p4)  \
  do { int * _mp = (cinfo)->err->msg_parm.i; \
	   _mp[0] = (p1); _mp[1] = (p2); _mp[2] = (p3); _mp[3] = (p4); \
	   (cinfo)->err->msg_code = (code); \
	   (*(cinfo)->err->emit_message) ((j_common_ptr) (cinfo), (lvl)); } while (0)

void fn_829AD1B8(j_decompress_ptr cinfo, unsigned char *data, unsigned int datalen, int remaining)
{
  unsigned int version, flags0, flags1, transform;

  if (datalen >= 12 &&
      data[0] == 0x41 &&
      data[1] == 0x64 &&
      data[2] == 0x6f &&
      data[3] == 0x62 &&
      data[4] == 0x65) {
    version = (data[5] << 8) + data[6];
    flags0 = (data[7] << 8) + data[8];
    flags1 = (data[9] << 8) + data[10];
    transform = data[11];
    TRACEMS4(cinfo, 1, 0x4c, version, flags0, flags1, transform);
    cinfo->saw_Adobe_marker = 1;
    cinfo->Adobe_transform = (unsigned char)transform;
  } else {
    TRACEMS1(cinfo, 1, 0x4e, (int)(datalen + remaining));
  }
}
