struct Entry_82800080 {
    char pad[0x1c];
    int (*fn)(char *b);
    void *next;
};

extern struct Entry_82800080 lbl_83156AF0[];

int fn_82800080(char *b)
{
    int (*f)(char *b) = lbl_83156AF0[*(unsigned short *)(b + 0x16)].fn;
    if (f)
        return f(b);
    return 0;
}
