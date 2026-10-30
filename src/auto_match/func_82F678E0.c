typedef struct File_82F678E0 { char pad[0xc]; int flag; char pad10[0xc]; void *tmpname; } File_82F678E0;
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int fn_82F6BB98(File_82F678E0 *f);
extern void fn_82F641F8(void *p);
extern void fn_82F7C6F0(File_82F678E0 *f);
extern int fn_82F7C468(File_82F678E0 *f);
extern int fn_82F7C590(int fd);

int fn_82F678E0(File_82F678E0 *f)
{
    int r = -1;
    if (f == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return -1;
    }
    if ((f->flag & 0x83) != 0) {
        r = fn_82F6BB98(f);
        fn_82F7C6F0(f);
        if (fn_82F7C590(fn_82F7C468(f)) < 0) {
            r = -1;
        } else if (f->tmpname != 0) {
            fn_82F641F8(f->tmpname);
            f->tmpname = 0;
        }
    }
    f->flag = 0;
    return r;
}
