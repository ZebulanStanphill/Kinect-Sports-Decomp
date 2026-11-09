extern char *lbl_83265044;
extern int fn_8304F020(void *object, void *a);

int fn_8304F7D8(void *a)
{
    char *object = lbl_83265044;
    return fn_8304F020(object ? object - 4 : 0, a);
}
