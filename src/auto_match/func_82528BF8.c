typedef unsigned short wchar_t;

typedef struct Strings_82528BF8 {
    void *table;
    char prefix[1];
} Strings_82528BF8;

extern int fn_82F65B18(const char *text);
extern int fn_82526C70(char *buffer, int size, const char *format, ...);
extern int fn_82528EE0(unsigned short *buffer, int size, const unsigned short *format, ...);
extern void fn_825541F8(short *dest, char *source, unsigned int size);
extern int fn_825A0F28(void *table, const char *prefix, const char *name, wchar_t *out, unsigned int size,
                       int option);

typedef union RandomSample_82528BF8 {
    unsigned int bits;
    float value;
} RandomSample_82528BF8;

extern unsigned int lbl_83265A28;
extern const float lbl_821CA45C[2];

int fn_82528BF8(Strings_82528BF8 *self, char *name, wchar_t *out, unsigned int size, int option, int silent)
{
    int found = 0;

    if (self->table && name && *name) {
        char key[2048];
        char *dest = key;
        int i = 0;

        do {
            char ch = name[i];
            *dest = ch;
            if (ch == 0 || ch == ';') {
                *dest = 0;
                break;
            }
            ++i;
            ++dest;
        } while (i < (int)sizeof(key));
        if (dest == key + sizeof(key)) {
            /* dest is one past the buffer. */
            dest[-1] = 0;
        }
        if (name[i] == ';') {
            int count = fn_82F65B18(name + i + 1);

            RandomSample_82528BF8 sample;

            lbl_83265A28 = lbl_83265A28 * 1664525u + 1013904223u;
            sample.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
            key[i] = 0;
            fn_82526C70(key, sizeof(key), "%s%i", key,
                        (int)((sample.value - lbl_821CA45C[1]) * (float)count + lbl_821CA45C[1]));
            found = fn_825A0F28(self->table, self->prefix, key, out, size, option);
        } else {
            found = fn_825A0F28(self->table, self->prefix, name, out, size, option);
        }
    }
    if (found == 0 && silent == 0) {
        wchar_t wideName[256];
        fn_825541F8((short *)wideName, name, 256);
        fn_82528EE0(out, size, L"%s (Missing)", wideName);
    }
    return found;
}
