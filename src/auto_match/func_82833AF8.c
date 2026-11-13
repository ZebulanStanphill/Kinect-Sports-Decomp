/* Forwards a NUL-terminated string (length including the terminator) to fn_82833988, like the sibling
   fn_82833AD8 with both extra flags set. */
extern unsigned int strlen(const char *s);
extern void fn_82833988(void *self, void *a, int b, int c, int d, int e, int f, int g);

void fn_82833AF8(void *self, const char *s, void *a)
{
    fn_82833988(self, a, 0, 0, (int)s, strlen(s) + 1, 1, 1);
}
