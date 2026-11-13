extern char lbl_82196582[];
extern char lbl_821AC4B4[];

typedef struct Info_82E0E5A8 {
    int id;
    const char *name;   /* 0x4 */
} Info_82E0E5A8;

extern Info_82E0E5A8 *fn_82CFD4F0(int type);
extern void fn_82D04AB8(void *str, const char *s);
extern void fn_82D04C78(void *str, const char *s);

void fn_82E0E5A8(int type, int subType, void *str)
{
    fn_82D04AB8(str, lbl_82196582);
    if ((type >= 1 && type <= 0x12) || type == 0x1e) {
        if (type == 1 || (type >= 0xc && type <= 0x12))
            fn_82D04AB8(str, lbl_821AC4B4);
        fn_82D04C78(str, fn_82CFD4F0(type)->name);
    } else if (type == 0x18 || type == 0x1f) {
        fn_82D04AB8(str, fn_82CFD4F0(subType)->name);
    }
}
