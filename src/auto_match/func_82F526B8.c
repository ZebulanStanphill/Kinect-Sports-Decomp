extern void *fn_825B1970(unsigned int size);
extern char lbl_821DDAD0[];
extern __declspec(noreturn) void _CxxThrowException(void *, void *);
void *fn_82F526B8(unsigned int size) {
 void *p = fn_825B1970(size);
 if (!p) {
  const char *error = "no memory";
  _CxxThrowException(&error, lbl_821DDAD0);
 }
 return p;
}
