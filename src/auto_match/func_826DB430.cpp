#include "game/String_8268C510.h"

extern "C" double fn_826BCE08(const char *text, const char **end);
extern "C" unsigned char fn_826D9828(void *self, const String_8268C510 *const &key, int *out);

static __forceinline unsigned char FindNamed(void *self, const String_8268C510 &name, int *out)
{
    return fn_826D9828(self, &name, out);
}

// Looks a member up by a one-based number when the text is numeric, else by name.
extern "C" unsigned char fn_826DB430(void *self, const char *text, int *out, unsigned char numeric)
{
    if (text != 0 && *text != 0) {
        if (numeric != 0) {
            unsigned char hasDigit = 0;
            const char *cursor;

            for (cursor = text; *cursor != 0; cursor++) {
                unsigned char character = *cursor;

                if (character >= '0' && character <= '9') {
                    hasDigit = 1;
                } else if (((character != '+' && character != '-') || hasDigit) && character != ' ' &&
                           character != '\t') {
                    goto named;
                }
            }
            {
                const char *end = 0;
                unsigned int value = (unsigned int)fn_826BCE08(text, &end);

                if (end != text && *end == 0) {
                    *out = value - 1;
                    return 1;
                }
            }
        } else {
        named:
            return FindNamed(self, String_8268C510(text), out);
        }
    }
    return 0;
}
