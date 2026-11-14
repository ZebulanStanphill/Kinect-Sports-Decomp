extern "C" int strcmp(const char *, const char *);

struct Name_8278AFF0 {
    int refs;
    int f04;
    char text[1];
};

struct Key_8278AFF0 {
    char pad0[0x38];
    unsigned int name;
    unsigned int group;
    int a;
    int b;
    unsigned int c;
    unsigned char flag;

    bool Equals(const Key_8278AFF0 &y) const;
};

bool Key_8278AFF0::Equals(const Key_8278AFF0 &y) const
{
    return strcmp(((Name_8278AFF0 *)(name & ~3u))->text, ((Name_8278AFF0 *)(y.name & ~3u))->text) == 0 &&
           strcmp(((Name_8278AFF0 *)(group & ~3u))->text, ((Name_8278AFF0 *)(y.group & ~3u))->text) == 0 &&
           a == y.a && b == y.b && c == y.c && flag == y.flag;
}
