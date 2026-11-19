typedef struct Name_82F77EC0 {
    void *node;         /* 0x0 */
    unsigned int flags; /* 0x4 */
} Name_82F77EC0;

extern char *lbl_832635C0;
extern Name_82F77EC0 *fn_82F728D0(Name_82F77EC0 *self, int status);
extern Name_82F77EC0 *fn_82F72F40(Name_82F77EC0 *self, const char *text);
extern Name_82F77EC0 *fn_82F73228(Name_82F77EC0 *self, Name_82F77EC0 *other);
extern Name_82F77EC0 *fn_82F735D8(Name_82F77EC0 *self, char ch);
extern Name_82F77EC0 *fn_82F73680(Name_82F77EC0 *self, const char *text);
extern Name_82F77EC0 *fn_82F74AF8(Name_82F77EC0 *result, Name_82F77EC0 *name, int isPointer);
extern Name_82F77EC0 *fn_82F771C8(Name_82F77EC0 *result, Name_82F77EC0 *name);
extern Name_82F77EC0 *fn_82F775F0(Name_82F77EC0 *result, Name_82F77EC0 *superType, const char *prType,
                                  Name_82F77EC0 *cvType, int thisFlag);

Name_82F77EC0 *fn_82F77EC0(Name_82F77EC0 *result, Name_82F77EC0 *cvType, Name_82F77EC0 *superType,
                           const char *prType)
{
    Name_82F77EC0 name;
    char ch;

    ch = *lbl_832635C0;
    if (ch != 0) {
        if ((ch >= '6' && ch <= '9') || ch == '_') {
            fn_82F72F40(&name, prType);
            if (cvType->node != 0 && (superType->node == 0 || (superType->flags & 0x800000) == 0)) {
                fn_82F73228(&name, cvType);
            }
            if (superType->node != 0) {
                fn_82F73228(&name, superType);
            }
            fn_82F771C8(result, &name);
        } else {
            fn_82F775F0(&name, superType, prType, cvType, 0);
            fn_82F74AF8(result, &name, *prType == '*');
        }
    } else {
        fn_82F728D0(&name, 1);
        fn_82F73680(&name, prType);
        if (cvType->node != 0) {
            fn_82F73228(&name, cvType);
        }
        if (superType->node != 0) {
            if (cvType->node != 0) {
                fn_82F735D8(&name, ' ');
            }
            fn_82F73228(&name, superType);
        }
        *result = name;
    }
    return result;
}
