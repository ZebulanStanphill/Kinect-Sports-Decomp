typedef struct Buf_825809D0 {
    unsigned char data[0x40];
} Buf_825809D0;

extern void *lbl_8326B7C8;
extern void fn_82489D08(void);
extern int fn_827D9EA8(int id);
extern void fn_827DBA00(void *mgr, int id, int key, int a, int b, int c, int d, int e,
                        int arg, int f, int g, int h);
extern void fn_82599418(void);
extern void fn_827DA090(Buf_825809D0 *buf, int id);
extern int fn_825D61E0(int id);
extern void fn_8256D798(Buf_825809D0 *buf, int a, int b);

int fn_825809D0(int id, int a, int b, int c, int d)
{
    int result;
    Buf_825809D0 buf;

    fn_827DBA00(lbl_8326B7C8, id, fn_827D9EA8(id), 0, c, a, 0, b, 2, (int)fn_82489D08, d, 0);
    fn_82599418();
    fn_827DA090(&buf, id);
    result = fn_825D61E0(0);
    fn_8256D798(&buf, 1, 0);
    return result;
}
