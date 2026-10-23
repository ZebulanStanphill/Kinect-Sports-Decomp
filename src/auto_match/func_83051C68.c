extern void fn_830514A8(void *p);
extern void fn_83055EF8(int a, void *p);

typedef struct Sub Sub;
typedef struct SubVtbl {
    void *slots[8];
    void (*f20)(Sub *s);
} SubVtbl;
struct Sub {
    SubVtbl *vt;
};

void fn_83051C68(int param_1, int param_2)
{
    if (param_2 == 2) {
        *(unsigned char *)(param_1 + 0xa9) = *(unsigned char *)(param_1 + 0xa9) | 0x40;
        (*(Sub *)(param_1 + 0x78)).vt->f20((Sub *)(param_1 + 0x78));
    }
    fn_830514A8((void *)param_1);
    if (*(char *)(param_1 + 8) != '\0') {
        fn_83055EF8(*(int *)(param_1 + 0x60), (void *)param_1);
    }
}
