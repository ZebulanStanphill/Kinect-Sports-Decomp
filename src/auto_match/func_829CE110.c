typedef struct Obj_829CE110 {
    char pad[0x110];
    void *a;
    void *b;
    unsigned int c;
    char pad2[0x130 - 0x11c];
} Obj_829CE110;
extern char lbl_83215000[];
extern int fn_829C9E90(void *);
extern int fn_829CD3E8(void *);
extern int fn_829CFB48(int, unsigned int);

void fn_829CE110(Obj_829CE110 *self)
{
    if (self->a != 0) {
        fn_829C9E90(self->a);
        self->a = 0;
    }
    if (self->b != 0) {
        fn_829CD3E8(self->b);
        self->b = 0;
    }
    if (self->c != 0) {
        fn_829CFB48(4, self->c);
    }
    ((int *)(lbl_83215000 + 0x27a0))[self - (Obj_829CE110 *)(lbl_83215000 + 0x2410)] = 0;
}
