extern void *fn_827C1A60();
extern void *memcpy(void *, const void *, unsigned int);

typedef struct jerr { void (*error_exit)(void *); int pad[4]; int msg_code; } jerr;
typedef struct { jerr *err; } cinfo_t;
typedef struct { unsigned char bits[17]; unsigned char huffval[256]; unsigned char sent_table; } JHUFF_TBL;

void fn_827BE978(cinfo_t *cinfo, JHUFF_TBL **htblptr, const unsigned char *bits, const unsigned char *val)
{
  int nsymbols;
  int len;

  if (*htblptr == 0) {
    *htblptr = (JHUFF_TBL *)fn_827C1A60(cinfo);
  }
  memcpy((*htblptr)->bits, bits, 17);
  nsymbols = 0;
  len = 1;
  do {
    nsymbols += bits[len];
    len++;
  } while (len <= 16);
  if (nsymbols < 1 || nsymbols > 256) {
    cinfo->err->msg_code = 8;
    (*cinfo->err->error_exit)(cinfo);
  }
  memcpy((*htblptr)->huffval, val, nsymbols);
  (*htblptr)->sent_table = 0;
}
