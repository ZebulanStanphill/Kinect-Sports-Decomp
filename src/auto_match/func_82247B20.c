// Passes s, or a 256-byte stack buffer when s is null, to fn_8224BE90. self is unused.
// All four callers of fn_8224BE90 set r7 and r8 to 0, so it takes two more
// (unused) arguments after the termination flag.
extern void fn_8224BE90(void *reader, char *buf, int size, int terminate, int arg4, int arg5);

void fn_82247B20(void *self, void *reader, char *s)
{
    char buf[256];

    if (s)
        fn_8224BE90(reader, s, 256, 1, 0, 0);
    else
        fn_8224BE90(reader, buf, 256, 1, 0, 0);
}
