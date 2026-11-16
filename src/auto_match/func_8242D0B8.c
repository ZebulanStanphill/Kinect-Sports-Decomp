extern void fn_8242D540(void *, unsigned char);
extern unsigned int fn_8255B1E0(void *, void *, int, int, int, int, int, float, int);
extern void fn_8255B400(void *, unsigned int);

void fn_8242D0B8(char *self, unsigned char enabled)
{
    char *state = *(char **)(self + 0x174);

    if ((unsigned int)(*(unsigned int *)(state + 0xb4) != 0) != enabled) {
        if (enabled) {
            fn_8242D540(self, 0);
            state = *(char **)(self + 0x174);
            *(unsigned int *)(state + 0xb4) = fn_8255B1E0(*(void **)(*(char **)(state + 0x9c) + 0x844),
                                                          state + 0xb0, 1, 0, 0, 0, 0, 0.0f, 0);
        } else {
            fn_8242D540(self, 1);
            state = *(char **)(self + 0x174);
            fn_8255B400(*(void **)(*(char **)(state + 0x9c) + 0x844), *(unsigned int *)(state + 0xb4));
            *(unsigned int *)(*(char **)(self + 0x174) + 0xb4) = 0;
        }
    }
}
