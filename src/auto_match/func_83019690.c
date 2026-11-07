typedef struct Key_83019690 {
    unsigned int a;
    unsigned int b;
} Key_83019690;

extern unsigned int fn_83016E90(void *self, Key_83019690 key, unsigned int hash);
extern int fn_83016EF8(void *self, Key_83019690 key, unsigned int hash);

void fn_83019690(void *self, Key_83019690 key)
{
    unsigned int hash = (key.a + key.b) % 0xc1;

    if (fn_83016E90(self, key, hash) == 0) {
        fn_83016EF8(self, key, hash);
    }
}
