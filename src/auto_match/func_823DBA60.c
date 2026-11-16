typedef struct Value_823DBA60 {
    int type;
    int flags;

    union {
        double number;
        const char *string;
    } value;
} Value_823DBA60;

typedef struct Reference_823DBA60 {
    void *object;
    void *control;
} Reference_823DBA60;

extern void fn_82358FD8(void *, char *, int, const char *);
extern void fn_82273CD8(Value_823DBA60 *, int);
extern Reference_823DBA60 *fn_8229AE10(Reference_823DBA60 *, void *);
extern void fn_82672C20(void *, const char *, Value_823DBA60 *, int);
extern void fn_822315A0(void *);
extern void fn_82273C88(Value_823DBA60 *);

void fn_823DBA60(void **self, int visible)
{
    Value_823DBA60 text;
    Value_823DBA60 number;
    Reference_823DBA60 numberReference;
    Reference_823DBA60 textReference;
    char buffer[2048];
    void *movie = *(void **)((char *)*self + 0xd4);

    fn_82358FD8(*(void **)((char *)movie + 0x1c), buffer, 0x400, "coopmarker_play");
    text.type = 0;
    text.flags = 0;
    fn_82273CD8(&text, 5);
    text.value.string = buffer;
    fn_82672C20(fn_8229AE10(&textReference, movie)->object, "setText", &text, 1);
    if (textReference.control != 0) {
        fn_822315A0(textReference.control);
    }
    number.type = 0;
    number.flags = 0;
    fn_82273CD8(&number, 3);
    number.value.number = (double)visible;
    fn_82672C20(fn_8229AE10(&numberReference, movie)->object, "_root.showCoopMarker", &number, 1);
    if (numberReference.control != 0) {
        fn_822315A0(numberReference.control);
    }
    fn_82273C88(&number);
    fn_82273C88(&text);
}
