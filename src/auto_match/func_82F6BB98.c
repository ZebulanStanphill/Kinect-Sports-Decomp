typedef struct File_82F6BB98 { char *_ptr; int _cnt; char *_base; int _flag; } File_82F6BB98;
extern int fn_82F7C468(File_82F6BB98 *f);
extern int fn_82F7C9A0(int fd, char *buf, int n);
int fn_82F6BB98(File_82F6BB98 *f)
{
    int r = 0;
    if ((f->_flag & 3) == 2) {
        if ((f->_flag & 0x108) != 0) {
            char *base = f->_base;
            int cnt = f->_ptr - base;
            if (cnt > 0) {
                if (fn_82F7C9A0(fn_82F7C468(f), base, cnt) == cnt) {
                    if (f->_flag & 0x80) f->_flag &= ~2;
                } else {
                    f->_flag |= 0x20;
                    r = -1;
                }
            }
        }
    }
    f->_cnt = 0;
    f->_ptr = f->_base;
    return r;
}
