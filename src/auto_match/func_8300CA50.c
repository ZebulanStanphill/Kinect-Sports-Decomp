extern int fn_830178D8(void *mgr, int id);
extern int fn_82FF74B8(void *mgr, int id);
extern int fn_83018220(void *mgr, int id, void *data, int flags);
extern int fn_82FF7438(void *mgr, int id, void *data);
extern void *lbl_832642E8;
extern void *lbl_832642FC;

int fn_8300CA50(int id, void *data, unsigned int kind)
{
    int result = 1;
    fn_830178D8(lbl_832642FC, id);
    fn_82FF74B8(lbl_832642E8, id);
    if (data != 0) {
        switch (kind) {
        case 0:
            result = fn_83018220(lbl_832642FC, id, data, 0);
            break;
        case 1:
            result = fn_82FF7438(lbl_832642E8, id, data);
            break;
        default:
            result = 0x1f;
            break;
        }
    }
    return result;
}
