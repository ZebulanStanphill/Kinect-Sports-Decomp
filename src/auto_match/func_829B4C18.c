#include <string.h>

typedef struct Node_829B4C18 {
    int f0;
    int type;      /* 0x4 */
    int f8;
    int fc;
    int loc;       /* 0x10 */
    int f14;
    char *value;   /* 0x18 */
} Node_829B4C18;

extern void fn_82980C18(void *ctx, int *loc, int code, const char *fmt, ...);
extern char lbl_82054460[]; /* "D3D10_SHADER_SKIP_OPTIMIZATION" */
extern char lbl_82054440[]; /* "D3D10_SHADER_AVOID_FLOW_CONTROL" */
extern char lbl_8205441C[]; /* "D3D10_SHADER_PREFER_FLOW_CONTROL" */

long fn_829B4C18(void *ctx, Node_829B4C18 *node, unsigned int *flags)
{
    long hr = 0;
    char *s;

    if (node == 0 || node->type != 3)
        goto fail;
    s = node->value;
    if (strcmp(lbl_82054460, s) == 0) {
        *flags = 4;
        goto done;
    }
    if (strcmp(lbl_82054440, s) == 0) {
        *flags = 0x200;
        goto done;
    }
    if (strcmp(lbl_8205441C, s) == 0) {
        *flags = 0x400;
        goto done;
    }
    fn_82980C18(ctx, &node->loc, 3000, "invalid compiler flag %s", s);
fail:
    hr = 0x80004005;
done:
    return hr;
}
