typedef unsigned short wchar_t;

typedef struct Writer_82E215D0 {
    unsigned char wide;
} Writer_82E215D0;

extern const char lbl_821C5500[];
extern int fn_82E21200(Writer_82E215D0 *self, const char *text);
extern int fn_82E212B0(Writer_82E215D0 *self, const wchar_t *text);

int fn_82E215D0(Writer_82E215D0 *self, unsigned char value)
{
    if (self->wide) {
        if (value) {
            return fn_82E212B0(self, L"1");
        }
        return fn_82E212B0(self, L"0");
    }
    if (value) {
        return fn_82E21200(self, lbl_821C5500);
    }
    return fn_82E21200(self, "0");
}
