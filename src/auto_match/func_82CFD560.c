typedef struct TypeInfo_82CFD560 {
    int id;
    const char *name;
    int size;
} TypeInfo_82CFD560;

typedef struct String_82CFD560 {
    char *data;
    int size;
    unsigned int capacity;
} String_82CFD560;

extern TypeInfo_82CFD560 lbl_8317F680[35];
extern String_82CFD560 *fn_82D04AB8(String_82CFD560 *s, const char *text);
extern void fn_82D04B90(String_82CFD560 *s, const char *fmt, ...);

void fn_82CFD560(int type, int count, String_82CFD560 *out)
{
    if (count == 0) {
        fn_82D04AB8(out, lbl_8317F680[type].name);
    } else {
        fn_82D04B90(out, "%s[%i]", lbl_8317F680[type].name, count);
    }
}
