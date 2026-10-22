typedef struct FILE_ {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
} FILE_;

extern int *_errno(void);
extern void fn_82F70920(char ch, FILE_ *f, int *pnumwritten);

void fn_82F794A8(char *string, int len, FILE_ *f, int *pnumwritten)
{
    int e = *_errno();

    if ((f->_flag & 0x40) && f->_base == 0) {
        *pnumwritten += len;
        return;
    }
    *_errno() = 0;
    while (len-- > 0) {
        fn_82F70920(*string++, f, pnumwritten);
        if (*pnumwritten == -1) {
            if (*_errno() == 0x2a)
                fn_82F70920('?', f, pnumwritten);
            else
                break;
        }
    }
    if (*_errno() == 0)
        *_errno() = e;
}
