typedef struct Entry_825D61E0 {
    int id;
    int a;
    int b;
} Entry_825D61E0;

extern Entry_825D61E0 lbl_831BFEE8[];
extern char lbl_83297A20[];
extern int fn_82526C70(char *buf, int size, const char *fmt, ...);

int fn_825D61E0(int id)
{
    int i;

    if (id != 0 && (id <= 0x3e3 || (id > 0x3e5 && id != 0x4de))) {
        for (i = 0; lbl_831BFEE8[i].id != 0; i++) {
            if (lbl_831BFEE8[i].id == id)
                return id;
        }
        fn_82526C70(lbl_83297A20, 0x10, "%d", id);
    }
    return id;
}
