/* Throws an exception object {vtable lbl_82167FA8, what = 0, dofree = 0} (the std::exception
   layout; fn_82F63190 is its copy constructor) with the throw info lbl_821DDA54. */
typedef struct Exception_82F63108 {
    const void *vtable;
    const char *what;
    unsigned char dofree;
} Exception_82F63108;

extern const void *lbl_82167FA8[];
extern char lbl_821DDA54[];
__declspec(noreturn) void _CxxThrowException(void *object, void *throwInfo);

void fn_82F63108(void)
{
    Exception_82F63108 e;

    e.what = 0;
    e.vtable = lbl_82167FA8;
    e.dofree = 0;
    _CxxThrowException(&e, lbl_821DDA54);
}
