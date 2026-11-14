extern int memcmp(const void *, const void *, unsigned int);
extern int strcmp(const char *, const char *);

extern char lbl_8202C578[];   /* "o_" */
extern char lbl_8202C57C[];   /* "r_" */
extern char lbl_8202C580[];   /* "v_" */

typedef struct Entry_828FC870 {
    const char *name;
} Entry_828FC870;

int fn_828FC870(const void *left, const void *right)
{
    const char *a = (*(Entry_828FC870 **)left)->name;
    Entry_828FC870 *eb = *(Entry_828FC870 **)right;
    unsigned int result;

    if (memcmp(lbl_8202C580, a, 2) == 0 || memcmp(lbl_8202C57C, a, 2) == 0 ||
        memcmp(lbl_8202C578, a, 2) == 0 || memcmp(lbl_8202C580, eb->name, 2) == 0 ||
        memcmp(lbl_8202C57C, eb->name, 2) == 0 || memcmp(lbl_8202C578, eb->name, 2) == 0) {
        return strcmp(a, eb->name);
    }
    result = strcmp(a + 2, eb->name + 2);
    if (result == 0) {
        result = memcmp(a, eb->name, 2);
    }
    return result;
}
