extern unsigned short lbl_8324DBB0[0x400];
extern char lbl_8318C998[];
extern char lbl_8318E918[];
extern char lbl_8318FB18[];
extern char lbl_8319FB18[];
extern void fn_82EFDFC8(void *self);

void fn_82E82480(char *self)
{
    unsigned short *entry;
    int count = 0x381;
    int value = 0x7f;
    *(int *)(self + 0x4b14) = 1;
    *(int *)(self + 0x6f84) = 0x3ff;
    entry = &lbl_8324DBB0[0x7e];
    do {
        *++entry = value++;
    } while (--count != 0);
    {
        void *first = lbl_8318C998;
        void *second = lbl_8318E918;
        void *third = lbl_8318FB18;
        void *fourth = lbl_8319FB18;
        *(void **)(self + 0x5180) = first;
        *(void **)(self + 0x5184) = second;
        *(void **)(self + 0x519c) = third;
        *(void **)(self + 0x5198) = third;
        *(void **)(self + 0x51a0) = fourth;
    }
    fn_82EFDFC8(self);
}
