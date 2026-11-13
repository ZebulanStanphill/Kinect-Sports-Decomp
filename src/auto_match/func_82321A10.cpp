#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
typedef struct {
    int head;
    char body[0x8C];
} Stream_82321A10;

extern void fn_8223CFC0(Stream_82321A10 *s, int a, int b);
extern void *fn_82240158(void *s, const char *str);
extern void fn_822403C8(void *out, void *src);

extern char *lbl_821AFBA4[];
extern char *lbl_821AFBC0[];
extern char lbl_821AC4B4[];
extern char lbl_82196582[];

void *fn_82321A10(void *out, int idx, unsigned int kind)
{
    Stream_82321A10 s;
    char *name;
    char *suffix;
    const char *strength;

    fn_8223CFC0(&s, 2, 1);
    name = lbl_821AFBA4[idx];
    suffix = lbl_821AFBC0[idx];
    switch (kind) {
    case 0:
        strength = "light";
        break;
    case 1:
        strength = "medium";
        break;
    case 9:
        strength = "weak";
        break;
    default:
        strength = lbl_82196582;
        break;
    }
    fn_82240158(fn_82240158(fn_82240158(fn_82240158(&s, "hitoverlay_"), name),
                            lbl_821AC4B4), strength);
    if (suffix != 0 && *suffix != '\0') {
        fn_82240158(fn_82240158(&s, lbl_821AC4B4), suffix);
    }
    fn_822403C8(out, s.body);
    DestroyOStringStream_8223DCC8(&s);
    return out;
}
}
