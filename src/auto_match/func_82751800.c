#include <string.h>

typedef struct Filter_82751800 {
    char pad0[0x21];
    unsigned char blurX;    /* 0x21 */
    unsigned char blurY;    /* 0x22 */
} Filter_82751800;

typedef struct Name_82751800 {
    const char *text;
} Name_82751800;

extern char lbl_820063E8[]; /* "blurX" */
extern char lbl_820063E0[]; /* "blurY" */
extern char lbl_820138B0[]; /* "quality" */
extern float lbl_82011638;
extern double fn_826972E0(const void *value, void *env);
extern char *fn_826A7380(void *env);
extern void fn_826D6630(void *log, const char *fmt, ...);
extern int fn_826C1BA0(Filter_82751800 *self, void *env, Name_82751800 **name, const void *value, int flags);

int fn_82751800(Filter_82751800 *self, void *env, Name_82751800 **name, const void *value, int flags)
{
    const char *s = (*name)->text;
    char *log;
    unsigned int v;

    if (strcmp(s, lbl_820063E8) == 0) {
        v = (unsigned int)((float)fn_826972E0(value, env) * lbl_82011638 + 0.5f);
        if (v >= 0xff)
            v = 0xff;
        self->blurX = (unsigned char)v;
        return 1;
    }
    if (strcmp(s, lbl_820063E0) == 0) {
        v = (unsigned int)((float)fn_826972E0(value, env) * lbl_82011638 + 0.5f);
        if (v >= 0xff)
            v = 0xff;
        self->blurY = (unsigned char)v;
        return 1;
    }
    if (strcmp(s, lbl_820138B0) == 0) {
        log = fn_826A7380(env);
        if (log != 0) {
            fn_826D6630(log + 0xc, "Warning: BlurFilter.quality property is not supported!\n");
        }
        return 1;
    }
    return fn_826C1BA0(self, env, name, value, flags);
}
