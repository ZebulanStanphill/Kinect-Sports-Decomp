typedef struct Pair_8258D810 {
    float first;
    float second;
} Pair_8258D810;

typedef struct Rect_8258D810 {
    Pair_8258D810 first;
    Pair_8258D810 second;
} Rect_8258D810;

typedef struct Text_8258D810 {
    unsigned int words[7];
} Text_8258D810;

typedef struct Argument_8258D810 {
    Text_8258D810 text;
    Rect_8258D810 rectangle;
} Argument_8258D810;

extern void *fn_8223B688(void *out, void *source);
extern void fn_82230300(void *text, int a, int b);
extern void fn_8258EE70(Pair_8258D810 *out, void *self, Argument_8258D810 *argument);

static __forceinline Pair_8258D810 MakePair(float a, float b)
{
    Pair_8258D810 result;
    result.first = a;
    result.second = b;
    return result;
}

void fn_8258D810(char *self, float x, float y, float width, float height, Text_8258D810 *text)
{
    if (text->words[4] != 0) {
        Rect_8258D810 rectangle;
        Pair_8258D810 result;
        Argument_8258D810 argument;
        rectangle.first = MakePair(x, y);
        rectangle.second = MakePair(width, height);
        fn_8223B688(&argument.text, text);
        argument.rectangle = rectangle;
        fn_8258EE70(&result, self + 0x1b0, &argument);
        fn_82230300(&argument.text, 1, 0);
    }
    fn_82230300(text, 1, 0);
}
