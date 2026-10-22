typedef struct {
  char *_ptr;
  int _cnt;
  char *_base;
  int _flag;
  int _file;
  int _charbuf;
  int _bufsiz;
  char *_tmpfname;
} FILE;

typedef struct {
  int osfhnd;
  char pad[0x44];
} ioinfo;

extern int lbl_8329F738;          /* _nstream */
extern void **lbl_8329F734;       /* __piob */
extern FILE lbl_831BB660[];       /* _iob */
extern ioinfo *lbl_8329F620[];    /* __pioinfo */
/* _calloc_crt: the CRT declares it _CRTNOALIAS _CRTRESTRICT */
extern __declspec(noalias) __declspec(restrict) void *fn_82F6E1C8(unsigned int num, unsigned int size);

#define _osfhnd(i) (lbl_8329F620[(i) >> 5][(i) & 31].osfhnd)

int fn_82F6AB18(void)
{
  int i;

  if (lbl_8329F738 == 0)
    lbl_8329F738 = 0x200;
  else if (lbl_8329F738 < 20)
    lbl_8329F738 = 20;

  if ((lbl_8329F734 = (void **)fn_82F6E1C8(lbl_8329F738, sizeof(void *))) == 0) {
    lbl_8329F738 = 20;
    if ((lbl_8329F734 = (void **)fn_82F6E1C8(lbl_8329F738, sizeof(void *))) == 0)
      return 0x1a;
  }

  for (i = 0; i < 20; i++)
    lbl_8329F734[i] = (void *)&lbl_831BB660[i];

  for (i = 0; i < 3; i++) {
    if ((_osfhnd(i) == -1) || (_osfhnd(i) == -2) || (_osfhnd(i) == 0)) {
      lbl_831BB660[i]._file = -2;
    }
  }

  return 0;
}
