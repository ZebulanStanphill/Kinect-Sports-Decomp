/* std::operator==(const std::string &, const char *):
   left.compare(0, left.size(), right, strlen(right)) == 0 */
unsigned int strlen(const char *s);

typedef struct String {
    char buf[16];
    unsigned int size;
    unsigned int res;
} String;

extern int fn_8260D428(const String *self, unsigned int off, unsigned int n0,
                       const char *ptr, unsigned int count);

int fn_822BD338(const String *left, const char *right)
{
    return fn_8260D428(left, 0, left->size, right, strlen(right)) == 0;
}
