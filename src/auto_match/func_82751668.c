#include <string.h>

typedef struct Filter_82751668 {
    char pad0[0x21];
    unsigned char blurX;    /* 0x21 */
    unsigned char blurY;    /* 0x22 */
} Filter_82751668;

typedef struct Name_82751668 {
    const char *text;
} Name_82751668;

extern char lbl_820063E8[]; /* "blurX" */
extern char lbl_820063E0[]; /* "blurY" */
extern char lbl_820138B0[]; /* "quality" */
extern void fn_82681898(void *value, double number);
extern char *fn_826A7380(void *env);
extern void fn_826D6630(void *log, const char *fmt, ...);
extern int fn_82713EE8(Filter_82751668 *self, void *env, Name_82751668 **name, void *value);

int fn_82751668(Filter_82751668 *self, void *env, Name_82751668 **name, void *value)
{
    const char *s = (*name)->text;
    char *log;

    if (strcmp(s, lbl_820063E8) == 0) {
        fn_82681898(value, (float)self->blurX * 0.0625f);
        return 1;
    }
    if (strcmp(s, lbl_820063E0) == 0) {
        fn_82681898(value, (float)self->blurY * 0.0625f);
        return 1;
    }
    if (strcmp(s, lbl_820138B0) == 0) {
        log = fn_826A7380(env);
        if (log != 0) {
            fn_826D6630(log + 0xc, "Warning: BlurFilter.quality property is not supported!\n");
        }
        return 1;
    }
    return fn_82713EE8(self, env, name, value);
}
