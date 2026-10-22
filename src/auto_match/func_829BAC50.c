typedef unsigned int size_t;
char *strncpy(char *, const char *, size_t);
extern char lbl_82196582[];
extern void fn_829BAB18(void);
extern void fn_829BABB0(void);
extern void fn_829BAC48(void);
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
  void (*a)(void);
  void (*b)(void);
  void (*c)(void);
  void *p;
} Mgr;

void fn_829BAC50(Cinfo *param_1, Mgr *param_2)
{
  void *p;

  p = fn_82F6D428();
  param_2->p = p;
  if (p == 0) {
    param_1->err->msg_code = 0x3f;
    strncpy(param_1->err->s, lbl_82196582, 0x50);
    param_1->err->error_exit(param_1);
  }
  param_2->a = fn_829BAB18;
  param_2->b = fn_829BABB0;
  param_2->c = fn_829BAC48;
}
